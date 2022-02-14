
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct nls_table {int dummy; } ;
struct cifs_ses {int serverOS; int serverNOS; int serverDomain; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int,char*,int) ;
 void* FUNC_2 (char*,int,int,struct nls_table const*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(char **VAR_0, int VAR_1, struct cifs_ses *VAR_2,
        const struct nls_table *VAR_3)
{
 int VAR_4;
 char *VAR_5 = *VAR_0;

 FUNC_1(1, "bleft %d", VAR_1);

 FUNC_3(VAR_2->serverOS);
 VAR_2->serverOS = FUNC_2(VAR_5, VAR_1, 1, VAR_3);
 FUNC_1(1, "serverOS=%s", VAR_2->serverOS);
 VAR_4 = (FUNC_0((wchar_t *) VAR_5, VAR_1 / 2) * 2) + 2;
 VAR_5 += VAR_4;
 VAR_1 -= VAR_4;
 if (VAR_1 <= 0)
  return;

 FUNC_3(VAR_2->serverNOS);
 VAR_2->serverNOS = FUNC_2(VAR_5, VAR_1, 1, VAR_3);
 FUNC_1(1, "serverNOS=%s", VAR_2->serverNOS);
 VAR_4 = (FUNC_0((wchar_t *) VAR_5, VAR_1 / 2) * 2) + 2;
 VAR_5 += VAR_4;
 VAR_1 -= VAR_4;
 if (VAR_1 <= 0)
  return;

 FUNC_3(VAR_2->serverDomain);
 VAR_2->serverDomain = FUNC_2(VAR_5, VAR_1, 1, VAR_3);
 FUNC_1(1, "serverDomain=%s", VAR_2->serverDomain);

 return;
}
