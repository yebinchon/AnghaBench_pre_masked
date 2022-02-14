
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* bytes; } ;
struct CHIPSTATE {TYPE_1__ shadow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct CHIPSTATE*,int,int) ;

__attribute__((used)) static void FUNC_1(struct CHIPSTATE *VAR_4, int VAR_5)
{
 int VAR_6 = 1;
 int VAR_7 = VAR_4->shadow.bytes[VAR_0+1] & 0x3f;

 switch (VAR_5) {
 case 129:
  VAR_7 |= VAR_1;
  break;
 case 128:
  VAR_7 |= VAR_3;
  break;
 case 130:
  VAR_7 |= VAR_2;
  break;
 default:
  VAR_6 = 0;
 }
 if (VAR_6)
  FUNC_0(VAR_4,VAR_0,VAR_7);
}
