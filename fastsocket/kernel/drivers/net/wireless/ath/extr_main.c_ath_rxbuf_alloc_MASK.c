
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct sk_buff {scalar_t__ data; } ;
struct ath_common {unsigned long cachelsz; } ;
typedef int gfp_t ;


 struct sk_buff* FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (struct sk_buff*,unsigned long) ;

struct sk_buff *FUNC_3(struct ath_common *VAR_0,
    u32 VAR_1,
    gfp_t VAR_2)
{
 struct sk_buff *VAR_3;
 u32 VAR_4;
 VAR_3 = FUNC_0(VAR_1 + VAR_0->cachelsz - 1, VAR_2);
 if (VAR_3 != ((void*)0)) {
  VAR_4 = ((unsigned long) VAR_3->data) % VAR_0->cachelsz;
  if (VAR_4 != 0)
   FUNC_2(VAR_3, VAR_0->cachelsz - VAR_4);
 } else {
  FUNC_1("skbuff alloc of size %u failed\n", VAR_1);
  return ((void*)0);
 }

 return VAR_3;
}
