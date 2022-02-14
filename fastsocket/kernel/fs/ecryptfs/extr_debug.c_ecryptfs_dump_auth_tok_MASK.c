
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; int encrypted_key_size; int encrypted_key; int decrypted_key; int decrypted_key_size; } ;
struct TYPE_4__ {int flags; int signature; int salt; } ;
struct TYPE_5__ {TYPE_1__ password; } ;
struct ecryptfs_auth_tok {int flags; TYPE_3__ session_key; TYPE_2__ token; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (char*,int ,int) ;

void FUNC_4(struct ecryptfs_auth_tok *VAR_11)
{
 char VAR_12[VAR_5 * 2 + 1];
 char VAR_13[VAR_6 + 1];

 FUNC_1(VAR_9, "Auth tok at mem loc [%p]:\n",
   VAR_11);
 if (VAR_11->flags & VAR_4) {
  FUNC_1(VAR_9, " * private key type\n");
 } else {
  FUNC_1(VAR_9, " * passphrase type\n");
  FUNC_2(VAR_12, VAR_11->token.password.salt,
    VAR_5);
  VAR_12[VAR_5 * 2] = '\0';
  FUNC_1(VAR_9, " * salt = [%s]\n", VAR_12);
  if (VAR_11->token.password.flags &
      VAR_3) {
   FUNC_1(VAR_9, " * persistent\n");
  }
  FUNC_3(VAR_13, VAR_11->token.password.signature,
         VAR_6);
  VAR_13[VAR_6] = '\0';
  FUNC_1(VAR_9, " * signature = [%s]\n", VAR_13);
 }
 FUNC_1(VAR_9, " * session_key.flags = [0x%x]\n",
   VAR_11->session_key.flags);
 if (VAR_11->session_key.flags
     & VAR_7)
  FUNC_1(VAR_9,
    " * Userspace decrypt request set\n");
 if (VAR_11->session_key.flags
     & VAR_8)
  FUNC_1(VAR_9,
    " * Userspace encrypt request set\n");
 if (VAR_11->session_key.flags & VAR_0) {
  FUNC_1(VAR_9, " * Contains decrypted key\n");
  FUNC_1(VAR_9,
    " * session_key.decrypted_key_size = [0x%x]\n",
    VAR_11->session_key.decrypted_key_size);
  FUNC_1(VAR_9, " * Decrypted session key "
    "dump:\n");
  if (VAR_10 > 0)
   FUNC_0(VAR_11->session_key.decrypted_key,
       VAR_2);
 }
 if (VAR_11->session_key.flags & VAR_1) {
  FUNC_1(VAR_9, " * Contains encrypted key\n");
  FUNC_1(VAR_9,
    " * session_key.encrypted_key_size = [0x%x]\n",
    VAR_11->session_key.encrypted_key_size);
  FUNC_1(VAR_9, " * Encrypted session key "
    "dump:\n");
  if (VAR_10 > 0)
   FUNC_0(VAR_11->session_key.encrypted_key,
       VAR_11->session_key.
       encrypted_key_size);
 }
}
