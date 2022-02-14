
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct asn1_oid {int dummy; } ;
struct asn1_hdr {scalar_t__ length; scalar_t__ class; scalar_t__ tag; int * payload; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const*,size_t,struct asn1_hdr*) ;
 int FUNC_1 (int *,int,struct asn1_oid*) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__) ;

int FUNC_3(const u8 *VAR_3, size_t VAR_4, struct asn1_oid *VAR_5,
   const u8 **VAR_6)
{
 struct asn1_hdr VAR_7;

 if (FUNC_0(VAR_3, VAR_4, &VAR_7) < 0 || VAR_7.length == 0)
  return -1;

 if (VAR_7.class != VAR_0 || VAR_7.tag != VAR_1) {
  FUNC_2(VAR_2, "ASN.1: Expected OID - found class %d "
      "tag 0x%x", VAR_7.class, VAR_7.tag);
  return -1;
 }

 *VAR_6 = VAR_7.payload + VAR_7.length;

 return FUNC_1(VAR_7.payload, VAR_7.length, VAR_5);
}
