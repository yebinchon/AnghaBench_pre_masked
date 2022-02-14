
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct x509_certificate {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (struct x509_certificate**,int const*,size_t) ;
 int FUNC_2 (int ,char*,char const*) ;

__attribute__((used)) static int FUNC_3(struct x509_certificate **VAR_1,
    const char *VAR_2, const u8 *VAR_3,
    size_t VAR_4)
{
 if (VAR_3)
  return FUNC_1(VAR_1, VAR_3, VAR_4);

 if (VAR_2) {
  u8 *VAR_5 = ((void*)0);
  size_t VAR_6 = 0;
  int VAR_7;

  if (VAR_5 == ((void*)0)) {
   FUNC_2(VAR_0, "TLSv1: Failed to read '%s'",
       VAR_2);
   return -1;
  }

  VAR_7 = FUNC_1(VAR_1, VAR_5, VAR_6);
  FUNC_0(VAR_5);
  return VAR_7;
 }

 return 0;
}
