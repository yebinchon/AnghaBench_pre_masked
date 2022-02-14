
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum led_status_t { ____Placeholder_led_status_t } led_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 unsigned int const VAR_8 ;
 int const VAR_9 ;

 int FUNC_0 (int ,int *,int *,char*,unsigned int const,unsigned int const) ;
 int FUNC_1 (int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (unsigned int const) ;
 int* VAR_12 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const unsigned int VAR_13,
     const enum led_status_t VAR_14)
{

 static const unsigned int VAR_15[] = { 0, 1, 3 };
 static const unsigned int VAR_16[] = { 0, 0x80, 0xc0 };

 int VAR_17 = 0;

 switch (VAR_11) {
 case 130:

  if (FUNC_3(VAR_13 > 7))
   return -VAR_0;
  if (FUNC_3(FUNC_2(VAR_13)))
   return -VAR_3;
  if (!FUNC_0(VAR_10, ((void*)0), ((void*)0), "vdd",
    (1 << VAR_13), VAR_15[VAR_14]))
   VAR_17 = -VAR_1;
  break;
 case 128:

  if (FUNC_3(VAR_13 > 7))
   return -VAR_0;
  if (FUNC_3(FUNC_2(VAR_13)))
   return -VAR_3;
  VAR_17 = FUNC_1(VAR_7, (1 << VAR_13));
  if (VAR_17 >= 0)
   VAR_17 = FUNC_1(VAR_5,
          (VAR_14 == VAR_4) << VAR_13);
  if (VAR_17 >= 0)
   VAR_17 = FUNC_1(VAR_6,
          (VAR_14 != VAR_9) << VAR_13);
  break;
 case 129:

  if (FUNC_3(VAR_13 >= VAR_8))
   return -VAR_0;
  if (FUNC_3(FUNC_2(VAR_13)))
   return -VAR_3;
  if (!FUNC_0(VAR_10, ((void*)0), ((void*)0), "vdd",
    VAR_13, VAR_16[VAR_14]))
   VAR_17 = -VAR_1;
  break;
 default:
  VAR_17 = -VAR_2;
 }

 if (!VAR_17)
  VAR_12[VAR_13] = VAR_14;

 return VAR_17;
}
