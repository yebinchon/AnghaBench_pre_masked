
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zcrypt_device {char* type_string; int short_crt; int online; void* ops; int reply; struct ap_device* ap_dev; int speed_rating; void* max_exp_bit_length; void* max_mod_size; int min_mod_size; int user_space_type; } ;
struct ap_device {int device_type; struct zcrypt_device* private; int * reply; int functions; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
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
 int FUNC_0 (int *,int ) ;
 struct zcrypt_device* FUNC_1 (int ) ;
 int FUNC_2 (struct zcrypt_device*) ;
 int FUNC_3 (struct zcrypt_device*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ap_device *VAR_21)
{
 struct zcrypt_device *VAR_22 = ((void*)0);
 int VAR_23 = 0;

 switch (VAR_21->device_type) {
 case 128:
  if (FUNC_0(&VAR_21->functions, VAR_0)) {
   VAR_22 = FUNC_1(VAR_4);
   if (!VAR_22)
    return -VAR_14;
   VAR_22->type_string = "CEX4A";
   VAR_22->user_space_type = VAR_19;
   VAR_22->min_mod_size = VAR_7;
   if (FUNC_0(&VAR_21->functions, VAR_3) &&
       FUNC_0(&VAR_21->functions, VAR_2)) {
    VAR_22->max_mod_size =
     VAR_6;
    VAR_22->max_exp_bit_length =
     VAR_6;
   } else {
    VAR_22->max_mod_size =
     VAR_5;
    VAR_22->max_exp_bit_length =
     VAR_5;
   }
   VAR_22->short_crt = 1;
   VAR_22->speed_rating = VAR_8;
   VAR_22->ops = FUNC_5(VAR_17,
          VAR_18);
  } else if (FUNC_0(&VAR_21->functions, VAR_1)) {
   VAR_22 = FUNC_1(VAR_9);
   if (!VAR_22)
    return -VAR_14;
   VAR_22->type_string = "CEX4C";
   VAR_22->user_space_type = VAR_20;
   VAR_22->min_mod_size = VAR_11;
   VAR_22->max_mod_size = VAR_10;
   VAR_22->max_exp_bit_length = VAR_10;
   VAR_22->short_crt = 0;
   VAR_22->speed_rating = VAR_12;
   VAR_22->ops = FUNC_5(VAR_15,
          VAR_16);
  }
  break;
 }
 if (!VAR_22)
  return -VAR_13;
 VAR_22->ap_dev = VAR_21;
 VAR_22->online = 1;
 VAR_21->reply = &VAR_22->reply;
 VAR_21->private = VAR_22;
 VAR_23 = FUNC_3(VAR_22);
 if (VAR_23) {
  FUNC_4(VAR_22->ops);
  VAR_21->private = ((void*)0);
  FUNC_2(VAR_22);
 }
 return VAR_23;
}
