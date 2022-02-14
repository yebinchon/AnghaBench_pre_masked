
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buttons; } ;
struct mousedev {TYPE_1__ packet; } ;
struct TYPE_5__ {int buttons; } ;
struct TYPE_6__ {TYPE_2__ packet; } ;
 int FUNC_0 (int,int *) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct mousedev *VAR_1,
    unsigned int VAR_2, int VAR_3)
{
 int VAR_4;

 switch (VAR_2) {

 case 128:
 case 142:
 case 134: VAR_4 = 0; break;

 case 130:
 case 141:
 case 132: VAR_4 = 1; break;

 case 140:
 case 135:
 case 129:
 case 133: VAR_4 = 2; break;

 case 139:
 case 137:
 case 131: VAR_4 = 3; break;

 case 138:
 case 136: VAR_4 = 4; break;

 default: return;
 }

 if (VAR_3) {
  FUNC_1(VAR_4, &VAR_1->packet.buttons);
  FUNC_1(VAR_4, &VAR_0->packet.buttons);
 } else {
  FUNC_0(VAR_4, &VAR_1->packet.buttons);
  FUNC_0(VAR_4, &VAR_0->packet.buttons);
 }
}
