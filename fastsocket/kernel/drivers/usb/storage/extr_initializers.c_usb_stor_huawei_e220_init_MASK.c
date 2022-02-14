
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int send_ctrl_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct us_data*,int ,int ,int,int,int,int *,int,int) ;

int FUNC_2(struct us_data *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_3->send_ctrl_pipe,
          VAR_1,
          VAR_2 | VAR_0,
          0x01, 0x0, ((void*)0), 0x0, 1000);
 FUNC_0("Huawei mode set result is %d\n", VAR_4);
 return 0;
}
