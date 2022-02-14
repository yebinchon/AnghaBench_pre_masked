
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct Scsp {TYPE_2__* slots; } ;
struct TYPE_3__ {int attenuation; int num; int envelope; } ;
struct TYPE_4__ {TYPE_1__ state; } ;
typedef int ScspDsp ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct Scsp*,int ,int) ;
 struct Scsp VAR_1 ;

void FUNC_3(struct Scsp* VAR_2)
{
   int VAR_3;
   FUNC_2(VAR_2, 0, sizeof(struct Scsp));

   for (VAR_3 = 0; VAR_3 < 32; VAR_3++)
   {
      VAR_2->slots[VAR_3].state.attenuation = 0x3FF;
      VAR_2->slots[VAR_3].state.envelope = VAR_0;
      VAR_2->slots[VAR_3].state.num = VAR_3;
   }

   FUNC_1();
   FUNC_0();

   FUNC_2(&VAR_1, 0, sizeof(ScspDsp));

}
