
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
typedef int u_int16_t ;
struct socket {int dummy; } ;
struct secasvar {int flags; } ;
struct secasindex {int dummy; } ;
struct TYPE_8__ {scalar_t__ ss_family; } ;
struct TYPE_9__ {scalar_t__ mode; TYPE_2__ dst; } ;
struct secashead {TYPE_3__ saidx; } ;
struct sadb_x_sa2 {scalar_t__ sadb_x_sa2_reqid; int sadb_x_sa2_mode; } ;
struct sadb_sa {int sadb_sa_spi; } ;
struct sadb_msghdr {int* extlen; int ** ext; TYPE_1__* msg; } ;
struct sadb_address {int dummy; } ;
struct mbuf {int dummy; } ;
typedef TYPE_4__* ifnet_t ;
struct TYPE_10__ {int if_index; } ;
struct TYPE_7__ {scalar_t__ sadb_msg_satype; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,scalar_t__,struct sadb_address*,struct sadb_address*,int ,struct secasindex*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;
 int FUNC_2 (struct sadb_msghdr const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct secasvar*,int ) ;
 TYPE_4__* FUNC_5 (struct sadb_msghdr const*,int ) ;
 int FUNC_6 (struct sadb_msghdr const*,int ) ;
 struct mbuf* FUNC_7 (struct mbuf*,struct sadb_msghdr const*) ;
 struct secashead* FUNC_8 (struct secasindex*) ;
 scalar_t__ FUNC_9 (struct secashead*,int ) ;
 int FUNC_10 (struct secasvar*) ;
 struct secashead* FUNC_11 (struct secasindex*,TYPE_4__*,int ,int ) ;
 struct secasvar* FUNC_12 (struct mbuf*,struct sadb_msghdr const*,struct secashead*,int*,struct socket*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct socket*,struct mbuf*,int) ;
 int FUNC_15 (struct socket*,struct mbuf*,int ) ;
 int FUNC_16 (struct secashead*,struct mbuf*,struct sadb_msghdr const*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct mbuf*) ;
 int FUNC_20 (char*) ;
 int VAR_23 ;

__attribute__((used)) static int
FUNC_21(
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
 int VAR_37;

 FUNC_1(VAR_23, VAR_9);


 if (VAR_24 == ((void*)0) || VAR_25 == ((void*)0) || VAR_26 == ((void*)0) || VAR_26->msg == ((void*)0))
  FUNC_20("key_add: NULL pointer is passed.\n");


 if ((VAR_34 = FUNC_13(VAR_26->msg->sadb_msg_satype)) == 0) {
  FUNC_3((VAR_10, "key_add: invalid satype is passed.\n"));
  FUNC_2(VAR_26);
  return FUNC_14(VAR_24, VAR_25, VAR_2);
 }

 if (VAR_26->ext[VAR_17] == ((void*)0) ||
     VAR_26->ext[VAR_12] == ((void*)0) ||
     VAR_26->ext[VAR_11] == ((void*)0) ||
     (VAR_26->msg->sadb_msg_satype == VAR_19 &&
      VAR_26->ext[VAR_14] == ((void*)0)) ||
     (VAR_26->msg->sadb_msg_satype == VAR_18 &&
      VAR_26->ext[VAR_13] == ((void*)0)) ||
     (VAR_26->ext[VAR_15] != ((void*)0) &&
      VAR_26->ext[VAR_16] == ((void*)0)) ||
     (VAR_26->ext[VAR_15] == ((void*)0) &&
      VAR_26->ext[VAR_16] != ((void*)0))) {
   FUNC_3((VAR_10, "key_add: invalid message is passed.\n"));
   FUNC_2(VAR_26);
   return FUNC_14(VAR_24, VAR_25, VAR_2);
  }
 if (VAR_26->extlen[VAR_17] < sizeof(struct sadb_sa) ||
     VAR_26->extlen[VAR_12] < sizeof(struct sadb_address) ||
     VAR_26->extlen[VAR_11] < sizeof(struct sadb_address)) {

  FUNC_3((VAR_10, "key_add: invalid message is passed.\n"));
  FUNC_2(VAR_26);
  return FUNC_14(VAR_24, VAR_25, VAR_2);
 }
 if (VAR_26->ext[VAR_22] != ((void*)0)) {
  VAR_35 = ((struct sadb_x_sa2 *)
    (void *)VAR_26->ext[VAR_22])->sadb_x_sa2_mode;
  VAR_36 = ((struct sadb_x_sa2 *)
     (void *)VAR_26->ext[VAR_22])->sadb_x_sa2_reqid;
 } else {
  VAR_35 = VAR_5;
  VAR_36 = 0;
 }

 VAR_27 = (struct sadb_sa *)(void *)VAR_26->ext[VAR_17];
 VAR_28 = (struct sadb_address *)VAR_26->ext[VAR_12];
 VAR_29 = (struct sadb_address *)VAR_26->ext[VAR_11];
 VAR_30 = FUNC_5(VAR_26, VAR_20);


 FUNC_0(VAR_34, VAR_35, VAR_36, VAR_28 + 1, VAR_29 + 1, VAR_30 ? VAR_30->if_index : 0, &VAR_31);

 FUNC_17(VAR_23);


 if ((VAR_32 = FUNC_8(&VAR_31)) == ((void*)0)) {

  if ((VAR_32 = FUNC_11(&VAR_31, VAR_30, FUNC_6(VAR_26, VAR_20), VAR_4)) == ((void*)0)) {
   FUNC_18(VAR_23);
   FUNC_3((VAR_10, "key_add: No more memory.\n"));
   FUNC_2(VAR_26);
   return FUNC_14(VAR_24, VAR_25, VAR_3);
  }
 }



 VAR_37 = FUNC_16(VAR_32, VAR_25, VAR_26);
 if (VAR_37) {
  FUNC_18(VAR_23);
  FUNC_2(VAR_26);
  return FUNC_14(VAR_24, VAR_25, VAR_37);
 }



 if (FUNC_9(VAR_32, VAR_27->sadb_sa_spi)) {
  FUNC_18(VAR_23);
  FUNC_3((VAR_10, "key_add: SA already exists.\n"));
  FUNC_2(VAR_26);
  return FUNC_14(VAR_24, VAR_25, VAR_1);
 }
 VAR_33 = FUNC_12(VAR_25, VAR_26, VAR_32, &VAR_37, VAR_24);
 if (VAR_33 == ((void*)0)) {
  FUNC_18(VAR_23);
  FUNC_2(VAR_26);
  return FUNC_14(VAR_24, VAR_25, VAR_37);
 }





 if ((VAR_33->flags & VAR_21) != 0 &&
  (VAR_32->saidx.mode != VAR_6 ||
   VAR_32->saidx.dst.ss_family != VAR_0))
  VAR_33->flags &= ~VAR_21;


 if ((VAR_37 = FUNC_10(VAR_33)) != 0) {
  FUNC_4(VAR_33, VAR_7);
  FUNC_18(VAR_23);
  FUNC_2(VAR_26);
  return FUNC_14(VAR_24, VAR_25, VAR_37);
 }

 FUNC_18(VAR_23);






    {
  struct mbuf *VAR_38;


  VAR_38 = FUNC_7(VAR_25, VAR_26);
  if (VAR_38 == ((void*)0)) {
   FUNC_3((VAR_10, "key_update: No more memory.\n"));
   FUNC_2(VAR_26);
   return FUNC_14(VAR_24, VAR_25, VAR_3);
  }



  FUNC_2(VAR_26);
  FUNC_19(VAR_25);
  return FUNC_15(VAR_24, VAR_38, VAR_8);
    }
}
