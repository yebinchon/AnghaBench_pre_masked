
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sac_state; scalar_t__ sac_assoc_id; } ;
struct TYPE_4__ {scalar_t__ sn_type; } ;
union sctp_notification {TYPE_2__ sn_assoc_change; TYPE_1__ sn_header; } ;
struct sockaddr_storage {int dummy; } ;
struct sctp_prim {scalar_t__ ssp_assoc_id; int ssp_addr; } ;
struct msghdr {int dummy; } ;
struct connection {int sctp_assoc; int rwork; int flags; int swork; int sock; } ;
struct TYPE_6__ {int sd; scalar_t__ associd; } ;
typedef TYPE_3__ sctp_peeloff_arg_t ;
typedef int parg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;



 int VAR_7 ;


 int VAR_8 ;
 int FUNC_0 (int ,struct connection*) ;
 int FUNC_1 (int *,int*) ;
 struct connection* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,int ,void*,int*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *,int ,int*) ;
 int FUNC_7 (struct sctp_prim*,int ,int) ;
 struct connection* FUNC_8 (int,int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int ,int *) ;
 int VAR_9 ;
 int FUNC_11 () ;
 int FUNC_12 (scalar_t__) ;
 int VAR_10 ;
 int FUNC_13 (int ,int*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static void FUNC_16(struct connection *VAR_11,
          struct msghdr *VAR_12, char *VAR_13)
{
 union sctp_notification *VAR_14 = (union sctp_notification *)VAR_13;

 if (VAR_14->sn_header.sn_type == VAR_6) {
  switch (VAR_14->sn_assoc_change.sac_state) {

  case 130:
  case 129:
  {

   struct sctp_prim VAR_15;
   int VAR_16;
   int VAR_17, VAR_18;
   int VAR_19;
   struct connection *VAR_20;
   sctp_peeloff_arg_t VAR_21;
   int VAR_22 = sizeof(VAR_21);
   int VAR_23;






   if ((int)VAR_14->sn_assoc_change.sac_assoc_id <= 0) {
    FUNC_5("COMM_UP for invalid assoc ID %d",
      (int)VAR_14->sn_assoc_change.sac_assoc_id);
    FUNC_11();
    return;
   }
   FUNC_7(&VAR_15, 0, sizeof(struct sctp_prim));
   VAR_17 = sizeof(struct sctp_prim);
   VAR_15.ssp_assoc_id = VAR_14->sn_assoc_change.sac_assoc_id;

   VAR_18 = FUNC_4(VAR_11->sock,
      VAR_5,
      VAR_7,
      (char*)&VAR_15,
      &VAR_17);
   if (VAR_18 < 0) {
    FUNC_5("getsockopt/sctp_primary_addr on "
       "new assoc %d failed : %d",
       (int)VAR_14->sn_assoc_change.sac_assoc_id,
       VAR_18);


    VAR_20 = FUNC_2(VAR_14->sn_assoc_change.sac_assoc_id);
    if (VAR_20)
     FUNC_3(VAR_0, &VAR_11->flags);
    return;
   }
   FUNC_6(&VAR_15.ssp_addr, 0, &VAR_19);
   if (FUNC_1(&VAR_15.ssp_addr, &VAR_16)) {
    int VAR_24;
    unsigned char *VAR_25=(unsigned char *)&VAR_15.ssp_addr;
    FUNC_5("reject connect from unknown addr");
    for (VAR_24=0; VAR_24<sizeof(struct sockaddr_storage);VAR_24++)
     FUNC_9("%02x ", VAR_25[VAR_24]);
    FUNC_9("\n");
    FUNC_12(VAR_15.ssp_assoc_id);
    return;
   }

   VAR_20 = FUNC_8(VAR_16, VAR_4);
   if (!VAR_20)
    return;


   VAR_21.associd = VAR_14->sn_assoc_change.sac_assoc_id;
   VAR_18 = FUNC_4(VAR_11->sock, VAR_5,
      VAR_8,
      (void *)&VAR_21, &VAR_22);
   if (VAR_18 < 0) {
    FUNC_5("Can't peel off a socket for "
       "connection %d to node %d: err=%d",
       VAR_21.associd, VAR_16, VAR_18);
    return;
   }
   VAR_20->sock = FUNC_13(VAR_21.sd, &VAR_23);
   if (!VAR_20->sock) {
    FUNC_5("sockfd_lookup error %d", VAR_23);
    return;
   }
   FUNC_0(VAR_20->sock, VAR_20);
   FUNC_14(VAR_20->sock);

   FUNC_5("connecting to %d sctp association %d",
     VAR_16, (int)VAR_14->sn_assoc_change.sac_assoc_id);


   FUNC_3(VAR_0, &VAR_20->flags);
   FUNC_3(VAR_1, &VAR_11->flags);
   if (!FUNC_15(VAR_3, &VAR_20->flags)) {
    FUNC_10(VAR_10, &VAR_20->swork);
   }
   if (!FUNC_15(VAR_2, &VAR_20->flags))
    FUNC_10(VAR_9, &VAR_20->rwork);
  }
  break;

  case 131:
  case 128:
  {
   VAR_11 = FUNC_2(VAR_14->sn_assoc_change.sac_assoc_id);
   if (VAR_11) {
    VAR_11->sctp_assoc = 0;
   }
  }
  break;





  case 132:
  {
   FUNC_5("Can't start SCTP association - retrying");
   FUNC_11();
  }
  break;

  default:
   FUNC_5("unexpected SCTP assoc change id=%d state=%d",
      (int)VAR_14->sn_assoc_change.sac_assoc_id,
      VAR_14->sn_assoc_change.sac_state);
  }
 }
}
