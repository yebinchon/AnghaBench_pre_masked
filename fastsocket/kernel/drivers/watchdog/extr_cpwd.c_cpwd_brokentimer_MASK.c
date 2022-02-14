
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cpwd {TYPE_1__* devs; } ;
struct TYPE_7__ {int expires; } ;
struct TYPE_6__ {int runstatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct cpwd*,int) ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_4)
{
 struct cpwd *VAR_5 = (struct cpwd *) VAR_4;
 int VAR_6, VAR_7 = 0;




 if (FUNC_3(&VAR_3))
  FUNC_2(&VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_5->devs[VAR_6].runstatus & VAR_2) {
   ++VAR_7;
   FUNC_1(VAR_5, VAR_6);
  }
 }

 if (VAR_7) {

  VAR_3.expires = VAR_0;
  FUNC_0(&VAR_3);
 }
}
