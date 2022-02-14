
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct esp {int rev; int max_period; int ccycle; int min_period; int config1; int config2; int prev_cfg3; int scsi_id; int radelay; int flags; int cfact; int prev_stp; int prev_soff; int neg_defp; TYPE_1__* target; } ;
struct TYPE_2__ {int esp_config3; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;



 int VAR_20 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct esp*,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct esp*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct esp *VAR_21)
{
 u8 VAR_22, VAR_23;


 FUNC_3(VAR_21, VAR_6);
 FUNC_3(VAR_21, VAR_5 | VAR_4);
 if (VAR_21->rev == VAR_20)
  FUNC_2(VAR_7, VAR_2);
 FUNC_3(VAR_21, VAR_5 | VAR_4);




 VAR_21->max_period = ((35 * VAR_21->ccycle) / 1000);
 if (VAR_21->rev == VAR_20) {
  VAR_23 = FUNC_0(VAR_19);
  VAR_22 = (VAR_23 & 0xf8) >> 3;
  if (VAR_22 == 0x02)
   VAR_21->rev = 129;
  else if (VAR_22 == 0x0a)
   VAR_21->rev = 128;
  else
   VAR_21->rev = 130;
  VAR_21->min_period = ((4 * VAR_21->ccycle) / 1000);
 } else {
  VAR_21->min_period = ((5 * VAR_21->ccycle) / 1000);
 }
 VAR_21->max_period = (VAR_21->max_period + 3)>>2;
 VAR_21->min_period = (VAR_21->min_period + 3)>>2;

 FUNC_2(VAR_21->config1, VAR_1);
 switch (VAR_21->rev) {
 case 133:

  break;

 case 132:
  FUNC_2(VAR_21->config2, VAR_2);
  break;

 case 131:

  FUNC_2(VAR_21->config2, VAR_2);
  VAR_21->prev_cfg3 = VAR_21->target[0].esp_config3;
  FUNC_2(VAR_21->prev_cfg3, VAR_3);
  break;

 case 128:
  VAR_21->config2 |= (VAR_8 | VAR_9);


 case 129:

  FUNC_2(VAR_21->config2, VAR_2);
  if (VAR_21->rev == 128) {
   u8 VAR_24 = VAR_21->target[0].esp_config3;

   VAR_24 |= VAR_11 | VAR_13;
   if (VAR_21->scsi_id >= 8)
    VAR_24 |= VAR_12;
   FUNC_1(VAR_21, VAR_24);
  } else {
   u32 VAR_25 = VAR_21->target[0].esp_config3;

   VAR_25 |= VAR_10;
   FUNC_1(VAR_21, VAR_25);
  }
  VAR_21->prev_cfg3 = VAR_21->target[0].esp_config3;
  FUNC_2(VAR_21->prev_cfg3, VAR_3);
  if (VAR_21->rev == 128) {
   VAR_21->radelay = 80;
  } else {
   if (VAR_21->flags & VAR_14)
    VAR_21->radelay = 0;
   else
    VAR_21->radelay = 96;
  }
  break;

 case 130:

  FUNC_2(VAR_21->config2, VAR_2);
  FUNC_1(VAR_21,
        (VAR_21->target[0].esp_config3 |
         VAR_11));
  VAR_21->prev_cfg3 = VAR_21->target[0].esp_config3;
  FUNC_2(VAR_21->prev_cfg3, VAR_3);
  VAR_21->radelay = 32;
  break;

 default:
  break;
 }


 FUNC_2(VAR_21->cfact, VAR_0);

 VAR_21->prev_stp = 0;
 FUNC_2(VAR_21->prev_stp, VAR_17);

 VAR_21->prev_soff = 0;
 FUNC_2(VAR_21->prev_soff, VAR_16);

 FUNC_2(VAR_21->neg_defp, VAR_18);


 FUNC_0(VAR_15);
 FUNC_4(100);
}
