
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_filter_spec {int flags; scalar_t__ type; int data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2(struct efx_filter_spec *VAR_5)
{
 FUNC_0(!(VAR_5->flags &
         (VAR_0 | VAR_1)));

 if (VAR_5->type != VAR_3)
  return -VAR_4;

 VAR_5->type = VAR_2;
 FUNC_1(VAR_5->data, 0, sizeof(VAR_5->data));
 return 0;
}
