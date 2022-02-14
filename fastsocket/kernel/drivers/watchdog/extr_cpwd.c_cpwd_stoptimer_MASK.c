
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpwd {TYPE_1__* devs; scalar_t__ broken; } ;
struct TYPE_2__ {int runstatus; scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct cpwd*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct cpwd *VAR_4, int VAR_5)
{
 if (FUNC_1(VAR_4->devs[VAR_5].regs + VAR_1) & VAR_3) {
  FUNC_2(VAR_4, VAR_5, VAR_0);

  if (VAR_4->broken) {
   VAR_4->devs[VAR_5].runstatus |= VAR_2;
   FUNC_0((unsigned long) VAR_4);
  }
 }
}
