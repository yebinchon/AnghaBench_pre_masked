
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct bnx2 {int ctx_pages; int* ctx_blk_mapping; scalar_t__* ctx_blk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bnx2*,int ) ;
 int FUNC_1 (struct bnx2*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct bnx2 *VAR_12)
{
 int VAR_13, VAR_14 = 0;
 u32 VAR_15;

 VAR_15 = VAR_1 | VAR_2 | (1 << 12);
 VAR_15 |= (VAR_8 - 8) << 16;
 FUNC_1(VAR_12, VAR_0, VAR_15);
 for (VAR_13 = 0; VAR_13 < 10; VAR_13++) {
  VAR_15 = FUNC_0(VAR_12, VAR_0);
  if (!(VAR_15 & VAR_2))
   break;
  FUNC_3(2);
 }
 if (VAR_15 & VAR_2)
  return -VAR_10;

 for (VAR_13 = 0; VAR_13 < VAR_12->ctx_pages; VAR_13++) {
  int VAR_16;

  if (VAR_12->ctx_blk[VAR_13])
   FUNC_2(VAR_12->ctx_blk[VAR_13], 0, VAR_9);
  else
   return -VAR_11;

  FUNC_1(VAR_12, VAR_5,
   (VAR_12->ctx_blk_mapping[VAR_13] & 0xffffffff) |
   VAR_6);
  FUNC_1(VAR_12, VAR_7,
   (u64) VAR_12->ctx_blk_mapping[VAR_13] >> 32);
  FUNC_1(VAR_12, VAR_3, VAR_13 |
   VAR_4);
  for (VAR_16 = 0; VAR_16 < 10; VAR_16++) {

   VAR_15 = FUNC_0(VAR_12, VAR_3);
   if (!(VAR_15 & VAR_4))
    break;
   FUNC_3(5);
  }
  if (VAR_15 & VAR_4) {
   VAR_14 = -VAR_10;
   break;
  }
 }
 return VAR_14;
}
