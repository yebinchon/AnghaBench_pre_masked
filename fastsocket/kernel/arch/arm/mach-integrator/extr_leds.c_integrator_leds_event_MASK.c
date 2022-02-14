
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int led_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ) ;





 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6(led_event_t VAR_7)
{
 unsigned long VAR_8;
 const unsigned int VAR_9 = FUNC_0(VAR_3);
 unsigned int VAR_10;


 FUNC_5(VAR_8);
 VAR_10 = 0;

 switch(VAR_7) {
 case 131:
  FUNC_3(VAR_0, 0);
  break;

 case 132:
  FUNC_3(VAR_0, VAR_0);
  break;

 case 128:
  VAR_6 ^= VAR_1;
  VAR_10 = 1;
  break;

 case 129:
  VAR_6 |= VAR_5;
  VAR_10 = 1;
  break;

 case 130:
  VAR_6 &= ~VAR_5;
  VAR_10 = 1;
  break;

 default:
  break;
 }

 if (VAR_10) {
  while (FUNC_1(VAR_9 + VAR_2) & 1);
  FUNC_2(VAR_6, VAR_9 + VAR_4);
 }
 FUNC_4(VAR_8);
}
