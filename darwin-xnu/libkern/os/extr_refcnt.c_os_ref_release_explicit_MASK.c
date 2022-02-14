
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_refgrp {int dummy; } ;
struct os_refcnt {int ref_count; struct os_refgrp* ref_group; } ;
typedef scalar_t__ os_ref_count_t ;
typedef int memory_order ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct os_refcnt*,scalar_t__) ;
 int FUNC_4 (struct os_refgrp*,void*) ;
 int FUNC_5 (struct os_refgrp*,void*,int ) ;
 int FUNC_6 (struct os_refgrp*,int) ;

os_ref_count_t
FUNC_7(struct os_refcnt *VAR_1, memory_order VAR_2, memory_order VAR_3)
{
 os_ref_count_t VAR_4 = FUNC_1(&VAR_1->ref_count, 1, VAR_2);
 FUNC_3(VAR_1, VAR_4);
 if (FUNC_0(--VAR_4 == 0)) {
  FUNC_2(&VAR_1->ref_count, VAR_3);



 }





 return VAR_4;
}
