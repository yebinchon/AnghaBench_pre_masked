
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (struct ncp_server*) ;
 int FUNC_2 (struct ncp_server*,int) ;
 int FUNC_3 (struct ncp_server*,char const*,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(struct ncp_server *VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_4(VAR_1);
 FUNC_1(VAR_0);
 if (VAR_2 > 255) {
  FUNC_0("ncpfs: string too long: %s\n", VAR_1);
  VAR_2 = 255;
 }
 FUNC_2(VAR_0, VAR_2);
 FUNC_3(VAR_0, VAR_1, VAR_2);
 return;
}
