
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int led_event_t ;


 scalar_t__ VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(led_event_t VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(&VAR_1, VAR_3);

 switch(VAR_2) {
 case 128:
  *(volatile unsigned char *)VAR_0 ^= 128;
  break;

 default:
  break;
 }

 FUNC_1(&VAR_1, VAR_3);
}
