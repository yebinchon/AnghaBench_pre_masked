
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ref_count; int rw_lock; } ;
typedef TYPE_1__ cl_direct_read_lock_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(cl_direct_read_lock_t *VAR_4)
{
 FUNC_3(&VAR_4->rw_lock);

 FUNC_4(&VAR_2);
 if (VAR_4->ref_count == 1) {
  FUNC_1(VAR_4, VAR_1);
  FUNC_5(&VAR_2);
  FUNC_2(&VAR_4->rw_lock, VAR_3);
  FUNC_0(VAR_4, VAR_0);
 } else {
  --VAR_4->ref_count;
  FUNC_5(&VAR_2);
 }
}
