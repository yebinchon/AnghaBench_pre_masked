
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct x509_certificate {int subject; int extensions_present; } ;
struct asn1_hdr {scalar_t__ class; scalar_t__ tag; scalar_t__ length; int payload; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int const*,size_t,struct asn1_hdr*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct x509_certificate *VAR_4,
        const u8 *VAR_5, size_t VAR_6)
{
 struct asn1_hdr VAR_7;



 if (FUNC_0(VAR_5, VAR_6, &VAR_7) < 0 ||
     VAR_7.class != VAR_0 ||
     VAR_7.tag != VAR_1) {
  FUNC_1(VAR_2, "X509: Expected SEQUENCE in "
      "SubjectAltName; found %d tag 0x%x",
      VAR_7.class, VAR_7.tag);
  return -1;
 }

 FUNC_1(VAR_2, "X509: SubjectAltName");
 VAR_4->extensions_present |= VAR_3;

 if (VAR_7.length == 0)
  return 0;

 return FUNC_2(&VAR_4->subject, VAR_7.payload,
           VAR_7.length);
}
