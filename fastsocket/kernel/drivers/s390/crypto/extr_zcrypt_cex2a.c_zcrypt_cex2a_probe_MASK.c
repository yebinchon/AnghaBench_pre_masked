
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zcrypt_device {char* type_string; int short_crt; int online; int ops; int reply; struct ap_device* ap_dev; int speed_rating; void* max_exp_bit_length; void* max_mod_size; void* min_mod_size; int user_space_type; } ;
struct ap_device {int device_type; struct zcrypt_device* private; int * reply; int functions; } ;




 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,int ) ;
 struct zcrypt_device* FUNC_1 (int ) ;
 int FUNC_2 (struct zcrypt_device*) ;
 int FUNC_3 (struct zcrypt_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ap_device *VAR_15)
{
 struct zcrypt_device *VAR_16 = ((void*)0);
 int VAR_17 = 0;

 switch (VAR_15->device_type) {
 case 129:
  VAR_16 = FUNC_1(VAR_3);
  if (!VAR_16)
   return -VAR_10;
  VAR_16->user_space_type = VAR_13;
  VAR_16->type_string = "CEX2A";
  VAR_16->min_mod_size = VAR_4;
  VAR_16->max_mod_size = VAR_2;
  VAR_16->short_crt = 1;
  VAR_16->speed_rating = VAR_5;
  VAR_16->max_exp_bit_length = VAR_2;
  break;
 case 128:
  VAR_16 = FUNC_1(VAR_7);
  if (!VAR_16)
   return -VAR_10;
  VAR_16->user_space_type = VAR_14;
  VAR_16->type_string = "CEX3A";
  VAR_16->min_mod_size = VAR_4;
  VAR_16->max_mod_size = VAR_2;
  VAR_16->max_exp_bit_length = VAR_2;
  if (FUNC_0(&VAR_15->functions, VAR_1) &&
      FUNC_0(&VAR_15->functions, VAR_0)) {
   VAR_16->max_mod_size = VAR_6;
   VAR_16->max_exp_bit_length = VAR_6;
  }
  VAR_16->short_crt = 1;
  VAR_16->speed_rating = VAR_8;
  break;
 }
 if (!VAR_16)
  return -VAR_9;
 VAR_16->ops = FUNC_5(VAR_11,
        VAR_12);
 VAR_16->ap_dev = VAR_15;
 VAR_16->online = 1;
 VAR_15->reply = &VAR_16->reply;
 VAR_15->private = VAR_16;
 VAR_17 = FUNC_3(VAR_16);
 if (VAR_17) {
  VAR_15->private = ((void*)0);
  FUNC_4(VAR_16->ops);
  FUNC_2(VAR_16);
 }
 return VAR_17;
}
