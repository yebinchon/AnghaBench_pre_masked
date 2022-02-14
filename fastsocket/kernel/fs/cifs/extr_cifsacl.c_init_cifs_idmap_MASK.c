
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct key {int dummy; } ;
struct cred {int jit_keyring; struct key* thread_keyring; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (int,char*,int ) ;
 TYPE_1__ VAR_7 ;
 struct key* FUNC_3 (int *,char*,int ,int ,struct cred*,int,int ) ;
 int FUNC_4 (struct key*,int *,int ,int *,int *) ;
 int FUNC_5 (struct key*) ;
 int FUNC_6 (struct key*) ;
 int VAR_8 ;
 struct cred* FUNC_7 (int *) ;
 int FUNC_8 (struct cred*) ;
 int FUNC_9 (TYPE_1__*) ;
 struct cred* VAR_9 ;

int
FUNC_10(void)
{
 struct cred *VAR_10;
 struct key *VAR_11;
 int VAR_12;

 FUNC_2(1, "Registering the %s key type\n", VAR_7.name);







 VAR_10 = FUNC_7(((void*)0));
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_3(&VAR_8, ".cifs_idmap", 0, 0, VAR_10,
       (VAR_2 & ~VAR_3) |
       VAR_6 | VAR_5,
       VAR_1);
 if (FUNC_0(VAR_11)) {
  VAR_12 = FUNC_1(VAR_11);
  goto failed_put_cred;
 }

 VAR_12 = FUNC_4(VAR_11, ((void*)0), 0, ((void*)0), ((void*)0));
 if (VAR_12 < 0)
  goto failed_put_key;

 VAR_12 = FUNC_9(&VAR_7);
 if (VAR_12 < 0)
  goto failed_put_key;



 VAR_10->thread_keyring = VAR_11;
 VAR_10->jit_keyring = VAR_4;
 VAR_9 = VAR_10;

 FUNC_2(1, "cifs idmap keyring: %d", FUNC_6(VAR_11));
 return 0;

failed_put_key:
 FUNC_5(VAR_11);
failed_put_cred:
 FUNC_8(VAR_10);
 return VAR_12;
}
