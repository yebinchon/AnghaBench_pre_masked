
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zcrypt_device {int dummy; } ;
struct TYPE_2__ {int msg_len; int msg_fmt; void* request_code; void* msg_type_code; } ;
struct type4_scr {unsigned char* p; unsigned char* q; unsigned char* dp; unsigned char* dq; unsigned char* u; unsigned char* message; TYPE_1__ header; } ;
struct type4_lcr {unsigned char* p; unsigned char* q; unsigned char* dp; unsigned char* dq; unsigned char* u; unsigned char* message; TYPE_1__ header; } ;
struct ica_rsa_modexpo_crt {int inputdatalength; int inputdata; int u_mult_inv; int bq_key; int bp_key; int nq_prime; int np_prime; } ;
struct ap_message {int length; struct type4_scr* message; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (struct type4_scr*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct zcrypt_device *VAR_5,
          struct ap_message *VAR_6,
          struct ica_rsa_modexpo_crt *VAR_7)
{
 unsigned char *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_14 = VAR_7->inputdatalength;
 VAR_15 = VAR_14 / 2;
 VAR_16 = VAR_14 / 2 + 8;

 if (VAR_14 <= 128) {
  struct type4_scr *VAR_17 = VAR_6->message;
  FUNC_1(VAR_17, 0, sizeof(*VAR_17));
  VAR_6->length = sizeof(*VAR_17);
  VAR_17->header.msg_type_code = VAR_4;
  VAR_17->header.request_code = VAR_2;
  VAR_17->header.msg_fmt = VAR_3;
  VAR_17->header.msg_len = sizeof(*VAR_17);
  VAR_8 = VAR_17->p + sizeof(VAR_17->p) - VAR_16;
  VAR_9 = VAR_17->q + sizeof(VAR_17->q) - VAR_15;
  VAR_10 = VAR_17->dp + sizeof(VAR_17->dp) - VAR_16;
  VAR_11 = VAR_17->dq + sizeof(VAR_17->dq) - VAR_15;
  VAR_12 = VAR_17->u + sizeof(VAR_17->u) - VAR_16;
  VAR_13 = VAR_17->message + sizeof(VAR_17->message) - VAR_14;
 } else {
  struct type4_lcr *VAR_18 = VAR_6->message;
  FUNC_1(VAR_18, 0, sizeof(*VAR_18));
  VAR_6->length = sizeof(*VAR_18);
  VAR_18->header.msg_type_code = VAR_4;
  VAR_18->header.request_code = VAR_2;
  VAR_18->header.msg_fmt = VAR_1;
  VAR_18->header.msg_len = sizeof(*VAR_18);
  VAR_8 = VAR_18->p + sizeof(VAR_18->p) - VAR_16;
  VAR_9 = VAR_18->q + sizeof(VAR_18->q) - VAR_15;
  VAR_10 = VAR_18->dp + sizeof(VAR_18->dp) - VAR_16;
  VAR_11 = VAR_18->dq + sizeof(VAR_18->dq) - VAR_15;
  VAR_12 = VAR_18->u + sizeof(VAR_18->u) - VAR_16;
  VAR_13 = VAR_18->message + sizeof(VAR_18->message) - VAR_14;
 }

 if (FUNC_0(VAR_8, VAR_7->np_prime, VAR_16) ||
     FUNC_0(VAR_9, VAR_7->nq_prime, VAR_15) ||
     FUNC_0(VAR_10, VAR_7->bp_key, VAR_16) ||
     FUNC_0(VAR_11, VAR_7->bq_key, VAR_15) ||
     FUNC_0(VAR_12, VAR_7->u_mult_inv, VAR_16) ||
     FUNC_0(VAR_13, VAR_7->inputdata, VAR_14))
  return -VAR_0;
 return 0;
}
