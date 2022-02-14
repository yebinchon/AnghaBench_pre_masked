
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {int dummy; } ;
struct cifs_ses {int * domainName; } ;
typedef int __le16 ;


 int FUNC_0 (int *,int *,int,struct nls_table const*) ;

__attribute__((used)) static void FUNC_1(char **VAR_0, struct cifs_ses *VAR_1,
       const struct nls_table *VAR_2)
{
 char *VAR_3 = *VAR_0;
 int VAR_4 = 0;


 if (VAR_1->domainName == ((void*)0)) {


  *VAR_3 = 0;
  *(VAR_3+1) = 0;
  VAR_4 = 0;
 } else
  VAR_4 = FUNC_0((__le16 *) VAR_3, VAR_1->domainName,
       256, VAR_2);
 VAR_3 += 2 * VAR_4;
 VAR_3 += 2;

 *VAR_0 = VAR_3;
}
