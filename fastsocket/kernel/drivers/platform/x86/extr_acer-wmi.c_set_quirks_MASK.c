
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int capability; } ;
struct TYPE_3__ {scalar_t__ brightness; scalar_t__ mailled; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_0(void)
{
 if (!VAR_2)
  return;

 if (VAR_3->mailled)
  VAR_2->capability |= VAR_1;

 if (VAR_3->brightness)
  VAR_2->capability |= VAR_0;
}
