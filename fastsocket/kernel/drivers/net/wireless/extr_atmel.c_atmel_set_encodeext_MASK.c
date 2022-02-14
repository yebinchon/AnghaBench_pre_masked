
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_point {int flags; } ;
union iwreq_data {struct iw_point encoding; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_encode_ext {int alg; int ext_flags; scalar_t__ key_len; int key; } ;
struct atmel_private {int default_key; int wep_is_on; int encryption_level; int* wep_key_len; int * wep_keys; int pairwise_cipher_suite; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int,int) ;
 struct atmel_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_8,
       struct iw_request_info *VAR_9,
       union iwreq_data *VAR_10,
       char *VAR_11)
{
 struct atmel_private *VAR_12 = FUNC_3(VAR_8);
 struct iw_point *VAR_13 = &VAR_10->encoding;
 struct iw_encode_ext *VAR_14 = (struct iw_encode_ext *)VAR_11;
 int VAR_15, VAR_16, VAR_17 = VAR_14->alg, VAR_18 = 1;


 VAR_15 = VAR_13->flags & VAR_7;
 if (VAR_15) {
  if (VAR_15 < 1 || VAR_15 > 4)
   return -VAR_4;
  VAR_15--;
 } else
  VAR_15 = VAR_12->default_key;

 if (VAR_13->flags & VAR_5)
     VAR_17 = 129;

 if (VAR_14->ext_flags & VAR_6) {
  VAR_12->default_key = VAR_15;
  VAR_18 = VAR_14->key_len > 0 ? 1 : 0;
 }

 if (VAR_18) {

  switch (VAR_17) {
  case 129:
   VAR_12->wep_is_on = 0;
   VAR_12->encryption_level = 0;
   VAR_12->pairwise_cipher_suite = VAR_0;
   break;
  case 128:
   if (VAR_14->key_len > 5) {
    VAR_12->wep_key_len[VAR_15] = 13;
    VAR_12->pairwise_cipher_suite = VAR_1;
    VAR_12->encryption_level = 2;
   } else if (VAR_14->key_len > 0) {
    VAR_12->wep_key_len[VAR_15] = 5;
    VAR_12->pairwise_cipher_suite = VAR_2;
    VAR_12->encryption_level = 1;
   } else {
    return -VAR_4;
   }
   VAR_12->wep_is_on = 1;
   FUNC_1(VAR_12->wep_keys[VAR_15], 0, 13);
   VAR_16 = FUNC_2 ((int)VAR_14->key_len, VAR_12->wep_key_len[VAR_15]);
   FUNC_0(VAR_12->wep_keys[VAR_15], VAR_14->key, VAR_16);
   break;
  default:
   return -VAR_4;
  }
 }

 return -VAR_3;
}
