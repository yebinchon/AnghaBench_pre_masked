
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int recv_ctrl_pipe; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct us_data*) ;
 int FUNC_1 (struct us_data*,int ,unsigned char,int,int ,int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct us_data *VAR_3, unsigned char *VAR_4)
{
 unsigned char VAR_5;

 if (FUNC_0(VAR_3) == VAR_2)
  VAR_5 = VAR_1;
 else
  VAR_5 = VAR_0;

 return FUNC_1(VAR_3, VAR_3->recv_ctrl_pipe,
  VAR_5, 0xc0, 0, 0, VAR_4, 4);
}
