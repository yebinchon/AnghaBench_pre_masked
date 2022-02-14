
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct socket {int dummy; } ;
struct secpolicy {int dummy; } ;
struct sadb_x_policy {int sadb_x_policy_id; } ;
struct sadb_msghdr {int* extlen; TYPE_1__* msg; int ** ext; } ;
struct mbuf {int dummy; } ;
struct TYPE_2__ {int sadb_msg_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 struct secpolicy* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct socket*,struct mbuf*,int ) ;
 int FUNC_4 (struct socket*,struct mbuf*,int ) ;
 struct mbuf* FUNC_5 (struct secpolicy*,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mbuf*) ;
 int FUNC_9 (char*) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_10(
     struct socket *VAR_9,
     struct mbuf *VAR_10,
     const struct sadb_msghdr *VAR_11)
{
 u_int32_t VAR_12;
 struct secpolicy *VAR_13;
 struct mbuf *VAR_14;

 FUNC_0(VAR_8, VAR_4);


 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0) || VAR_11 == ((void*)0) || VAR_11->msg == ((void*)0))
  FUNC_9("key_spdget: NULL pointer is passed.\n");

 if (VAR_11->ext[VAR_6] == ((void*)0) ||
     VAR_11->extlen[VAR_6] < sizeof(struct sadb_x_policy)) {
  FUNC_2((VAR_5, "key_spdget: invalid message is passed.\n"));
  return FUNC_3(VAR_9, VAR_10, VAR_0);
 }

 VAR_12 = ((struct sadb_x_policy *)
    (void *)VAR_11->ext[VAR_6])->sadb_x_policy_id;


 FUNC_6(VAR_8);
 if ((VAR_13 = FUNC_1(VAR_12)) == ((void*)0)) {
  FUNC_2((VAR_5, "key_spdget: no SP found id:%u.\n", VAR_12));
  FUNC_7(VAR_8);
  return FUNC_3(VAR_9, VAR_10, VAR_2);
 }
 FUNC_7(VAR_8);
 VAR_14 = FUNC_5(VAR_13, VAR_7, 0, VAR_11->msg->sadb_msg_pid);
 if (VAR_14 != ((void*)0)) {
  FUNC_8(VAR_10);
  return FUNC_4(VAR_9, VAR_14, VAR_3);
 } else
  return FUNC_3(VAR_9, VAR_10, VAR_1);
}
