
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_refcnt {scalar_t__ ref_count; int ref_group; } ;
typedef scalar_t__ os_ref_count_t ;


 int VAR_0 ;
 int FUNC_0 (struct os_refcnt*,scalar_t__) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*,int ) ;
 int FUNC_3 (int ,int) ;

os_ref_count_t
FUNC_4(struct os_refcnt *VAR_1)
{
 os_ref_count_t VAR_2 = VAR_1->ref_count;
 FUNC_0(VAR_1, VAR_2);
 VAR_1->ref_count = --VAR_2;
 return VAR_2;
}
