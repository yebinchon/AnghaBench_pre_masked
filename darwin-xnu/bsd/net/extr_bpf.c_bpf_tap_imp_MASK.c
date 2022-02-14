
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct pktap_header_buffer {int dummy; } ;
struct bpf_packet {int bpfp_header_length; int bpfp_total_length; struct pktap_header_buffer* bpfp_header; } ;
struct bpf_if {scalar_t__ bif_dlt; TYPE_1__* bif_ifp; struct bpf_d* bif_dlist; struct bpf_if* bif_next; } ;
struct bpf_d {int bd_flags; int bd_filter; int bd_rcount; int bd_seesent; struct bpf_d* bd_next; } ;
typedef TYPE_1__* ifnet_t ;
typedef int bpfp_header_tmp ;
struct TYPE_4__ {scalar_t__ if_type; struct bpf_if* if_bpf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct bpf_d*,struct bpf_packet*,scalar_t__,int) ;
 int FUNC_2 (struct bpf_packet*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct bpf_d*,TYPE_1__*) ;
 int FUNC_7 (struct pktap_header_buffer*,struct pktap_header_buffer*,int) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;

__attribute__((used)) static inline void
FUNC_9(
 ifnet_t VAR_5,
 u_int32_t VAR_6,
 struct bpf_packet *VAR_7,
 int VAR_8)
{
 struct bpf_d *VAR_9;
 u_int VAR_10;
 struct bpf_if *VAR_11;
 FUNC_4(VAR_4);
 if (VAR_5->if_bpf == ((void*)0)) {
  FUNC_5(VAR_4);
  return;
 }
 for (VAR_11 = VAR_5->if_bpf; VAR_11 != ((void*)0); VAR_11 = VAR_11->bif_next) {
  if (VAR_11->bif_ifp != VAR_5) {

   VAR_11 = ((void*)0);
   break;
  }
  if (VAR_6 == 0 || VAR_11->bif_dlt == VAR_6) {

   break;
  }
 }
 if (VAR_11 == ((void*)0)) {
  goto done;
 }
 for (VAR_9 = VAR_11->bif_dlist; VAR_9; VAR_9 = VAR_9->bd_next) {
  struct bpf_packet *VAR_12 = VAR_7;
  struct bpf_packet VAR_13;
  struct pktap_header_buffer VAR_14;

  if (VAR_8 && !VAR_9->bd_seesent)
   continue;

  ++VAR_9->bd_rcount;
  VAR_10 = FUNC_0(VAR_9->bd_filter, (u_char *)VAR_7,
      VAR_7->bpfp_total_length, 0);
  if (VAR_11->bif_ifp->if_type == VAR_3 &&
      VAR_11->bif_dlt == VAR_2) {





   if ((VAR_9->bd_flags & VAR_0) &&
       VAR_7->bpfp_header_length <= sizeof(VAR_14)) {
    VAR_13 = *VAR_7;

    VAR_7 = &VAR_13;

    FUNC_7(&VAR_14, VAR_7->bpfp_header,
        VAR_7->bpfp_header_length);

    VAR_7->bpfp_header = &VAR_14;

    FUNC_2(VAR_7,
        !!(VAR_9->bd_flags & VAR_1));
   }

   if (VAR_9->bd_flags & VAR_1) {
    VAR_10 = FUNC_8(VAR_10,
        FUNC_3((u_char *)VAR_7,
       VAR_7->bpfp_total_length));
  }
  }
  if (VAR_10 != 0) {




   FUNC_1(VAR_9, VAR_7, VAR_10, VAR_8);
  }
  VAR_7 = VAR_12;
 }

done:
 FUNC_5(VAR_4);
}
