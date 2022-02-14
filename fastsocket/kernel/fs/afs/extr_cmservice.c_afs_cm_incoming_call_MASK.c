
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct afs_call {int * type; int operation_ID; } ;







 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;

bool FUNC_2(struct afs_call *VAR_5)
{
 u32 VAR_6 = FUNC_1(VAR_5->operation_ID);

 FUNC_0("{CB.OP %u}", VAR_6);

 switch (VAR_6) {
 case 132:
  VAR_5->type = &VAR_0;
  return 1;
 case 131:
  VAR_5->type = &VAR_1;
  return 1;
 case 130:
  VAR_5->type = &VAR_2;
  return 1;
 case 129:
  VAR_5->type = &VAR_3;
  return 1;
 case 128:
  VAR_5->type = &VAR_4;
  return 1;
 default:
  return 0;
 }
}
