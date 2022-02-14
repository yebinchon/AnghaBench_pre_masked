
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehca_mw {int dummy; } ;
struct ehca_mr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*,int,int ,int ,int *) ;
 int FUNC_1 (int *) ;
 int * VAR_2 ;
 void* VAR_3 ;

int FUNC_2(void)
{
 VAR_2 = FUNC_0("ehca_cache_mr",
         sizeof(struct ehca_mr), 0,
         VAR_1,
         ((void*)0));
 if (!VAR_2)
  return -VAR_0;
 VAR_3 = FUNC_0("ehca_cache_mw",
         sizeof(struct ehca_mw), 0,
         VAR_1,
         ((void*)0));
 if (!VAR_3) {
  FUNC_1(VAR_2);
  VAR_2 = ((void*)0);
  return -VAR_0;
 }
 return 0;
}
