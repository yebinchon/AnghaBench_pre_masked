
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int* iobuf; int ifnum; int recv_ctrl_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct us_data*,int ,int ,int,int ,int ,int*,int,int) ;

int FUNC_2(struct us_data *VAR_5)
{
 int VAR_6;


 VAR_5->iobuf[0] = 0;
 VAR_6 = FUNC_1(VAR_5, VAR_5->recv_ctrl_pipe,
     VAR_4,
     VAR_1 | VAR_3 |
     VAR_2,
     0, VAR_5->ifnum, VAR_5->iobuf, 1, 10*VAR_0);

 FUNC_0("GetMaxLUN command result is %d, data is %d\n",
    VAR_6, VAR_5->iobuf[0]);


 if (VAR_6 > 0)
  return VAR_5->iobuf[0];
 return 0;
}
