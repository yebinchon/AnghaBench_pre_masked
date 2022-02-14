
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct us_data {int recv_ctrl_pipe; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (struct us_data*,int ,unsigned char,int,int ,int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(struct us_data *VAR_1,
        unsigned char VAR_2,
        unsigned char VAR_3,
        unsigned char *VAR_4)
{
 return FUNC_0(VAR_1,
  VAR_1->recv_ctrl_pipe,
  VAR_2 | VAR_0,
  0xC0,
  (u16)VAR_3,
  0,
  VAR_4,
  1);
}
