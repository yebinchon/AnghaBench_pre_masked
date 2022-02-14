
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc13783 {int adc_conv_lock; scalar_t__ ts_active; int adc_done; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;



 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct mc13783*) ;
 int FUNC_1 (struct mc13783*,int ,unsigned int*) ;
 int FUNC_2 (struct mc13783*,int ,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct mc13783 *VAR_17, unsigned int VAR_18,
  unsigned int VAR_19, unsigned int *VAR_20)
{
 unsigned int VAR_21, VAR_22;
 int VAR_23;

 FUNC_3(&VAR_17->adc_conv_lock);


 VAR_21 = VAR_1 | VAR_2;


 VAR_22 = VAR_7 | VAR_9
  | VAR_10;


 if (VAR_19 > 7)
  VAR_22 |= VAR_8;

 switch (VAR_18) {
 case 128:


  VAR_21 |= VAR_3 | VAR_4
   | VAR_5 | VAR_6;
  VAR_22 |= 4 << VAR_12;
  break;
 case 129:
  VAR_22 |= (VAR_19 & 0x7) << VAR_11;
  VAR_22 |= VAR_13;
  break;
 case 130:
  VAR_22 |= 4 << VAR_12;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_17, VAR_14, VAR_21);
 FUNC_2(VAR_17, VAR_15, VAR_22);

 FUNC_5(&VAR_17->adc_done);

 for (VAR_23 = 0; VAR_23 < 4; VAR_23++)
  FUNC_1(VAR_17, VAR_16, &VAR_20[VAR_23]);

 if (VAR_17->ts_active)
  FUNC_0(VAR_17);

 FUNC_4(&VAR_17->adc_conv_lock);

 return 0;
}
