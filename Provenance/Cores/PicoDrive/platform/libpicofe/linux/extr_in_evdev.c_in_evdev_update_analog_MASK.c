
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_absinfo {int value; } ;
struct TYPE_2__ {int* abs_adj; int* abs_mult; int fd; } ;
typedef TYPE_1__ in_evdev_t ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ,int ,struct input_absinfo*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, int VAR_2, int *VAR_3)
{
 struct input_absinfo VAR_4;
 in_evdev_t *VAR_5 = VAR_1;
 int VAR_6;

 if ((unsigned int)VAR_2 >= VAR_0)
  return -1;

 VAR_6 = FUNC_1(VAR_5->fd, FUNC_0(VAR_2), &VAR_4);
 if (VAR_6 != 0)
  return VAR_6;

 *VAR_3 = (VAR_4.value + VAR_5->abs_adj[VAR_2]) * VAR_5->abs_mult[VAR_2];
 *VAR_3 >>= 16;
 return 0;
}
