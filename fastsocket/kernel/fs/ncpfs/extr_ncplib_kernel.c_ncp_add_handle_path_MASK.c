
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {int dummy; } ;
typedef int __u8 ;
typedef int __le32 ;


 int FUNC_0 (struct ncp_server*,int) ;
 int FUNC_1 (struct ncp_server*,int ) ;
 int FUNC_2 (struct ncp_server*,char const*) ;

__attribute__((used)) static void FUNC_3(struct ncp_server *VAR_0, __u8 VAR_1,
    __le32 VAR_2, int VAR_3,
    const char *VAR_4)
{
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_2);
 if (VAR_3 != 0) {
  FUNC_0(VAR_0, 1);
 } else {
  FUNC_0(VAR_0, 0xff);
 }
 if (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_0, 1);
  FUNC_2(VAR_0, VAR_4);
 } else {
  FUNC_0(VAR_0, 0);
 }
}
