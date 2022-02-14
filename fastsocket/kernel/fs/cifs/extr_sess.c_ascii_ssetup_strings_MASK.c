
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nls_table {int dummy; } ;
struct cifs_ses {int * domainName; int * user_name; } ;
struct TYPE_2__ {char* release; } ;


 char* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(char **VAR_2, struct cifs_ses *VAR_3,
     const struct nls_table *VAR_4)
{
 char *VAR_5 = *VAR_2;




 if (VAR_3->user_name != ((void*)0))
  FUNC_3(VAR_5, VAR_3->user_name, VAR_1);


 VAR_5 += FUNC_4(VAR_3->user_name, VAR_1);
 *VAR_5 = 0;
 VAR_5++;



 if (VAR_3->domainName != ((void*)0)) {
  FUNC_3(VAR_5, VAR_3->domainName, 256);
  VAR_5 += FUNC_4(VAR_3->domainName, 256);
 }

 *VAR_5 = 0;
 VAR_5++;



 FUNC_1(VAR_5, "Linux version ");
 VAR_5 += FUNC_2("Linux version ");
 FUNC_1(VAR_5, FUNC_0()->release);
 VAR_5 += FUNC_2(FUNC_0()->release) + 1;

 FUNC_1(VAR_5, VAR_0);
 VAR_5 += FUNC_2(VAR_0) + 1;

 *VAR_2 = VAR_5;
}
