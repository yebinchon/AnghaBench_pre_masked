
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hermes {int dummy; } ;
struct orinoco_private {scalar_t__ encode_alg; int firmware_type; int key_mgmt; int iw_mode; scalar_t__ wep_restrict; int has_wpa; scalar_t__ wpa_enabled; struct hermes hw; } ;





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
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct orinoco_private*) ;
 int FUNC_1 (struct hermes*,int ,int ,int) ;

int FUNC_2(struct orinoco_private *VAR_13)
{
 struct hermes *VAR_14 = &VAR_13->hw;
 int VAR_15 = 0;
 int VAR_16;
 int VAR_17;
 int VAR_18;


 if (VAR_13->encode_alg == VAR_11)
  FUNC_0(VAR_13);

 if (VAR_13->wep_restrict)
  VAR_17 = VAR_1;
 else
  VAR_17 = VAR_0;

 if (VAR_13->wpa_enabled)
  VAR_18 = 2;
 else if (VAR_13->encode_alg == VAR_11)
  VAR_18 = 1;
 else
  VAR_18 = 0;

 switch (VAR_13->firmware_type) {
 case 130:
  if (VAR_13->encode_alg == VAR_11) {

   VAR_15 = FUNC_1(VAR_14, VAR_12,
     VAR_3,
     VAR_17);
  }
  VAR_15 = FUNC_1(VAR_14, VAR_12,
        VAR_5,
        VAR_18);
  if (VAR_15)
   return VAR_15;

  if (VAR_13->has_wpa) {

   VAR_15 = FUNC_1(VAR_14, VAR_12,
      VAR_4,
      VAR_13->key_mgmt);
   if (VAR_15)
    return VAR_15;
  }

  break;

 case 129:
 case 128:
  if (VAR_13->encode_alg == VAR_11) {
   if (VAR_13->wep_restrict ||
       (VAR_13->firmware_type == 128))
    VAR_16 = VAR_9 |
        VAR_7;
   else
    VAR_16 = VAR_9;

   VAR_15 = FUNC_1(VAR_14, VAR_12,
         VAR_2,
         VAR_17);
   if (VAR_15)
    return VAR_15;
  } else
   VAR_16 = 0;

  if (VAR_13->iw_mode == VAR_10)
   VAR_16 |= VAR_8;


  VAR_15 = FUNC_1(VAR_14, VAR_12,
        VAR_6,
        VAR_16);
  if (VAR_15)
   return VAR_15;

  break;
 }

 return 0;
}
