
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {int dummy; } ;
typedef int __u32 ;
typedef int __u16 ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct ncp_server*,int ) ;
 int FUNC_2 (struct ncp_server*,int) ;
 int FUNC_3 (struct ncp_server*,int ) ;
 int FUNC_4 (struct ncp_server*,char const*,int) ;
 int FUNC_5 (struct ncp_server*) ;
 int FUNC_6 (struct ncp_server*,int ) ;
 char* FUNC_7 (struct ncp_server*,int) ;
 int FUNC_8 (struct ncp_server*,int) ;
 int FUNC_9 (struct ncp_server*) ;

int
FUNC_10(struct ncp_server *VAR_0, const char *VAR_1,
      __u32 VAR_2, __u16 VAR_3, char *VAR_4, int *VAR_5)
{
 char *VAR_6;
 int VAR_7;

 FUNC_5(VAR_0);
 FUNC_3(VAR_0, 0);
 FUNC_4(VAR_0, VAR_1, 6);
 FUNC_2(VAR_0, VAR_2);
 FUNC_1(VAR_0, VAR_3);

 if ((VAR_7 = FUNC_8(VAR_0, 72)) != 0) {
  goto out;
 }
 *VAR_5 = FUNC_6(VAR_0, 0);
 VAR_6 = FUNC_7(VAR_0, 2 + (VAR_2 & 1));

 FUNC_0(VAR_4, VAR_6, *VAR_5);
out:
 FUNC_9(VAR_0);
 return VAR_7;
}
