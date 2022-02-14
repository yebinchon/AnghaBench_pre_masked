
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_point {int length; int flags; } ;
union iwreq_data {struct iw_point encoding; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_encode_ext {scalar_t__ key_len; int key; int alg; } ;
struct atmel_private {int default_key; scalar_t__ encryption_level; int * wep_keys; scalar_t__* wep_key_len; int wep_is_on; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (struct iw_encode_ext*,int ,int) ;
 struct atmel_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_6,
       struct iw_request_info *VAR_7,
       union iwreq_data *VAR_8,
       char *VAR_9)
{
 struct atmel_private *VAR_10 = FUNC_2(VAR_6);
 struct iw_point *VAR_11 = &VAR_8->encoding;
 struct iw_encode_ext *VAR_12 = (struct iw_encode_ext *)VAR_9;
 int VAR_13, VAR_14;

 VAR_14 = VAR_11->length - sizeof(*VAR_12);
 if (VAR_14 < 0)
  return -VAR_0;

 VAR_13 = VAR_11->flags & VAR_5;
 if (VAR_13) {
  if (VAR_13 < 1 || VAR_13 > 4)
   return -VAR_0;
  VAR_13--;
 } else
  VAR_13 = VAR_10->default_key;

 VAR_11->flags = VAR_13 + 1;
 FUNC_1(VAR_12, 0, sizeof(*VAR_12));

 if (!VAR_10->wep_is_on) {
  VAR_12->alg = VAR_1;
  VAR_12->key_len = 0;
  VAR_11->flags |= VAR_3;
 } else {
  if (VAR_10->encryption_level > 0)
   VAR_12->alg = VAR_2;
  else
   return -VAR_0;

  VAR_12->key_len = VAR_10->wep_key_len[VAR_13];
  FUNC_0(VAR_12->key, VAR_10->wep_keys[VAR_13], VAR_12->key_len);
  VAR_11->flags |= VAR_4;
 }

 return 0;
}
