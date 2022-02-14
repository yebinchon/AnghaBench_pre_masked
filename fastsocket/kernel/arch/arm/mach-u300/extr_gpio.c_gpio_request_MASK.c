
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ users; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

int FUNC_0(unsigned VAR_3, const char *VAR_4)
{
 if (VAR_1[VAR_3].users)
  return -VAR_0;
 else
  VAR_1[VAR_3].users++;

 VAR_2++;

 return 0;
}
