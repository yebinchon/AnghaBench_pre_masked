
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {int dummy; } ;
struct cifs_ses {int * user_name; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,struct nls_table const*) ;
 int FUNC_1 (char**,struct cifs_ses*,struct nls_table const*) ;
 int FUNC_2 (char**,struct nls_table const*) ;

__attribute__((used)) static void FUNC_3(char **VAR_1, struct cifs_ses *VAR_2,
       const struct nls_table *VAR_3)
{
 char *VAR_4 = *VAR_1;
 int VAR_5 = 0;
 if (VAR_2->user_name == ((void*)0)) {

  *VAR_4 = 0;
  *(VAR_4+1) = 0;
 } else {
  VAR_5 = FUNC_0((__le16 *) VAR_4, VAR_2->user_name,
       VAR_0, VAR_3);
 }
 VAR_4 += 2 * VAR_5;
 VAR_4 += 2;

 FUNC_1(&VAR_4, VAR_2, VAR_3);
 FUNC_2(&VAR_4, VAR_3);

 *VAR_1 = VAR_4;
}
