
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zcrypt_device {int online; int user_space_type; char* type_string; void* ops; int reply; void* max_exp_bit_length; void* max_mod_size; void* min_mod_size; int speed_rating; struct ap_device* ap_dev; } ;
struct ap_device {int device_type; struct zcrypt_device* private; int * reply; } ;





 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct zcrypt_device* FUNC_0 (int ) ;
 int FUNC_1 (struct zcrypt_device*) ;
 int FUNC_2 (struct zcrypt_device*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ap_device*) ;
 int FUNC_6 (struct ap_device*) ;

__attribute__((used)) static int FUNC_7(struct ap_device *VAR_17)
{
 struct zcrypt_device *VAR_18;
 int VAR_19 = 0;

 VAR_18 = FUNC_0(VAR_9);
 if (!VAR_18)
  return -VAR_4;
 VAR_18->ap_dev = VAR_17;
 VAR_18->online = 1;
 switch (VAR_17->device_type) {
 case 128:
  VAR_19 = FUNC_5(VAR_17);
  if (VAR_19 < 0) {
   FUNC_1(VAR_18);
   return VAR_19;
  }
  VAR_18->user_space_type = VAR_19;
  if (VAR_19 == VAR_16) {
   VAR_18->type_string = "PCIXCC_MCL2";
   VAR_18->speed_rating = VAR_10;
   VAR_18->min_mod_size = VAR_13;
   VAR_18->max_mod_size = VAR_8;
   VAR_18->max_exp_bit_length = VAR_8;
  } else {
   VAR_18->type_string = "PCIXCC_MCL3";
   VAR_18->speed_rating = VAR_11;
   VAR_18->min_mod_size = VAR_12;
   VAR_18->max_mod_size = VAR_8;
   VAR_18->max_exp_bit_length = VAR_8;
  }
  break;
 case 130:
  VAR_18->user_space_type = VAR_14;
  VAR_18->type_string = "CEX2C";
  VAR_18->speed_rating = VAR_0;
  VAR_18->min_mod_size = VAR_12;
  VAR_18->max_mod_size = VAR_8;
  VAR_18->max_exp_bit_length = VAR_8;
  break;
 case 129:
  VAR_18->user_space_type = VAR_15;
  VAR_18->type_string = "CEX3C";
  VAR_18->speed_rating = VAR_3;
  VAR_18->min_mod_size = VAR_2;
  VAR_18->max_mod_size = VAR_1;
  VAR_18->max_exp_bit_length = VAR_1;
  break;
 default:
  goto out_free;
 }

 VAR_19 = FUNC_6(VAR_17);
 if (VAR_19 < 0) {
  FUNC_1(VAR_18);
  return VAR_19;
 }
 if (VAR_19)
  VAR_18->ops = FUNC_4(VAR_5,
         VAR_6);
 else
  VAR_18->ops = FUNC_4(VAR_5,
         VAR_7);
 VAR_17->reply = &VAR_18->reply;
 VAR_17->private = VAR_18;
 VAR_19 = FUNC_2(VAR_18);
 if (VAR_19)
  goto out_free;
 return 0;

 out_free:
 VAR_17->private = ((void*)0);
 FUNC_3(VAR_18->ops);
 FUNC_1(VAR_18);
 return VAR_19;
}
