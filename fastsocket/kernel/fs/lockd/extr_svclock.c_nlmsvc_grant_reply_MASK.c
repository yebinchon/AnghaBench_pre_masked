
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_cookie {scalar_t__ data; } ;
struct nlm_block {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int,scalar_t__) ;
 scalar_t__ VAR_1 ;
 struct nlm_block* FUNC_1 (struct nlm_cookie*) ;
 int FUNC_2 (struct nlm_block*,int) ;
 int FUNC_3 (struct nlm_block*) ;
 int FUNC_4 (struct nlm_block*) ;

void
FUNC_5(struct nlm_cookie *VAR_2, __be32 VAR_3)
{
 struct nlm_block *VAR_4;

 FUNC_0("grant_reply: looking for cookie %x, s=%d \n",
  *(unsigned int *)(VAR_2->data), VAR_3);
 if (!(VAR_4 = FUNC_1(VAR_2)))
  return;

 if (VAR_4) {
  if (VAR_3 == VAR_1) {

   FUNC_2(VAR_4, 10 * VAR_0);
  } else {


   FUNC_4(VAR_4);
  }
 }
 FUNC_3(VAR_4);
}
