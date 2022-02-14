
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int* iobuf; int recv_ctrl_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct us_data*,int ,int ,int,int ,int,int*,int) ;

__attribute__((used)) static int FUNC_2(struct us_data *VAR_3)
{
 int VAR_4;

 if (!VAR_3)
  return VAR_0;


 VAR_4 = FUNC_1(VAR_3, VAR_3->recv_ctrl_pipe,
       0, 0xA0, 0, 7, VAR_3->iobuf, 1);

 if (VAR_4 != VAR_2)
  return VAR_0;

 if (VAR_3->iobuf[0] != 0x50) {
  FUNC_0("jumpshot_get_status:  0x%2x\n",
     VAR_3->iobuf[0]);
  return VAR_0;
 }

 return VAR_1;
}
