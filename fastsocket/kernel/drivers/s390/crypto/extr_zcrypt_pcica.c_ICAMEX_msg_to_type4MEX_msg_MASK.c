
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zcrypt_device {int dummy; } ;
struct TYPE_2__ {int msg_len; void* request_code; void* msg_type_code; int msg_fmt; } ;
struct type4_sme {unsigned char* modulus; unsigned char* exponent; unsigned char* message; TYPE_1__ header; } ;
struct type4_lme {unsigned char* modulus; unsigned char* exponent; unsigned char* message; TYPE_1__ header; } ;
struct ica_rsa_modexpo {int inputdatalength; int inputdata; int b_key; int n_modulus; } ;
struct ap_message {int length; struct type4_sme* message; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (struct type4_sme*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct zcrypt_device *VAR_5,
          struct ap_message *VAR_6,
          struct ica_rsa_modexpo *VAR_7)
{
 unsigned char *VAR_8, *VAR_9, *VAR_10;
 int VAR_11;

 VAR_11 = VAR_7->inputdatalength;

 if (VAR_11 <= 128) {
  struct type4_sme *VAR_12 = VAR_6->message;
  FUNC_1(VAR_12, 0, sizeof(*VAR_12));
  VAR_6->length = sizeof(*VAR_12);
  VAR_12->header.msg_fmt = VAR_3;
  VAR_12->header.msg_len = sizeof(*VAR_12);
  VAR_12->header.msg_type_code = VAR_4;
  VAR_12->header.request_code = VAR_2;
  VAR_8 = VAR_12->modulus + sizeof(VAR_12->modulus) - VAR_11;
  VAR_9 = VAR_12->exponent + sizeof(VAR_12->exponent) - VAR_11;
  VAR_10 = VAR_12->message + sizeof(VAR_12->message) - VAR_11;
 } else {
  struct type4_lme *VAR_13 = VAR_6->message;
  FUNC_1(VAR_13, 0, sizeof(*VAR_13));
  VAR_6->length = sizeof(*VAR_13);
  VAR_13->header.msg_fmt = VAR_1;
  VAR_13->header.msg_len = sizeof(*VAR_13);
  VAR_13->header.msg_type_code = VAR_4;
  VAR_13->header.request_code = VAR_2;
  VAR_8 = VAR_13->modulus + sizeof(VAR_13->modulus) - VAR_11;
  VAR_9 = VAR_13->exponent + sizeof(VAR_13->exponent) - VAR_11;
  VAR_10 = VAR_13->message + sizeof(VAR_13->message) - VAR_11;
 }

 if (FUNC_0(VAR_8, VAR_7->n_modulus, VAR_11) ||
     FUNC_0(VAR_9, VAR_7->b_key, VAR_11) ||
     FUNC_0(VAR_10, VAR_7->inputdata, VAR_11))
  return -VAR_0;
 return 0;
}
