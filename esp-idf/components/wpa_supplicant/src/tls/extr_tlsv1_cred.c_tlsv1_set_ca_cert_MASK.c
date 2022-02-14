
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_credentials {int trusted_certs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*,int const*,size_t) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct tlsv1_credentials *VAR_1, const char *VAR_2,
        const u8 *VAR_3, size_t VAR_4,
        const char *VAR_5)
{
 if (FUNC_0(&VAR_1->trusted_certs, VAR_2,
     VAR_3, VAR_4) < 0)
  return -1;

 if (VAR_5) {

  FUNC_1(VAR_0, "TLSv1: Use of CA certificate directory "
      "not yet supported");
  return -1;
 }

 return 0;
}
