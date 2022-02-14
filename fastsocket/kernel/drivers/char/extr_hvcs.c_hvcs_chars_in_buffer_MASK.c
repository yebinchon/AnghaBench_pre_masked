
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct hvcs_struct* driver_data; } ;
struct hvcs_struct {int chars_in_buffer; } ;



__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_0)
{
 struct hvcs_struct *VAR_1 = VAR_0->driver_data;

 return VAR_1->chars_in_buffer;
}
