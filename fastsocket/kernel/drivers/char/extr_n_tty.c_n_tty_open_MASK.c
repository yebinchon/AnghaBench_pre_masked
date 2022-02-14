
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int minimum_to_wake; scalar_t__ closing; scalar_t__ column; void* echo_buf; void* read_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct tty_struct*,int *) ;
 int FUNC_2 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_4)
{
 if (!VAR_4)
  return -VAR_0;


 if (!VAR_4->read_buf) {
  VAR_4->read_buf = FUNC_0(VAR_3, VAR_2);
  if (!VAR_4->read_buf)
   return -VAR_1;
 }
 if (!VAR_4->echo_buf) {
  VAR_4->echo_buf = FUNC_0(VAR_3, VAR_2);

  if (!VAR_4->echo_buf)
   return -VAR_1;
 }
 FUNC_2(VAR_4);
 VAR_4->column = 0;
 FUNC_1(VAR_4, ((void*)0));
 VAR_4->minimum_to_wake = 1;
 VAR_4->closing = 0;
 return 0;
}
