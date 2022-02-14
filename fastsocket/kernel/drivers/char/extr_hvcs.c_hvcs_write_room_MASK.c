
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct hvcs_struct* driver_data; } ;
struct hvcs_struct {scalar_t__ open_count; int chars_in_buffer; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_1)
{
 struct hvcs_struct *VAR_2 = VAR_1->driver_data;

 if (!VAR_2 || VAR_2->open_count <= 0)
  return 0;

 return VAR_0 - VAR_2->chars_in_buffer;
}
