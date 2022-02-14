
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx231xx {scalar_t__ tuner_type; int norm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct cx231xx*,int ,int*) ;
 int FUNC_2 (struct cx231xx*,int ,int) ;

int FUNC_3(struct cx231xx *VAR_8)
{
 int VAR_9 = 0;
 u32 VAR_10;
 FUNC_0("cx231xx_tuner_post_channel_change  dev->tuner_type =0%d\n",
       VAR_8->tuner_type);


 VAR_9 = FUNC_1(VAR_8, VAR_0, &VAR_10);
 VAR_10 &= ~(VAR_3 | VAR_2);

 if (VAR_8->norm & (VAR_7 | VAR_5 |
    VAR_6)) {
   if (VAR_8->tuner_type == VAR_4) {
    VAR_10 &= ~VAR_1;
    VAR_10 |= 0x88000300;
   } else
    VAR_10 |= 0x88000000;
  } else {
   if (VAR_8->tuner_type == VAR_4) {
    VAR_10 &= ~VAR_1;
    VAR_10 |= 0xCC000300;
   } else
    VAR_10 |= 0x44000000;
  }

 VAR_9 = FUNC_2(VAR_8, VAR_0, VAR_10);

 return VAR_9;
}
