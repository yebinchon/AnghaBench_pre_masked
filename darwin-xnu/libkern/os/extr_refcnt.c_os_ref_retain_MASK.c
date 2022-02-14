
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_refcnt {int ref_group; int ref_count; } ;
typedef int os_ref_count_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct os_refcnt*,int ) ;
 int FUNC_2 (int ,void*,int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct os_refcnt *VAR_2)
{
 os_ref_count_t VAR_3 = FUNC_0(&VAR_2->ref_count, 1, VAR_1);
 FUNC_1(VAR_2, VAR_3);





}
