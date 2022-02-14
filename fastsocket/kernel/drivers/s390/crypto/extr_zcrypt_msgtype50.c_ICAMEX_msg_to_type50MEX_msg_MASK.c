
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zcrypt_device {int dummy; } ;
struct TYPE_2__ {int msg_len; void* msg_type_code; } ;
struct type50_meb3_msg {unsigned char* modulus; unsigned char* exponent; unsigned char* message; int keyblock_type; TYPE_1__ header; } ;
struct type50_meb2_msg {unsigned char* modulus; unsigned char* exponent; unsigned char* message; int keyblock_type; TYPE_1__ header; } ;
struct type50_meb1_msg {unsigned char* modulus; unsigned char* exponent; unsigned char* message; int keyblock_type; TYPE_1__ header; } ;
struct ica_rsa_modexpo {int inputdatalength; int inputdata; int b_key; int n_modulus; } ;
struct ap_message {int length; struct type50_meb3_msg* message; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (struct type50_meb3_msg*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct zcrypt_device *VAR_5,
           struct ap_message *VAR_6,
           struct ica_rsa_modexpo *VAR_7)
{
 unsigned char *VAR_8, *VAR_9, *VAR_10;
 int VAR_11;

 VAR_11 = VAR_7->inputdatalength;

 if (VAR_11 <= 128) {
  struct type50_meb1_msg *VAR_12 = VAR_6->message;
  FUNC_1(VAR_12, 0, sizeof(*VAR_12));
  VAR_6->length = sizeof(*VAR_12);
  VAR_12->header.msg_type_code = VAR_4;
  VAR_12->header.msg_len = sizeof(*VAR_12);
  VAR_12->keyblock_type = VAR_1;
  VAR_8 = VAR_12->modulus + sizeof(VAR_12->modulus) - VAR_11;
  VAR_9 = VAR_12->exponent + sizeof(VAR_12->exponent) - VAR_11;
  VAR_10 = VAR_12->message + sizeof(VAR_12->message) - VAR_11;
 } else if (VAR_11 <= 256) {
  struct type50_meb2_msg *VAR_13 = VAR_6->message;
  FUNC_1(VAR_13, 0, sizeof(*VAR_13));
  VAR_6->length = sizeof(*VAR_13);
  VAR_13->header.msg_type_code = VAR_4;
  VAR_13->header.msg_len = sizeof(*VAR_13);
  VAR_13->keyblock_type = VAR_2;
  VAR_8 = VAR_13->modulus + sizeof(VAR_13->modulus) - VAR_11;
  VAR_9 = VAR_13->exponent + sizeof(VAR_13->exponent) - VAR_11;
  VAR_10 = VAR_13->message + sizeof(VAR_13->message) - VAR_11;
 } else {

  struct type50_meb3_msg *VAR_14 = VAR_6->message;
  FUNC_1(VAR_14, 0, sizeof(*VAR_14));
  VAR_6->length = sizeof(*VAR_14);
  VAR_14->header.msg_type_code = VAR_4;
  VAR_14->header.msg_len = sizeof(*VAR_14);
  VAR_14->keyblock_type = VAR_3;
  VAR_8 = VAR_14->modulus + sizeof(VAR_14->modulus) - VAR_11;
  VAR_9 = VAR_14->exponent + sizeof(VAR_14->exponent) - VAR_11;
  VAR_10 = VAR_14->message + sizeof(VAR_14->message) - VAR_11;
 }

 if (FUNC_0(VAR_8, VAR_7->n_modulus, VAR_11) ||
     FUNC_0(VAR_9, VAR_7->b_key, VAR_11) ||
     FUNC_0(VAR_10, VAR_7->inputdata, VAR_11))
  return -VAR_0;
 return 0;
}
