
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_refcnt {int ref_count; } ;
typedef int os_ref_count_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline os_ref_count_t
FUNC_1(struct os_refcnt *VAR_1)
{
 return FUNC_0(&VAR_1->ref_count, VAR_0);
}
