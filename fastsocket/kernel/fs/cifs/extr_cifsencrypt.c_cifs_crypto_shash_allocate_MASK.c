
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct shash_desc {int dummy; } ;
struct TYPE_9__ {void* hmacmd5; void* md5; TYPE_5__* sdeschmacmd5; TYPE_3__* sdescmd5; } ;
struct TCP_Server_Info {TYPE_4__ secmech; } ;
struct TYPE_6__ {int flags; void* tfm; } ;
struct TYPE_10__ {TYPE_1__ shash; } ;
struct TYPE_7__ {int flags; void* tfm; } ;
struct TYPE_8__ {TYPE_2__ shash; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int,char*) ;
 void* FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (TYPE_5__*) ;
 void* FUNC_7 (unsigned int,int ) ;

int
FUNC_8(struct TCP_Server_Info *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;

 VAR_2->secmech.hmacmd5 = FUNC_3("hmac(md5)", 0, 0);
 if (FUNC_0(VAR_2->secmech.hmacmd5)) {
  FUNC_2(1, "could not allocate crypto hmacmd5\n");
  return FUNC_1(VAR_2->secmech.hmacmd5);
 }

 VAR_2->secmech.md5 = FUNC_3("md5", 0, 0);
 if (FUNC_0(VAR_2->secmech.md5)) {
  FUNC_2(1, "could not allocate crypto md5\n");
  VAR_3 = FUNC_1(VAR_2->secmech.md5);
  goto crypto_allocate_md5_fail;
 }

 VAR_4 = sizeof(struct shash_desc) +
   FUNC_5(VAR_2->secmech.hmacmd5);
 VAR_2->secmech.sdeschmacmd5 = FUNC_7(VAR_4, VAR_1);
 if (!VAR_2->secmech.sdeschmacmd5) {
  FUNC_2(1, "cifs_crypto_shash_allocate: can't alloc hmacmd5\n");
  VAR_3 = -VAR_0;
  goto crypto_allocate_hmacmd5_sdesc_fail;
 }
 VAR_2->secmech.sdeschmacmd5->shash.tfm = VAR_2->secmech.hmacmd5;
 VAR_2->secmech.sdeschmacmd5->shash.flags = 0x0;


 VAR_4 = sizeof(struct shash_desc) +
   FUNC_5(VAR_2->secmech.md5);
 VAR_2->secmech.sdescmd5 = FUNC_7(VAR_4, VAR_1);
 if (!VAR_2->secmech.sdescmd5) {
  FUNC_2(1, "cifs_crypto_shash_allocate: can't alloc md5\n");
  VAR_3 = -VAR_0;
  goto crypto_allocate_md5_sdesc_fail;
 }
 VAR_2->secmech.sdescmd5->shash.tfm = VAR_2->secmech.md5;
 VAR_2->secmech.sdescmd5->shash.flags = 0x0;

 return 0;

crypto_allocate_md5_sdesc_fail:
 FUNC_6(VAR_2->secmech.sdeschmacmd5);

crypto_allocate_hmacmd5_sdesc_fail:
 FUNC_4(VAR_2->secmech.md5);

crypto_allocate_md5_fail:
 FUNC_4(VAR_2->secmech.hmacmd5);

 return VAR_3;
}
