
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scatterlist {unsigned int length; scalar_t__ offset; } ;
struct page {int dummy; } ;
struct TYPE_3__ {scalar_t__ page_offset; unsigned int size; struct page* page; } ;
typedef TYPE_1__ skb_frag_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (char*,int,unsigned int,...) ;
 struct scatterlist* FUNC_2 (struct scatterlist*) ;
 struct page* FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_4(struct scatterlist *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3, skb_frag_t *VAR_4,
    int VAR_5)
{
 unsigned int VAR_6 = VAR_3;
 unsigned int VAR_7 = VAR_1->length - VAR_2;
 struct page *VAR_8 = FUNC_3(VAR_1);
 int VAR_9;

 VAR_9 = 0;
 do {
  unsigned int VAR_10;

  if (!VAR_7) {
   VAR_1 = FUNC_2(VAR_1);
   if (!VAR_1) {
    FUNC_1("sg %d NULL, len %u/%u.\n",
     VAR_9, VAR_6, VAR_3);
    return -VAR_0;
   }
   VAR_2 = 0;
   VAR_7 = VAR_1->length;
   VAR_8 = FUNC_3(VAR_1);

  }
  VAR_10 = FUNC_0(VAR_6, VAR_7);
  if (VAR_9 && VAR_8 == VAR_4[VAR_9 - 1].page &&
      VAR_2 + VAR_1->offset ==
   VAR_4[VAR_9 - 1].page_offset + VAR_4[VAR_9 - 1].size) {
   VAR_4[VAR_9 - 1].size += VAR_10;
  } else {
   if (VAR_9 >= VAR_5) {
    FUNC_1("too many pages %u, dlen %u.\n",
     VAR_5, VAR_3);
    return -VAR_0;
   }

   VAR_4[VAR_9].page = VAR_8;
   VAR_4[VAR_9].page_offset = VAR_1->offset + VAR_2;
   VAR_4[VAR_9].size = VAR_10;
   VAR_9++;
  }
  VAR_6 -= VAR_10;
  VAR_2 += VAR_10;
  VAR_7 -= VAR_10;
 } while (VAR_6);

 return VAR_9;
}
