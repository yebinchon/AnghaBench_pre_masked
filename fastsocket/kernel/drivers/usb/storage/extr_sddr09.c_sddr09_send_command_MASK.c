
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned int recv_ctrl_pipe; unsigned int send_ctrl_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;


 int FUNC_0 (struct us_data*,unsigned int,unsigned char,unsigned char,int ,int ,unsigned char*,unsigned int) ;

__attribute__((used)) static int
FUNC_1(struct us_data *VAR_3,
      unsigned char VAR_4,
      unsigned char VAR_5,
      unsigned char *VAR_6,
      unsigned int VAR_7) {
 unsigned int VAR_8;
 unsigned char VAR_9 = (0x41 | VAR_5);
 int VAR_10;



 if (VAR_5 == VAR_2)
  VAR_8 = VAR_3->recv_ctrl_pipe;
 else
  VAR_8 = VAR_3->send_ctrl_pipe;

 VAR_10 = FUNC_0(VAR_3, VAR_8, VAR_4, VAR_9,
       0, 0, VAR_6, VAR_7);
 switch (VAR_10) {
  case 129: return 0;
  case 128: return -VAR_1;
  default: return -VAR_0;
 }
}
