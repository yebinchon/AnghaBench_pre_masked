
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct cx18 {unsigned int active_input; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1, unsigned int *VAR_2)
{
 struct cx18 *VAR_3 = ((struct cx18_open_id *)VAR_1)->cx;

 *VAR_2 = VAR_3->active_input;
 return 0;
}
