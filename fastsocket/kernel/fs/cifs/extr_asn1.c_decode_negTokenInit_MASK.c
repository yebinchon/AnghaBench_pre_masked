
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_ctx {scalar_t__ error; int pointer; } ;
struct TCP_Server_Info {int sec_mskerberos; int sec_kerberosu2u; int sec_kerberos; int sec_ntlmssp; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct asn1_ctx*,unsigned char*) ;
 unsigned int FUNC_1 (struct asn1_ctx*,unsigned char**,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct asn1_ctx*,unsigned char*,unsigned long**,unsigned int*) ;
 int FUNC_3 (struct asn1_ctx*,unsigned char*,int) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (unsigned long*,unsigned int,int ,int ) ;
 int FUNC_6 (unsigned long*) ;

int
FUNC_7(unsigned char *VAR_20, int VAR_21,
      struct TCP_Server_Info *VAR_22)
{
 struct asn1_ctx VAR_23;
 unsigned char *VAR_24;
 unsigned char *VAR_25;
 unsigned long *VAR_26 = ((void*)0);
 unsigned int VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;



 FUNC_3(&VAR_23, VAR_20, VAR_21);


 if (FUNC_1(&VAR_23, &VAR_24, &VAR_27, &VAR_28, &VAR_29) == 0) {
  FUNC_4(1, "Error decoding negTokenInit header");
  return 0;
 } else if ((VAR_27 != VAR_0) || (VAR_28 != VAR_1)
     || (VAR_29 != VAR_3)) {
  FUNC_4(1, "cls = %d con = %d tag = %d", VAR_27, VAR_28, VAR_29);
  return 0;
 }


 VAR_31 = FUNC_1(&VAR_23, &VAR_24, &VAR_27, &VAR_28, &VAR_29);
 if (VAR_31) {
  if ((VAR_29 == VAR_6) && (VAR_28 == VAR_7) &&
      (VAR_27 == VAR_9)) {
   VAR_31 = FUNC_2(&VAR_23, VAR_24, &VAR_26, &VAR_30);
   if (VAR_31) {
    VAR_31 = FUNC_5(VAR_26, VAR_30, VAR_18,
       VAR_19);
    FUNC_6(VAR_26);
   }
  } else
   VAR_31 = 0;
 }


 if (!VAR_31) {
  FUNC_4(1, "Error decoding negTokenInit header");
  return 0;
 }


 if (FUNC_1(&VAR_23, &VAR_24, &VAR_27, &VAR_28, &VAR_29) == 0) {
  FUNC_4(1, "Error decoding negTokenInit");
  return 0;
 } else if ((VAR_27 != VAR_2) || (VAR_28 != VAR_1)
     || (VAR_29 != VAR_3)) {
  FUNC_4(1, "cls = %d con = %d tag = %d end = %p (%d) exit 0",
       VAR_27, VAR_28, VAR_29, VAR_24, *VAR_24);
  return 0;
 }


 if (FUNC_1(&VAR_23, &VAR_24, &VAR_27, &VAR_28, &VAR_29) == 0) {
  FUNC_4(1, "Error decoding negTokenInit");
  return 0;
 } else if ((VAR_27 != VAR_9) || (VAR_28 != VAR_1)
     || (VAR_29 != VAR_8)) {
  FUNC_4(1, "cls = %d con = %d tag = %d end = %p (%d) exit 1",
       VAR_27, VAR_28, VAR_29, VAR_24, *VAR_24);
  return 0;
 }


 if (FUNC_1(&VAR_23, &VAR_24, &VAR_27, &VAR_28, &VAR_29) == 0) {
  FUNC_4(1, "Error decoding 2nd part of negTokenInit");
  return 0;
 } else if ((VAR_27 != VAR_2) || (VAR_28 != VAR_1)
     || (VAR_29 != VAR_3)) {
  FUNC_4(1, "cls = %d con = %d tag = %d end = %p (%d) exit 0",
       VAR_27, VAR_28, VAR_29, VAR_24, *VAR_24);
  return 0;
 }


 if (FUNC_1
     (&VAR_23, &VAR_25, &VAR_27, &VAR_28, &VAR_29) == 0) {
  FUNC_4(1, "Error decoding 2nd part of negTokenInit");
  return 0;
 } else if ((VAR_27 != VAR_9) || (VAR_28 != VAR_1)
     || (VAR_29 != VAR_8)) {
  FUNC_4(1, "cls = %d con = %d tag = %d end = %p (%d) exit 1",
       VAR_27, VAR_28, VAR_29, VAR_24, *VAR_24);
  return 0;
 }


 while (!FUNC_0(&VAR_23, VAR_25)) {
  VAR_31 = FUNC_1(&VAR_23, &VAR_24, &VAR_27, &VAR_28, &VAR_29);
  if (!VAR_31) {
   FUNC_4(1, "Error decoding negTokenInit hdr exit2");
   return 0;
  }
  if ((VAR_29 == VAR_6) && (VAR_28 == VAR_7)) {
   if (FUNC_2(&VAR_23, VAR_24, &VAR_26, &VAR_30)) {

    FUNC_4(1, "OID len = %d oid = 0x%lx 0x%lx "
     "0x%lx 0x%lx", VAR_30, *VAR_26,
     *(VAR_26 + 1), *(VAR_26 + 2), *(VAR_26 + 3));

    if (FUNC_5(VAR_26, VAR_30, VAR_14,
      VAR_15))
     VAR_22->sec_mskerberos = 1;
    else if (FUNC_5(VAR_26, VAR_30, VAR_10,
           VAR_11))
     VAR_22->sec_kerberosu2u = 1;
    else if (FUNC_5(VAR_26, VAR_30, VAR_12,
           VAR_13))
     VAR_22->sec_kerberos = 1;
    else if (FUNC_5(VAR_26, VAR_30, VAR_16,
           VAR_17))
     VAR_22->sec_ntlmssp = 1;

    FUNC_6(VAR_26);
   }
  } else {
   FUNC_4(1, "Should be an oid what is going on?");
  }
 }


 if (FUNC_1(&VAR_23, &VAR_24, &VAR_27, &VAR_28, &VAR_29) == 0) {


  if (VAR_23.error == VAR_4)
   goto decode_negtoken_exit;
  FUNC_4(1, "Error decoding last part negTokenInit exit3");
  return 0;
 } else if ((VAR_27 != VAR_2) || (VAR_28 != VAR_1)) {

  FUNC_4(1, "Exit 4 cls = %d con = %d tag = %d end = %p (%d)",
   VAR_27, VAR_28, VAR_29, VAR_24, *VAR_24);
  return 0;
 }


 if (FUNC_1(&VAR_23, &VAR_24, &VAR_27, &VAR_28, &VAR_29) == 0) {
  FUNC_4(1, "Error decoding last part negTokenInit exit5");
  return 0;
 } else if ((VAR_27 != VAR_9) || (VAR_28 != VAR_1)
     || (VAR_29 != VAR_8)) {
  FUNC_4(1, "cls = %d con = %d tag = %d end = %p (%d)",
   VAR_27, VAR_28, VAR_29, VAR_24, *VAR_24);
 }


 if (FUNC_1(&VAR_23, &VAR_24, &VAR_27, &VAR_28, &VAR_29) == 0) {
  FUNC_4(1, "Error decoding last part negTokenInit exit 7");
  return 0;
 } else if ((VAR_27 != VAR_2) || (VAR_28 != VAR_1)) {
  FUNC_4(1, "Exit 8 cls = %d con = %d tag = %d end = %p (%d)",
   VAR_27, VAR_28, VAR_29, VAR_24, *VAR_24);
  return 0;
 }


 if (FUNC_1(&VAR_23, &VAR_24, &VAR_27, &VAR_28, &VAR_29) == 0) {
  FUNC_4(1, "Error decoding last part negTokenInit exit9");
  return 0;
 } else if ((VAR_27 != VAR_9) || (VAR_28 != VAR_7)
     || (VAR_29 != VAR_5)) {
  FUNC_4(1, "Exit10 cls = %d con = %d tag = %d end = %p (%d)",
   VAR_27, VAR_28, VAR_29, VAR_24, *VAR_24);
  return 0;
 }
 FUNC_4(1, "Need to call asn1_octets_decode() function for %s",
  VAR_23.pointer);
decode_negtoken_exit:
 return 1;
}
