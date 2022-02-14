
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehca_qp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ,int ,int *) ;
 int VAR_2 ;

int FUNC_1(void)
{
 VAR_2 = FUNC_0("ehca_cache_qp",
         sizeof(struct ehca_qp), 0,
         VAR_1,
         ((void*)0));
 if (!VAR_2)
  return -VAR_0;
 return 0;
}
