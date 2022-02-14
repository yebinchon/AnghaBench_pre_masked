
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {int dummy; } ;
typedef int __u32 ;
typedef int __u16 ;


 int FUNC_0 (struct ncp_server*,int) ;
 int FUNC_1 (struct ncp_server*,int ) ;
 int FUNC_2 (struct ncp_server*,int ) ;
 int FUNC_3 (struct ncp_server*,char const*,int) ;
 int FUNC_4 (struct ncp_server*) ;
 int FUNC_5 (struct ncp_server*,int) ;
 int FUNC_6 (struct ncp_server*) ;

int
FUNC_7(struct ncp_server *VAR_0, const char *VAR_1,
   __u32 VAR_2, __u16 VAR_3,
   const char *VAR_4, int *VAR_5)
{
 int VAR_6;

 FUNC_4(VAR_0);
 FUNC_2(VAR_0, 0);
 FUNC_3(VAR_0, VAR_1, 6);
 FUNC_1(VAR_0, VAR_2);
 FUNC_0(VAR_0, VAR_3);
 FUNC_3(VAR_0, VAR_4, VAR_3);

 if ((VAR_6 = FUNC_5(VAR_0, 73)) == 0)
  *VAR_5 = VAR_3;
 FUNC_6(VAR_0);
 return VAR_6;
}
