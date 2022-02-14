
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum led_status_t { ____Placeholder_led_status_t } led_status_t ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int*,char*,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static int FUNC_1(const unsigned int VAR_8)
{
 int VAR_9;
 enum led_status_t VAR_10;

 switch (VAR_6) {
 case 128:
  if (!FUNC_0(VAR_5,
    &VAR_9, "GLED", "dd", 1 << VAR_8))
   return -VAR_0;
  VAR_10 = (VAR_9 == 0)?
    VAR_3 :
    ((VAR_9 == 1)?
     VAR_4 :
     VAR_2);
  VAR_7[VAR_8] = VAR_10;
  return VAR_10;
 default:
  return -VAR_1;
 }


}
