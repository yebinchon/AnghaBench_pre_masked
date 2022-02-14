
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int* iobuf; int send_ctrl_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct us_data*,int ,int,int,int,int,int*,int,int) ;

int FUNC_2(struct us_data *VAR_2)
{
 int VAR_3;

 FUNC_0("Attempting to init eUSCSI bridge...\n");
 VAR_2->iobuf[0] = 0x1;
 VAR_3 = FUNC_1(VAR_2, VAR_2->send_ctrl_pipe,
   0x0C, VAR_0 | VAR_1,
   0x01, 0x0, VAR_2->iobuf, 0x1, 5000);
 FUNC_0("-- result is %d\n", VAR_3);

 return 0;
}
