
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int read_cnt; unsigned char* read_buf; size_t read_head; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(unsigned char VAR_1, struct tty_struct *VAR_2)
{
 if (VAR_2->read_cnt < VAR_0) {
  VAR_2->read_buf[VAR_2->read_head] = VAR_1;
  VAR_2->read_head = (VAR_2->read_head + 1) & (VAR_0-1);
  VAR_2->read_cnt++;
 }
}
