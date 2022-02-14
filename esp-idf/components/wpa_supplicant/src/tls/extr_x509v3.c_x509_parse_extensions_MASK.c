
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct x509_certificate {int dummy; } ;
struct asn1_hdr {scalar_t__ class; scalar_t__ tag; int length; int * payload; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const*,size_t,struct asn1_hdr*) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct x509_certificate*,int const*,int,int const**) ;

__attribute__((used)) static int FUNC_3(struct x509_certificate *VAR_3,
     const u8 *VAR_4, size_t VAR_5)
{
 const u8 *VAR_6;
 struct asn1_hdr VAR_7;



 if (FUNC_0(VAR_4, VAR_5, &VAR_7) < 0 ||
     VAR_7.class != VAR_0 ||
     VAR_7.tag != VAR_1) {
  FUNC_1(VAR_2, "X509: Unexpected ASN.1 data "
      "for Extensions: class %d tag 0x%x; "
      "expected SEQUENCE", VAR_7.class, VAR_7.tag);
  return -1;
 }

 VAR_4 = VAR_7.payload;
 VAR_6 = VAR_4 + VAR_7.length;

 while (VAR_4 < VAR_6) {
  if (FUNC_2(VAR_3, VAR_4, VAR_6 - VAR_4, &VAR_4)
      < 0)
   return -1;
 }

 return 0;
}
