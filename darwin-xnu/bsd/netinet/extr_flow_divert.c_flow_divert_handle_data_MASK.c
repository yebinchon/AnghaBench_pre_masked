
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct flow_divert_pcb {size_t bytes_received; TYPE_3__* so; int sb_size; struct sockaddr* remote_address; } ;
typedef int remote_address ;
typedef int * mbuf_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_13__ {int sb_cc; } ;
struct TYPE_12__ {int so_state; TYPE_6__ so_rcv; TYPE_2__* so_proto; } ;
struct TYPE_11__ {TYPE_1__* pr_domain; } ;
struct TYPE_10__ {int dom_family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct flow_divert_pcb*) ;
 int FUNC_1 (int ,struct flow_divert_pcb*,char*,int) ;
 int FUNC_2 (int ,struct flow_divert_pcb*,char*) ;
 int FUNC_3 (struct flow_divert_pcb*) ;
 int VAR_1 ;
 int FUNC_4 (struct sockaddr*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (struct flow_divert_pcb*,size_t,scalar_t__) ;
 scalar_t__ FUNC_7 (struct flow_divert_pcb*) ;
 scalar_t__ FUNC_8 (struct flow_divert_pcb*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ,struct sockaddr*,struct sockaddr**) ;
 int * FUNC_11 (struct flow_divert_pcb*) ;
 scalar_t__ FUNC_12 (struct sockaddr*) ;
 int FUNC_13 (int *,size_t,int ,int,struct sockaddr_storage*,int*) ;
 int FUNC_14 (struct flow_divert_pcb*,int ) ;
 int FUNC_15 (struct flow_divert_pcb*,int ,scalar_t__) ;
 int FUNC_16 (int *) ;
 size_t FUNC_17 (int *) ;
 int FUNC_18 (int *,size_t,int ,int **) ;
 int FUNC_19 (struct sockaddr_storage*,int ,int) ;
 scalar_t__ FUNC_20 (TYPE_6__*,struct sockaddr*,int *,int *,int *) ;
 scalar_t__ FUNC_21 (TYPE_6__*,int *) ;
 int FUNC_22 (TYPE_3__*,int ) ;
 int FUNC_23 (TYPE_3__*,int ) ;
 int FUNC_24 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_25(struct flow_divert_pcb *VAR_12, mbuf_t VAR_13, size_t VAR_14)
{
 FUNC_0(VAR_12);
 if (VAR_12->so != ((void*)0)) {
  int VAR_15 = 0;
  mbuf_t VAR_16 = ((void*)0);
  size_t VAR_17;
  struct sockaddr_storage VAR_18;
  boolean_t VAR_19 = VAR_0;

  FUNC_22(VAR_12->so, 0);

  if (FUNC_5(VAR_12->so) == VAR_8) {
   uint32_t VAR_20 = 0;


   FUNC_19(&VAR_18, 0, sizeof(VAR_18));
   VAR_15 = FUNC_13(VAR_13, VAR_14, VAR_1, sizeof(VAR_18), &VAR_18, &VAR_20);
   if (VAR_15 || VAR_20 > sizeof(VAR_18)) {
    FUNC_2(VAR_4, VAR_12, "No remote address provided");
    VAR_15 = 0;
   } else {

    if (FUNC_12((struct sockaddr *)&VAR_18)) {
     VAR_19 = VAR_11;
    }
    VAR_14 += (sizeof(uint8_t) + sizeof(uint32_t) + VAR_20);
   }
  }

  VAR_17 = (FUNC_17(VAR_13) - VAR_14);

  FUNC_1(VAR_2, VAR_12, "received %lu bytes of data", VAR_17);

  VAR_15 = FUNC_18(VAR_13, VAR_14, VAR_5, &VAR_16);
  if (VAR_15 || VAR_16 == ((void*)0)) {
   FUNC_1(VAR_3, VAR_12, "mbuf_split failed: %d", VAR_15);
  } else {
   if (FUNC_7(VAR_12) ||
       FUNC_8(VAR_12))
   {
    FUNC_15(VAR_12, VAR_7, VAR_11);
    FUNC_14(VAR_12, VAR_7);
    FUNC_9(VAR_12->so);
   } else if (!(VAR_12->so->so_state & VAR_10)) {
    if (FUNC_5(VAR_12->so) == VAR_9) {
     if (FUNC_21(&VAR_12->so->so_rcv, VAR_16)) {
      VAR_12->bytes_received += VAR_17;
      FUNC_6(VAR_12, VAR_17, VAR_0);
      VAR_12->sb_size = VAR_12->so->so_rcv.sb_cc;
      FUNC_24(VAR_12->so);
      VAR_16 = ((void*)0);
     } else {
      FUNC_2(VAR_3, VAR_12, "received data, but appendstream failed");
     }
    } else if (FUNC_5(VAR_12->so) == VAR_8) {
     struct sockaddr *VAR_21;
     mbuf_t VAR_22;

     if (VAR_19 == VAR_11) {
      VAR_15 = FUNC_10(VAR_12->so->so_proto->pr_domain->dom_family,
        (struct sockaddr *)&VAR_18, &VAR_21);
     } else {
      VAR_15 = FUNC_10(VAR_12->so->so_proto->pr_domain->dom_family,
        VAR_12->remote_address, &VAR_21);
     }
     if (VAR_15) {
      FUNC_2(VAR_3, VAR_12, "failed to dup the socket address.");
     }

     VAR_22 = FUNC_11(VAR_12);
     if (FUNC_20(&VAR_12->so->so_rcv, VAR_21, VAR_16, VAR_22, ((void*)0))) {
      VAR_12->bytes_received += VAR_17;
      FUNC_6(VAR_12, VAR_17, VAR_0);
      VAR_12->sb_size = VAR_12->so->so_rcv.sb_cc;
      FUNC_24(VAR_12->so);
      VAR_16 = ((void*)0);
     } else {
      FUNC_2(VAR_3, VAR_12, "received data, but sbappendaddr failed");
     }
     if (!VAR_15) {
      FUNC_4(VAR_21, VAR_6);
     }
    }
   }
  }
  FUNC_23(VAR_12->so, 0);

  if (VAR_16 != ((void*)0)) {
   FUNC_16(VAR_16);
  }
 }
 FUNC_3(VAR_12);
}
