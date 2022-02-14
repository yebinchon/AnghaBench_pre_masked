
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ic_simrh; } ;
struct TYPE_3__ {int status; scalar_t__ action; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int) ;
 int* VAR_6 ;
 unsigned int FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_7)
{
 int VAR_8, VAR_9;
 unsigned int VAR_10 = FUNC_2(VAR_7);

 if (!(VAR_3[VAR_10].status & (VAR_0|VAR_1))
   && VAR_3[VAR_10].action) {

  VAR_8 = VAR_4[VAR_10];
  VAR_9 = VAR_5[VAR_10];

  VAR_6[VAR_9] |= 1 << VAR_8;
  FUNC_1(&VAR_2->ic_simrh + VAR_9, VAR_6[VAR_9]);





  FUNC_0();
 }
}
