
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct x509_name {int dummy; } ;
struct asn1_hdr {int length; scalar_t__ class; int tag; int * payload; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int,struct asn1_hdr*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct x509_name*,int *,int) ;
 int FUNC_3 (struct x509_name*,int *,int) ;
 int FUNC_4 (struct x509_name*,int *,int) ;
 int FUNC_5 (struct x509_name*,int *,int) ;
 int FUNC_6 (struct x509_name*,int *,int) ;

__attribute__((used)) static int FUNC_7(struct x509_name *VAR_2,
       const u8 *VAR_3, size_t VAR_4)
{
 struct asn1_hdr VAR_5;
 const u8 *VAR_6, *VAR_7;
 for (VAR_6 = VAR_3, VAR_7 = VAR_3 + VAR_4; VAR_6 < VAR_7; VAR_6 = VAR_5.payload + VAR_5.length) {
  int VAR_8;

  if (FUNC_0(VAR_6, VAR_7 - VAR_6, &VAR_5) < 0) {
   FUNC_1(VAR_1, "X509: Failed to parse "
       "SubjectAltName item");
   return -1;
  }

  if (VAR_5.class != VAR_0)
   continue;

  switch (VAR_5.tag) {
  case 1:
   VAR_8 = FUNC_4(VAR_2, VAR_5.payload,
         VAR_5.length);
   break;
  case 2:
   VAR_8 = FUNC_2(VAR_2, VAR_5.payload,
            VAR_5.length);
   break;
  case 6:
   VAR_8 = FUNC_6(VAR_2, VAR_5.payload,
            VAR_5.length);
   break;
  case 7:
   VAR_8 = FUNC_3(VAR_2, VAR_5.payload,
           VAR_5.length);
   break;
  case 8:
   VAR_8 = FUNC_5(VAR_2, VAR_5.payload,
            VAR_5.length);
   break;
  case 0:
  case 3:
  case 4:
  case 5:
  default:
   VAR_8 = 0;
   break;
  }
  if (VAR_8 < 0)
   return VAR_8;
 }

 return 0;
}
