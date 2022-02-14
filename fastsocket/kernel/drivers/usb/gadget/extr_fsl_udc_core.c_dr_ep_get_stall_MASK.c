
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * endptctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(unsigned char VAR_3, unsigned char VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(&VAR_2->endptctrl[VAR_3]);
 if (VAR_4)
  return (VAR_5 & VAR_1) ? 1 : 0;
 else
  return (VAR_5 & VAR_0) ? 1 : 0;
}
