
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_5__ {int CR3; int CR1; int HIRQ; } ;
struct TYPE_6__ {TYPE_2__ reg; int status; TYPE_1__* filter; } ;
struct TYPE_4__ {int mode; scalar_t__ cival; scalar_t__ smval; scalar_t__ cimask; scalar_t__ smmask; scalar_t__ chan; scalar_t__ range; scalar_t__ FAD; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int ) ;

void FUNC_1(void) {
  u8 VAR_3;

  VAR_3 = VAR_2->reg.CR3 >> 8;

  VAR_2->filter[VAR_3].mode = VAR_2->reg.CR1 & 0xFF;

  if (VAR_2->filter[VAR_3].mode & 0x80)
  {

     VAR_2->filter[VAR_3].mode = 0;
     VAR_2->filter[VAR_3].FAD = 0;
     VAR_2->filter[VAR_3].range = 0;
     VAR_2->filter[VAR_3].chan = 0;
     VAR_2->filter[VAR_3].smmask = 0;
     VAR_2->filter[VAR_3].cimask = 0;
     VAR_2->filter[VAR_3].smval = 0;
     VAR_2->filter[VAR_3].cival = 0;
  }

  FUNC_0(VAR_2->status);
  VAR_2->reg.HIRQ |= VAR_0 | VAR_1;
}
