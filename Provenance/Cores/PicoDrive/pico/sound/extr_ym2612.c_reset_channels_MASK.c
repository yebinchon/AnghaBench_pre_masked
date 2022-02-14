
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ TBC; scalar_t__ TB; scalar_t__ TAC; scalar_t__ TA; scalar_t__ mode; } ;
struct TYPE_8__ {TYPE_1__ ST; } ;
struct TYPE_11__ {scalar_t__ slot_mask; TYPE_2__ OPN; } ;
struct TYPE_10__ {scalar_t__ op1_out; scalar_t__ mem_value; TYPE_3__* SLOT; scalar_t__ fc; } ;
struct TYPE_9__ {int volume; int state; } ;
typedef TYPE_4__ FM_CH ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;

__attribute__((used)) static void FUNC_0(FM_CH *VAR_3)
{
 int VAR_4,VAR_5;

 VAR_2 = 0;
 VAR_2 = 0;
 VAR_2 = 0;
 VAR_2 = 0;
 VAR_2 = 0;

 for( VAR_4 = 0 ; VAR_4 < 6 ; VAR_4++ )
 {
  VAR_3[VAR_4].fc = 0;
  for(VAR_5 = 0 ; VAR_5 < 4 ; VAR_5++ )
  {
   VAR_3[VAR_4].SLOT[VAR_5].state= VAR_0;
   VAR_3[VAR_4].SLOT[VAR_5].volume = VAR_1;
  }
  VAR_3[VAR_4].mem_value = VAR_3[VAR_4].op1_out = 0;
 }
 VAR_2 = 0;
}
