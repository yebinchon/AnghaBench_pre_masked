
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct x509_certificate {unsigned long version; int serial_number; int subject; int issuer; int signature; } ;
struct asn1_hdr {int tag; int length; int const* payload; int class; } ;
typedef int sbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ FUNC_0 (int const*,int,struct asn1_hdr*) ;
 int FUNC_1 (int ,char*,int const*,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *,char*,int) ;
 scalar_t__ FUNC_4 (int const*,int,int *,int const**) ;
 scalar_t__ FUNC_5 (struct x509_certificate*,int const*,int) ;
 scalar_t__ FUNC_6 (int const*,int,int *,int const**) ;
 scalar_t__ FUNC_7 (int const*,int,struct x509_certificate*,int const**) ;
 scalar_t__ FUNC_8 (int const*,int,struct x509_certificate*,int const**) ;

__attribute__((used)) static int FUNC_9(const u8 *VAR_8, size_t VAR_9,
          struct x509_certificate *VAR_10,
          const u8 **VAR_11)
{
 struct asn1_hdr VAR_12;
 const u8 *VAR_13, *VAR_14;
 size_t VAR_15;
 char VAR_16[128];
 unsigned long VAR_17;


 if (FUNC_0(VAR_8, VAR_9, &VAR_12) < 0 ||
     VAR_12.class != VAR_1 ||
     VAR_12.tag != VAR_3) {
  FUNC_2(VAR_4, "X509: tbsCertificate did not start "
      "with a valid SEQUENCE - found class %d tag 0x%x",
      VAR_12.class, VAR_12.tag);
  return -1;
 }
 VAR_13 = VAR_12.payload;
 VAR_14 = *VAR_11 = VAR_13 + VAR_12.length;





 if (FUNC_0(VAR_13, VAR_14 - VAR_13, &VAR_12) < 0)
  return -1;
 VAR_13 = VAR_12.payload;

 if (VAR_12.class == VAR_0) {
  if (FUNC_0(VAR_13, VAR_14 - VAR_13, &VAR_12) < 0)
   return -1;

  if (VAR_12.class != VAR_1 ||
      VAR_12.tag != VAR_2) {
   FUNC_2(VAR_4, "X509: No INTEGER tag found for "
       "version field - found class %d tag 0x%x",
       VAR_12.class, VAR_12.tag);
   return -1;
  }
  if (VAR_12.length != 1) {
   FUNC_2(VAR_4, "X509: Unexpected version field "
       "length %u (expected 1)", VAR_12.length);
   return -1;
  }
  VAR_13 = VAR_12.payload;
  VAR_15 = VAR_12.length;
  VAR_17 = 0;
  while (VAR_15) {
   VAR_17 <<= 8;
   VAR_17 |= *VAR_13++;
   VAR_15--;
  }

  VAR_10->version = VAR_17;
  if (VAR_10->version != VAR_5 &&
      VAR_10->version != VAR_6 &&
      VAR_10->version != VAR_7) {
   FUNC_2(VAR_4, "X509: Unsupported version %d",
       VAR_10->version + 1);
   return -1;
  }

  if (FUNC_0(VAR_13, VAR_14 - VAR_13, &VAR_12) < 0)
   return -1;
 } else
  VAR_10->version = VAR_5;
 FUNC_2(VAR_4, "X509: Version X.509v%d", VAR_10->version + 1);


 if (VAR_12.class != VAR_1 ||
     VAR_12.tag != VAR_2) {
  FUNC_2(VAR_4, "X509: No INTEGER tag found for "
      "serialNumber; class=%d tag=0x%x",
      VAR_12.class, VAR_12.tag);
  return -1;
 }

 VAR_13 = VAR_12.payload;
 VAR_15 = VAR_12.length;
 while (VAR_15) {
  VAR_10->serial_number <<= 8;
  VAR_10->serial_number |= *VAR_13++;
  VAR_15--;
 }
 FUNC_2(VAR_4, "X509: serialNumber %lu", VAR_10->serial_number);


 if (FUNC_4(VAR_13, VAR_14 - VAR_13, &VAR_10->signature,
         &VAR_13))
  return -1;


 if (FUNC_6(VAR_13, VAR_14 - VAR_13, &VAR_10->issuer, &VAR_13))
  return -1;
 FUNC_3(&VAR_10->issuer, VAR_16, sizeof(VAR_16));
 FUNC_2(VAR_4, "X509: issuer %s", VAR_16);


 if (FUNC_8(VAR_13, VAR_14 - VAR_13, VAR_10, &VAR_13))
  return -1;


 if (FUNC_6(VAR_13, VAR_14 - VAR_13, &VAR_10->subject, &VAR_13))
  return -1;
 FUNC_3(&VAR_10->subject, VAR_16, sizeof(VAR_16));
 FUNC_2(VAR_4, "X509: subject %s", VAR_16);


 if (FUNC_7(VAR_13, VAR_14 - VAR_13, VAR_10, &VAR_13))
  return -1;

 if (VAR_13 == VAR_14)
  return 0;

 if (VAR_10->version == VAR_5)
  return 0;

 if (FUNC_0(VAR_13, VAR_14 - VAR_13, &VAR_12) < 0 ||
     VAR_12.class != VAR_0) {
  FUNC_2(VAR_4, "X509: Expected Context-Specific"
      " tag to parse optional tbsCertificate "
      "field(s); parsed class %d tag 0x%x",
      VAR_12.class, VAR_12.tag);
  return -1;
 }

 if (VAR_12.tag == 1) {

  FUNC_2(VAR_4, "X509: issuerUniqueID");


  if (VAR_12.payload + VAR_12.length == VAR_14)
   return 0;

  if (FUNC_0(VAR_13, VAR_14 - VAR_13, &VAR_12) < 0 ||
      VAR_12.class != VAR_0) {
   FUNC_2(VAR_4, "X509: Expected Context-Specific"
       " tag to parse optional tbsCertificate "
       "field(s); parsed class %d tag 0x%x",
       VAR_12.class, VAR_12.tag);
   return -1;
  }
 }

 if (VAR_12.tag == 2) {

  FUNC_2(VAR_4, "X509: subjectUniqueID");


  if (VAR_12.payload + VAR_12.length == VAR_14)
   return 0;

  if (FUNC_0(VAR_13, VAR_14 - VAR_13, &VAR_12) < 0 ||
      VAR_12.class != VAR_0) {
   FUNC_2(VAR_4, "X509: Expected Context-Specific"
       " tag to parse optional tbsCertificate "
       "field(s); parsed class %d tag 0x%x",
       VAR_12.class, VAR_12.tag);
   return -1;
  }
 }

 if (VAR_12.tag != 3) {
  FUNC_2(VAR_4, "X509: Ignored unexpected "
      "Context-Specific tag %d in optional "
      "tbsCertificate fields", VAR_12.tag);
  return 0;
 }



 if (VAR_10->version != VAR_7) {
  FUNC_2(VAR_4, "X509: X.509%d certificate and "
      "Extensions data which are only allowed for "
      "version 3", VAR_10->version + 1);
  return -1;
 }

 if (FUNC_5(VAR_10, VAR_12.payload, VAR_12.length) < 0)
  return -1;

 VAR_13 = VAR_12.payload + VAR_12.length;
 if (VAR_13 < VAR_14) {
  FUNC_1(VAR_4,
       "X509: Ignored extra tbsCertificate data",
       VAR_13, VAR_14 - VAR_13);
 }

 return 0;
}
