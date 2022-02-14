
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netsocket {int * conn; scalar_t__ lastoffset; int * lastdata; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 struct netsocket* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;

s32 FUNC_6(s32 VAR_3)
{
 struct netsocket *VAR_4;

 FUNC_0(VAR_1, ("net_close(%d)\n", VAR_3));

 FUNC_2(VAR_2);

 VAR_4 = FUNC_3(VAR_3);
 if(!VAR_4) {
  FUNC_1(VAR_2);
  return -VAR_0;
 }

 FUNC_5(VAR_4->conn);
 if(VAR_4->lastdata) FUNC_4(VAR_4->lastdata);

 VAR_4->lastdata = ((void*)0);
 VAR_4->lastoffset = 0;
 VAR_4->conn = ((void*)0);

 FUNC_1(VAR_2);
 return 0;
}
