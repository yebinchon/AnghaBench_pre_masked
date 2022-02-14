
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zcrypt_device {int online; char* type_string; int reply; void* max_exp_bit_length; int speed_rating; void* max_mod_size; int min_mod_size; int user_space_type; int * ops; struct ap_device* ap_dev; } ;
struct ap_device {struct zcrypt_device* private; int * reply; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct zcrypt_device* FUNC_0 (int ) ;
 int FUNC_1 (struct zcrypt_device*) ;
 int FUNC_2 (struct zcrypt_device*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(struct ap_device *VAR_7)
{
 struct zcrypt_device *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(VAR_2);
 if (!VAR_8)
  return -VAR_0;
 VAR_8->ap_dev = VAR_7;
 VAR_8->ops = &VAR_6;
 VAR_8->online = 1;
 VAR_8->user_space_type = VAR_5;
 VAR_8->type_string = "PCICC";
 VAR_8->min_mod_size = VAR_3;
 VAR_8->max_mod_size = VAR_1;
 VAR_8->speed_rating = VAR_4;
 VAR_8->max_exp_bit_length = VAR_1;
 VAR_7->reply = &VAR_8->reply;
 VAR_7->private = VAR_8;
 VAR_9 = FUNC_2(VAR_8);
 if (VAR_9)
  goto out_free;
 return 0;

 out_free:
 VAR_7->private = ((void*)0);
 FUNC_1(VAR_8);
 return VAR_9;
}
