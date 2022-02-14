
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct maven_data {scalar_t__ version; TYPE_3__* primary_head; } ;
struct TYPE_4__ {int deflicker; } ;
struct TYPE_5__ {TYPE_1__ tvo_params; } ;
struct TYPE_6__ {TYPE_2__ altout; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned char FUNC_0 (const struct maven_data* VAR_1) {
 unsigned char VAR_2;

 VAR_2 = (VAR_1->version == VAR_0?0x40:0x00);
 switch (VAR_1->primary_head->altout.tvo_params.deflicker) {
  case 0:

   break;
  case 1:
   VAR_2 |= 0xB1;
   break;
  case 2:
   VAR_2 |= 0xA2;
   break;
 }
 return VAR_2;
}
