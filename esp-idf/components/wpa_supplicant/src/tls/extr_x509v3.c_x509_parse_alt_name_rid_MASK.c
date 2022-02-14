
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct x509_name {int rid; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int const*,size_t,int *) ;
 int FUNC_2 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct x509_name *VAR_1,
       const u8 *VAR_2, size_t VAR_3)
{
 char VAR_4[80];


 if (FUNC_1(VAR_2, VAR_3, &VAR_1->rid) < 0)
  return -1;

 FUNC_0(&VAR_1->rid, VAR_4, sizeof(VAR_4));
 FUNC_2(VAR_0, "X509: altName - registeredID: %s", VAR_4);

 return 0;
}
