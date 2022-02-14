
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct x509_certificate {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char* FUNC_0 (unsigned char const*,int,size_t*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char* FUNC_3 (int ,unsigned char const*,int) ;
 scalar_t__ FUNC_4 (struct x509_certificate**,unsigned char const*,size_t) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int FUNC_6(struct x509_certificate **VAR_4,
     const u8 *VAR_5, size_t VAR_6)
{
 const u8 *VAR_7, *VAR_8;
 unsigned char *VAR_9;
 size_t VAR_10;

 VAR_7 = FUNC_3(VAR_2, VAR_5, VAR_6);
 if (!VAR_7) {
  FUNC_5(VAR_0, "TLSv1: No PEM certificate tag found - "
      "assume DER format");
  return FUNC_4(VAR_4, VAR_5, VAR_6);
 }

 FUNC_5(VAR_0, "TLSv1: Converting PEM format certificate into "
     "DER format");

 while (VAR_7) {
  VAR_7 += FUNC_2(VAR_2);
  VAR_8 = FUNC_3(VAR_3, VAR_7, VAR_5 + VAR_6 - VAR_7);
  if (VAR_8 == ((void*)0)) {
   FUNC_5(VAR_1, "TLSv1: Could not find PEM "
       "certificate end tag (%s)", VAR_3);
   return -1;
  }

  VAR_9 = FUNC_0(VAR_7, VAR_8 - VAR_7, &VAR_10);
  if (VAR_9 == ((void*)0)) {
   FUNC_5(VAR_1, "TLSv1: Could not decode PEM "
       "certificate");
   return -1;
  }

  if (FUNC_4(VAR_4, VAR_9, VAR_10) < 0) {
   FUNC_5(VAR_1, "TLSv1: Failed to parse PEM "
       "certificate after DER conversion");
   FUNC_1(VAR_9);
   return -1;
  }

  FUNC_1(VAR_9);

  VAR_8 += FUNC_2(VAR_3);
  VAR_7 = FUNC_3(VAR_2, VAR_8, VAR_5 + VAR_6 - VAR_8);
 }

 return 0;
}
