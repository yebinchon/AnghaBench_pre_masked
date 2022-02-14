
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_2__ {scalar_t__ fd; int vf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__ VAR_1 ;

s32 FUNC_1()
{
  int VAR_2;
  if (VAR_0 == 0 || VAR_1.fd < 0)
    return 0;
  VAR_2 = ((s32) FUNC_0(&VAR_1.vf));
  if (VAR_2 < 0)
    VAR_2 = 0;

  return VAR_2;
}
