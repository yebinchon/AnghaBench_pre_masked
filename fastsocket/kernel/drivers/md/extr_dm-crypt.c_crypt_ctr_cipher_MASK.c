
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct dm_target {char* error; struct crypt_config* private; } ;
struct crypt_config {char* cipher_mode; TYPE_1__* iv_gen_ops; scalar_t__ iv_size; int tfm; void* cipher; } ;
struct TYPE_6__ {int (* ctr ) (struct crypt_config*,struct dm_target*,char*) ;int (* init ) (struct crypt_config*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_3 (struct crypt_config*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int ,int ) ;
 void* FUNC_8 (char*,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,unsigned int) ;
 int FUNC_10 (char*,int ,char*,char*,char*) ;
 scalar_t__ FUNC_11 (char*,char) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 char* FUNC_13 (char**,char*) ;
 int FUNC_14 (struct crypt_config*,struct dm_target*,char*) ;
 int FUNC_15 (struct crypt_config*) ;

__attribute__((used)) static int FUNC_16(struct dm_target *VAR_9,
       char *VAR_10, char *VAR_11)
{
 struct crypt_config *VAR_12 = VAR_9->private;
 char *VAR_13, *VAR_14, *VAR_15, *VAR_16, *VAR_17;
 char *VAR_18 = ((void*)0);
 int VAR_19 = -VAR_1;


 if (FUNC_11(VAR_10, '(')) {
  VAR_9->error = "Bad cipher specification";
  return -VAR_1;
 }





 VAR_13 = VAR_10;
 VAR_14 = FUNC_13(&VAR_13, "-");

 VAR_12->cipher = FUNC_8(VAR_14, VAR_3);
 if (!VAR_12->cipher)
  goto bad_mem;

 if (VAR_13) {
  VAR_12->cipher_mode = FUNC_8(VAR_13, VAR_3);
  if (!VAR_12->cipher_mode)
   goto bad_mem;
 }

 VAR_15 = FUNC_13(&VAR_13, "-");
 VAR_17 = FUNC_13(&VAR_13, "-");
 VAR_16 = FUNC_13(&VAR_17, ":");

 if (VAR_13)
  FUNC_0("Ignoring unexpected additional cipher options");


 if (!VAR_15 || (!FUNC_12(VAR_15, "plain") && !VAR_16)) {
  FUNC_6(VAR_12->cipher_mode);
  VAR_12->cipher_mode = FUNC_8("cbc-plain", VAR_3);
  VAR_15 = "cbc";
  VAR_16 = "plain";
 }

 if (FUNC_12(VAR_15, "ecb") && !VAR_16) {
  VAR_9->error = "IV mechanism required";
  return -VAR_1;
 }

 VAR_18 = FUNC_7(VAR_0, VAR_3);
 if (!VAR_18)
  goto bad_mem;

 VAR_19 = FUNC_10(VAR_18, VAR_0,
         "%s(%s)", VAR_15, VAR_14);
 if (VAR_19 < 0) {
  FUNC_6(VAR_18);
  goto bad_mem;
 }


 VAR_12->tfm = FUNC_5(VAR_18, 0, 0);
 if (FUNC_1(VAR_12->tfm)) {
  VAR_19 = FUNC_2(VAR_12->tfm);
  VAR_9->error = "Error allocating crypto tfm";
  goto bad;
 }


 VAR_19 = FUNC_3(VAR_12, VAR_11);
 if (VAR_19 < 0) {
  VAR_9->error = "Error decoding and setting key";
  goto bad;
 }


 VAR_12->iv_size = FUNC_4(VAR_12->tfm);
 if (VAR_12->iv_size)

  VAR_12->iv_size = FUNC_9(VAR_12->iv_size,
      (unsigned int)(sizeof(u64) / sizeof(u8)));
 else if (VAR_16) {
  FUNC_0("Selected cipher does not support IVs");
  VAR_16 = ((void*)0);
 }


 if (VAR_16 == ((void*)0))
  VAR_12->iv_gen_ops = ((void*)0);
 else if (FUNC_12(VAR_16, "plain") == 0)
  VAR_12->iv_gen_ops = &VAR_8;
 else if (FUNC_12(VAR_16, "plain64") == 0)
  VAR_12->iv_gen_ops = &VAR_7;
 else if (FUNC_12(VAR_16, "essiv") == 0)
  VAR_12->iv_gen_ops = &VAR_5;
 else if (FUNC_12(VAR_16, "benbi") == 0)
  VAR_12->iv_gen_ops = &VAR_4;
 else if (FUNC_12(VAR_16, "null") == 0)
  VAR_12->iv_gen_ops = &VAR_6;
 else {
  VAR_19 = -VAR_1;
  VAR_9->error = "Invalid IV mode";
  goto bad;
 }


 if (VAR_12->iv_gen_ops && VAR_12->iv_gen_ops->ctr) {
  VAR_19 = VAR_12->iv_gen_ops->ctr(VAR_12, VAR_9, VAR_17);
  if (VAR_19 < 0) {
   VAR_9->error = "Error creating IV";
   goto bad;
  }
 }


 if (VAR_12->iv_gen_ops && VAR_12->iv_gen_ops->init) {
  VAR_19 = VAR_12->iv_gen_ops->init(VAR_12);
  if (VAR_19 < 0) {
   VAR_9->error = "Error initialising IV";
   goto bad;
  }
 }

 VAR_19 = 0;
bad:
 FUNC_6(VAR_18);
 return VAR_19;

bad_mem:
 VAR_9->error = "Cannot allocate cipher strings";
 return -VAR_2;
}
