
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd_vn_data {int fv_lock; struct fd_vn_data* fv_buf; } ;


 int FUNC_0 (struct fd_vn_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(void *VAR_3)
{
 struct fd_vn_data *VAR_4 = (struct fd_vn_data *)VAR_3;

 if (VAR_4->fv_buf)
  FUNC_0(VAR_4->fv_buf, VAR_0);
 FUNC_1(&VAR_4->fv_lock, VAR_2);
 FUNC_0(VAR_4, VAR_1);
}
