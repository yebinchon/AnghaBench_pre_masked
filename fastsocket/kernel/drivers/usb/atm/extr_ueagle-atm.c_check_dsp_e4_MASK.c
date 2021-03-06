
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef unsigned int u64 ;
struct l1_code {scalar_t__ const* code; scalar_t__* page_number_to_block_index; struct block_index* page_header; int string_header; } ;
struct block_index {int PageOffset; int PageSize; int PageNumber; scalar_t__ NotLastBlock; } ;


 int E4_MAX_PAGE_NUMBER ;
 scalar_t__ E4_NO_SWAPPAGE_HEADERS ;
 unsigned int E4_PAGE_BYTES (int ) ;
 int le16_to_cpu (int ) ;
 scalar_t__ le32_to_cpu (int ) ;
 scalar_t__ strcmp (char*,int ) ;

__attribute__((used)) static int check_dsp_e4(const u8 *dsp, int len)
{
 int i;
 struct l1_code *p = (struct l1_code *) dsp;
 unsigned int sum = p->code - dsp;

 if (len < sum)
  return 1;

 if (strcmp("STRATIPHY ANEXA", p->string_header) != 0 &&
     strcmp("STRATIPHY ANEXB", p->string_header) != 0)
  return 1;

 for (i = 0; i < E4_MAX_PAGE_NUMBER; i++) {
  struct block_index *blockidx;
  u8 blockno = p->page_number_to_block_index[i];
  if (blockno >= E4_NO_SWAPPAGE_HEADERS)
   continue;

  do {
   u64 l;

   if (blockno >= E4_NO_SWAPPAGE_HEADERS)
    return 1;

   blockidx = &p->page_header[blockno++];
   if ((u8 *)(blockidx + 1) - dsp >= len)
    return 1;

   if (le16_to_cpu(blockidx->PageNumber) != i)
    return 1;

   l = E4_PAGE_BYTES(blockidx->PageSize);
   sum += l;
   l += le32_to_cpu(blockidx->PageOffset);
   if (l > len)
    return 1;


  } while (blockidx->NotLastBlock);
 }

 return (sum == len) ? 0 : 1;
}
