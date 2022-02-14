
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int echo_cnt; int echo_pos; unsigned char* echo_buf; int echo_overrun; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(unsigned char VAR_3, struct tty_struct *VAR_4)
{
 int VAR_5;

 if (VAR_4->echo_cnt == VAR_2) {

  VAR_5 = VAR_4->echo_pos;





  if (VAR_4->echo_buf[VAR_4->echo_pos] == VAR_1) {
   if (VAR_4->echo_buf[(VAR_4->echo_pos + 1) &
       (VAR_2 - 1)] ==
      VAR_0) {
    VAR_4->echo_pos += 3;
    VAR_4->echo_cnt -= 2;
   } else {
    VAR_4->echo_pos += 2;
    VAR_4->echo_cnt -= 1;
   }
  } else {
   VAR_4->echo_pos++;
  }
  VAR_4->echo_pos &= VAR_2 - 1;

  VAR_4->echo_overrun = 1;
 } else {
  VAR_5 = VAR_4->echo_pos + VAR_4->echo_cnt;
  VAR_5 &= VAR_2 - 1;
  VAR_4->echo_cnt++;
 }

 VAR_4->echo_buf[VAR_5] = VAR_3;
}
