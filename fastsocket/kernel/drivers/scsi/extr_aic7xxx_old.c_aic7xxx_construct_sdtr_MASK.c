
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic7xxx_host {unsigned char* msg_buf; int msg_len; int msg_index; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct aic7xxx_host *VAR_3, unsigned char VAR_4,
        unsigned char VAR_5)
{
  VAR_3->msg_buf[VAR_3->msg_index++] = VAR_0;
  VAR_3->msg_buf[VAR_3->msg_index++] = VAR_2;
  VAR_3->msg_buf[VAR_3->msg_index++] = VAR_1;
  VAR_3->msg_buf[VAR_3->msg_index++] = VAR_4;
  VAR_3->msg_buf[VAR_3->msg_index++] = VAR_5;
  VAR_3->msg_len += 5;
}
