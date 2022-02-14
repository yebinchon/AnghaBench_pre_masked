
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct user_key_payload {int perm; size_t datalen; int data; TYPE_1__ payload; } ;
struct key {int perm; size_t datalen; int data; TYPE_1__ payload; } ;
struct cred {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct user_key_payload*) ;
 scalar_t__ FUNC_1 (struct user_key_payload*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_2 (struct user_key_payload*) ;
 int VAR_3 ;
 int FUNC_3 (struct user_key_payload*) ;
 int VAR_4 ;
 size_t FUNC_4 (struct user_key_payload*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (void*,int ,size_t) ;
 size_t FUNC_7 (char const*,size_t,char const*,int ,char**) ;
 struct cred* FUNC_8 (int ) ;
 struct user_key_payload* FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 struct user_key_payload* FUNC_12 (int *,char*,char*) ;
 int FUNC_13 (struct cred const*) ;
 int FUNC_14 (char const*) ;

__attribute__((used)) static ssize_t FUNC_15(const char *VAR_5, size_t VAR_6,
  const char *VAR_7, void *VAR_8, size_t VAR_9)
{
 const struct cred *VAR_10;
 struct key *VAR_11;
 char *VAR_12;
 struct user_key_payload *VAR_13;
 ssize_t VAR_14;

 VAR_14 = FUNC_7(VAR_5, VAR_6, VAR_7, FUNC_14(VAR_7), &VAR_12);
 if (VAR_14 <= 0)
  goto out;

 VAR_10 = FUNC_8(VAR_3);
 VAR_11 = FUNC_12(&VAR_4, VAR_12, "");
 FUNC_13(VAR_10);
 FUNC_5(VAR_12);
 if (FUNC_0(VAR_11)) {
  VAR_14 = FUNC_2(VAR_11);
  goto out;
 }

 FUNC_10();
 VAR_11->perm |= VAR_1|VAR_2;

 VAR_14 = FUNC_4(VAR_11);
 if (VAR_14 < 0)
  goto out_up;

 VAR_13 = FUNC_9(VAR_11->payload.data);
 if (FUNC_1(VAR_13)) {
  VAR_14 = FUNC_2(VAR_13);
  goto out_up;
 }

 VAR_14 = VAR_13->datalen;
 if (VAR_14 > 0 && VAR_14 <= VAR_9)
  FUNC_6(VAR_8, VAR_13->data, VAR_14);
 else
  VAR_14 = -VAR_0;

out_up:
 FUNC_11();
 FUNC_3(VAR_11);
out:
 return VAR_14;
}
