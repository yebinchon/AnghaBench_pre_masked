
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct bpf_if {scalar_t__ bif_ifp; int bif_dlt; int bif_hdrlen; int bif_exthdrlen; struct bpf_if* bif_next; int bif_tap; int bif_send; } ;
struct bpf_hdr_ext {int dummy; } ;
typedef scalar_t__ ifnet_t ;
typedef int errno_t ;
typedef int bpf_tap_func ;
typedef int bpf_send_func ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct bpf_if*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (int,int ,int) ;
 scalar_t__ VAR_9 ;
 struct bpf_if* VAR_10 ;
 int VAR_11 ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,...) ;

errno_t
FUNC_10(
 ifnet_t VAR_12,
 u_int32_t VAR_13,
 u_int32_t VAR_14,
 bpf_send_func VAR_15,
 bpf_tap_func VAR_16)
{
 struct bpf_if *VAR_17;
 struct bpf_if *VAR_18;
 struct bpf_if *VAR_19 = ((void*)0);
 struct bpf_if *VAR_20 = ((void*)0);
 struct bpf_if *VAR_21 = ((void*)0);
 boolean_t VAR_22;

 VAR_18 = (struct bpf_if *) FUNC_2(sizeof(*VAR_18), VAR_4,
     VAR_5 | VAR_6);
 if (VAR_18 == 0)
  FUNC_8("bpfattach");

 FUNC_6(VAR_11);






 VAR_22 = VAR_2;
 for (VAR_17 = VAR_10; VAR_17 != ((void*)0); VAR_17 = VAR_17->bif_next) {
  if (VAR_17->bif_ifp != VAR_12) {
   if (VAR_20 != ((void*)0)) {

    break;
   }
   VAR_19 = VAR_17;
  } else {
   if (VAR_17->bif_dlt == VAR_13) {
    VAR_22 = VAR_8;
    break;
   }
   if (VAR_20 == ((void*)0)) {
    VAR_20 = VAR_17;
   }
   VAR_21 = VAR_17;
  }
 }
 if (VAR_22) {
  FUNC_7(VAR_11);
  FUNC_9("bpfattach - %s with dlt %d is already attached\n",
   FUNC_3(VAR_12), VAR_13);
  FUNC_1(VAR_18, VAR_4);
  return (VAR_1);
 }

 VAR_18->bif_ifp = VAR_12;
 VAR_18->bif_dlt = VAR_13;
 VAR_18->bif_send = VAR_15;
 VAR_18->bif_tap = VAR_16;

 if (VAR_20 == ((void*)0)) {

  VAR_18->bif_next = VAR_10;
  VAR_10 = VAR_18;
 } else {
  if (FUNC_5(VAR_12) == VAR_3 && VAR_13 == VAR_0) {

   if (VAR_19 != ((void*)0)) {

    VAR_19->bif_next = VAR_18;
   } else {

    VAR_10 = VAR_18;
   }
   VAR_18->bif_next = VAR_20;
  } else {

   VAR_18->bif_next = VAR_21->bif_next;
   VAR_21->bif_next = VAR_18;
  }
 }







 VAR_18->bif_hdrlen = FUNC_0(VAR_14 + VAR_7) - VAR_14;
 VAR_18->bif_exthdrlen = FUNC_0(VAR_14 +
     sizeof(struct bpf_hdr_ext)) - VAR_14;


 FUNC_4(VAR_12);

 FUNC_7(VAR_11);


 if (VAR_9)
  FUNC_9("bpf: %s attached\n", FUNC_3(VAR_12));


 return (0);
}
