
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netsocket {int conn; } ;
typedef int s32 ;
typedef scalar_t__ err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 struct netsocket* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;

s32 FUNC_3(s32 VAR_3,u32 VAR_4)
{
 struct netsocket *VAR_5;
 err_t VAR_6;

 FUNC_0(VAR_2, ("net_listen(%d, backlog=%d)\n", VAR_3, VAR_4));
 VAR_5 = FUNC_1(VAR_3);
 if(!VAR_5) return -VAR_0;

 VAR_6 = FUNC_2(VAR_5->conn);
 if(VAR_6!=VAR_1) {
     FUNC_0(VAR_2, ("net_listen(%d) failed, err=%d\n", VAR_3, VAR_6));
  return -1;
 }
 return 0;
}
