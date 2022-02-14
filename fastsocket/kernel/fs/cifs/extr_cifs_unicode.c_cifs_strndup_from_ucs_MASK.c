
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,int,int const,struct nls_table const*,int) ;
 int FUNC_1 (int *,int const,struct nls_table const*) ;
 char* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct nls_table const*) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char const*,int const) ;

char *
FUNC_6(const char *VAR_1, const int VAR_2, const bool VAR_3,
      const struct nls_table *VAR_4)
{
 int VAR_5;
 char *VAR_6;

 if (VAR_3) {
  VAR_5 = FUNC_1((__le16 *) VAR_1, VAR_2, VAR_4);
  VAR_5 += FUNC_3(VAR_4);
  VAR_6 = FUNC_2(VAR_5, VAR_0);
  if (!VAR_6)
   return ((void*)0);
  FUNC_0(VAR_6, (__le16 *) VAR_1, VAR_5, VAR_2, VAR_4,
          0);
 } else {
  VAR_5 = FUNC_5(VAR_1, VAR_2);
  VAR_5++;
  VAR_6 = FUNC_2(VAR_5, VAR_0);
  if (!VAR_6)
   return ((void*)0);
  FUNC_4(VAR_6, VAR_1, VAR_5);
 }

 return VAR_6;
}
