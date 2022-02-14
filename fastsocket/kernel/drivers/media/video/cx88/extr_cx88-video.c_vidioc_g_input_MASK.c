
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct cx88_core {unsigned int input; } ;
struct cx8800_fh {TYPE_1__* dev; } ;
struct TYPE_2__ {struct cx88_core* core; } ;



__attribute__((used)) static int FUNC_0 (struct file *VAR_0, void *VAR_1, unsigned int *VAR_2)
{
 struct cx88_core *VAR_3 = ((struct cx8800_fh *)VAR_1)->dev->core;

 *VAR_2 = VAR_3->input;
 return 0;
}
