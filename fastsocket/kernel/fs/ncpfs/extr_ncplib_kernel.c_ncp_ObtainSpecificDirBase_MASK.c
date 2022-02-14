
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {int dummy; } ;
typedef int __u8 ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ncp_server*,int) ;
 int FUNC_2 (struct ncp_server*,int ) ;
 int FUNC_3 (struct ncp_server*,int,int ,int,char*) ;
 int FUNC_4 (struct ncp_server*,int ) ;
 int FUNC_5 (struct ncp_server*) ;
 int FUNC_6 (struct ncp_server*,int) ;
 int FUNC_7 (struct ncp_server*,int) ;
 int FUNC_8 (struct ncp_server*) ;

__attribute__((used)) static int
FUNC_9(struct ncp_server *VAR_1,
  __u8 VAR_2, __u8 VAR_3, __u8 VAR_4, __le32 VAR_5,
  char *VAR_6,
  __le32 *VAR_7, __le32 *VAR_8)
{
 int VAR_9;

 FUNC_5(VAR_1);
 FUNC_1(VAR_1, 6);
 FUNC_1(VAR_1, VAR_2);
 FUNC_1(VAR_1, VAR_3);
 FUNC_4(VAR_1, FUNC_0(0x8006));
 FUNC_2(VAR_1, VAR_0);
 FUNC_3(VAR_1, VAR_4, VAR_5, 1, VAR_6);

 if ((VAR_9 = FUNC_7(VAR_1, 87)) != 0)
 {
  FUNC_8(VAR_1);
  return VAR_9;
 }

 if (VAR_7)
  *VAR_7 = FUNC_6(VAR_1, 0x30);
 if (VAR_8)
  *VAR_8 = FUNC_6(VAR_1, 0x34);
 FUNC_8(VAR_1);
 return 0;
}
