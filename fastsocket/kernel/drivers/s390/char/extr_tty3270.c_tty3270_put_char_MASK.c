
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct tty3270* driver_data; } ;
struct tty3270 {scalar_t__ char_count; unsigned char* char_buf; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_1, unsigned char VAR_2)
{
 struct tty3270 *VAR_3;

 VAR_3 = VAR_1->driver_data;
 if (!VAR_3 || VAR_3->char_count >= VAR_0)
  return 0;
 VAR_3->char_buf[VAR_3->char_count++] = VAR_2;
 return 1;
}
