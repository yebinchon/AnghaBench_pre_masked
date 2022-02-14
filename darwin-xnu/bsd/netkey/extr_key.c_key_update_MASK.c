
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
typedef scalar_t__ u_int16_t ;
struct socket {int dummy; } ;
struct secasvar {scalar_t__ spi; int flags; TYPE_3__* sah; struct socket* so; scalar_t__ flags2; int pid; } ;
struct secasindex {int dummy; } ;
struct secashead {int dummy; } ;
struct sadb_x_sa2 {scalar_t__ sadb_x_sa2_flags; scalar_t__ sadb_x_sa2_reqid; int sadb_x_sa2_mode; } ;
struct sadb_sa {scalar_t__ sadb_sa_spi; } ;
struct sadb_msghdr {int* extlen; TYPE_4__* msg; int ** ext; } ;
struct sadb_address {int dummy; } ;
struct mbuf {int dummy; } ;
typedef TYPE_5__* ifnet_t ;
struct TYPE_11__ {int if_index; } ;
struct TYPE_10__ {scalar_t__ sadb_msg_satype; int sadb_msg_pid; int sadb_msg_seq; } ;
struct TYPE_7__ {scalar_t__ ss_family; } ;
struct TYPE_8__ {scalar_t__ proto; scalar_t__ mode; TYPE_1__ src; } ;
struct TYPE_9__ {TYPE_2__ saidx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__,struct sadb_address*,struct sadb_address*,int ,struct secasindex*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 size_t VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct secasvar*,int ) ;
 TYPE_5__* FUNC_4 (struct sadb_msghdr const*,int ) ;
 struct mbuf* FUNC_5 (struct mbuf*,struct sadb_msghdr const*) ;
 struct secashead* FUNC_6 (struct secasindex*) ;
 struct secasvar* FUNC_7 (struct secashead*,int ) ;
 struct secasvar* FUNC_8 (struct secashead*,scalar_t__) ;
 int FUNC_9 (struct secasvar*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct socket*,struct mbuf*,int) ;
 int FUNC_12 (struct socket*,struct mbuf*,int ) ;
 int FUNC_13 (struct secashead*,struct mbuf*,struct sadb_msghdr const*) ;
 int FUNC_14 (struct secasvar*,struct mbuf*,struct sadb_msghdr const*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct mbuf*) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int FUNC_19 (char*) ;
 int VAR_23 ;

__attribute__((used)) static int
FUNC_20(
     struct socket *VAR_24,
     struct mbuf *VAR_25,
     const struct sadb_msghdr *VAR_26)
{
 struct sadb_sa *VAR_27;
 struct sadb_address *VAR_28, *VAR_29;
 ifnet_t VAR_30 = ((void*)0);
 struct secasindex VAR_31;
 struct secashead *VAR_32;
 struct secasvar *VAR_33;
 u_int16_t VAR_34;
 u_int8_t VAR_35;
 u_int32_t VAR_36;
 u_int16_t VAR_37;
 int VAR_38;

 FUNC_1(VAR_23, VAR_8);


 if (VAR_24 == ((void*)0) || VAR_25 == ((void*)0) || VAR_26 == ((void*)0) || VAR_26->msg == ((void*)0))
  FUNC_19("key_update: NULL pointer is passed.\n");


 if ((VAR_34 = FUNC_10(VAR_26->msg->sadb_msg_satype)) == 0) {
  FUNC_2((VAR_9, "key_update: invalid satype is passed.\n"));
  return FUNC_11(VAR_24, VAR_25, VAR_1);
 }

 if (VAR_26->ext[VAR_16] == ((void*)0) ||
     VAR_26->ext[VAR_11] == ((void*)0) ||
     VAR_26->ext[VAR_10] == ((void*)0) ||
     (VAR_26->msg->sadb_msg_satype == VAR_18 &&
      VAR_26->ext[VAR_13] == ((void*)0)) ||
     (VAR_26->msg->sadb_msg_satype == VAR_17 &&
      VAR_26->ext[VAR_12] == ((void*)0)) ||
     (VAR_26->ext[VAR_14] != ((void*)0) &&
      VAR_26->ext[VAR_15] == ((void*)0)) ||
     (VAR_26->ext[VAR_14] == ((void*)0) &&
      VAR_26->ext[VAR_15] != ((void*)0))) {
   FUNC_2((VAR_9, "key_update: invalid message is passed.\n"));
   return FUNC_11(VAR_24, VAR_25, VAR_1);
  }
 if (VAR_26->extlen[VAR_16] < sizeof(struct sadb_sa) ||
     VAR_26->extlen[VAR_11] < sizeof(struct sadb_address) ||
     VAR_26->extlen[VAR_10] < sizeof(struct sadb_address)) {
  FUNC_2((VAR_9, "key_update: invalid message is passed.\n"));
  return FUNC_11(VAR_24, VAR_25, VAR_1);
 }
 if (VAR_26->ext[VAR_21] != ((void*)0)) {
  VAR_35 = ((struct sadb_x_sa2 *)
    (void *)VAR_26->ext[VAR_21])->sadb_x_sa2_mode;
  VAR_36 = ((struct sadb_x_sa2 *)
     (void *)VAR_26->ext[VAR_21])->sadb_x_sa2_reqid;
  VAR_37 = ((struct sadb_x_sa2 *)(void *)VAR_26->ext[VAR_21])->sadb_x_sa2_flags;
 } else {
  VAR_35 = VAR_4;
  VAR_36 = 0;
  VAR_37 = 0;
 }


 VAR_27 = (struct sadb_sa *)(void *)VAR_26->ext[VAR_16];
 VAR_28 = (struct sadb_address *)(VAR_26->ext[VAR_11]);
 VAR_29 = (struct sadb_address *)(VAR_26->ext[VAR_10]);
 VAR_30 = FUNC_4(VAR_26, VAR_19);


 FUNC_0(VAR_34, VAR_35, VAR_36, VAR_28 + 1, VAR_29 + 1, VAR_30 ? VAR_30->if_index : 0, &VAR_31);

 FUNC_15(VAR_23);


 if ((VAR_32 = FUNC_6(&VAR_31)) == ((void*)0)) {
  FUNC_16(VAR_23);
  FUNC_2((VAR_9, "key_update: no SA index found.\n"));
  return FUNC_11(VAR_24, VAR_25, VAR_3);
 }



 VAR_38 = FUNC_13(VAR_32, VAR_25, VAR_26);
 if (VAR_38) {
  FUNC_16(VAR_23);
  return FUNC_11(VAR_24, VAR_25, VAR_38);
 }
 if ((VAR_33 = FUNC_8(VAR_32, VAR_27->sadb_sa_spi)) == ((void*)0)) {
  FUNC_16(VAR_23);
  FUNC_2((VAR_9,
      "key_update: no such a SA found (spi:%u)\n",
      (u_int32_t)FUNC_18(VAR_27->sadb_sa_spi)));
  return FUNC_11(VAR_24, VAR_25, VAR_1);
 }



 if (VAR_33->sah->saidx.proto != VAR_34) {
  FUNC_16(VAR_23);
  FUNC_2((VAR_9,
      "key_update: protocol mismatched (DB=%u param=%u)\n",
      VAR_33->sah->saidx.proto, VAR_34));
  return FUNC_11(VAR_24, VAR_25, VAR_1);
 }
 if (VAR_33->pid != VAR_26->msg->sadb_msg_pid) {
  FUNC_16(VAR_23);
  FUNC_2((VAR_9,
      "key_update: pid mismatched (DB:%u param:%u)\n",
      VAR_33->pid, VAR_26->msg->sadb_msg_pid));
  return FUNC_11(VAR_24, VAR_25, VAR_1);
 }


 VAR_38 = FUNC_14(VAR_33, VAR_25, VAR_26);
 if (VAR_38) {
  FUNC_3(VAR_33, VAR_6);
  FUNC_16(VAR_23);
  return FUNC_11(VAR_24, VAR_25, VAR_38);
 }

 VAR_33->flags2 = VAR_37;
 if (VAR_37 & VAR_22) {
  VAR_33->so = VAR_24;
 }





 if ((VAR_33->flags & VAR_20) != 0 &&
  (VAR_33->sah->saidx.mode != VAR_5 ||
   VAR_33->sah->saidx.src.ss_family != VAR_0))
  VAR_33->flags &= ~VAR_20;


 if ((VAR_38 = FUNC_9(VAR_33)) != 0) {
  FUNC_3(VAR_33, VAR_6);
  FUNC_16(VAR_23);
  return FUNC_11(VAR_24, VAR_25, VAR_38);
 }

 FUNC_16(VAR_23);

    {
  struct mbuf *VAR_39;


  VAR_39 = FUNC_5(VAR_25, VAR_26);
  if (VAR_39 == ((void*)0)) {
   FUNC_2((VAR_9, "key_update: No more memory.\n"));
   return FUNC_11(VAR_24, VAR_25, VAR_2);
  }

  FUNC_17(VAR_25);
  return FUNC_12(VAR_24, VAR_39, VAR_7);
    }
}
