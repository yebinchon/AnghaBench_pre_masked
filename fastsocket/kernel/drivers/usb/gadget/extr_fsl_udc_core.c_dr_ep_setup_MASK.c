
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * endptctrl; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 TYPE_1__* VAR_6 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (unsigned int,int *) ;

__attribute__((used)) static void FUNC_2(unsigned char VAR_7, unsigned char VAR_8,
   unsigned char VAR_9)
{
 unsigned int VAR_10 = 0;

 VAR_10 = FUNC_0(&VAR_6->endptctrl[VAR_7]);
 if (VAR_8) {
  if (VAR_7)
   VAR_10 |= VAR_3;
  VAR_10 |= VAR_4;
  VAR_10 |= ((unsigned int)(VAR_9)
    << VAR_5);
 } else {
  if (VAR_7)
   VAR_10 |= VAR_0;
  VAR_10 |= VAR_1;
  VAR_10 |= ((unsigned int)(VAR_9)
    << VAR_2);
 }

 FUNC_1(VAR_10, &VAR_6->endptctrl[VAR_7]);
}
