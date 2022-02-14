
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dip_infoframe {int type; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;




 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u32 FUNC_3(struct dip_infoframe *VAR_0, enum pipe VAR_1)
{
 switch (VAR_0->type) {
 case 129:
  return FUNC_1(VAR_1);
 case 128:
  return FUNC_2(VAR_1);
 default:
  FUNC_0("unknown info frame type %d\n", VAR_0->type);
  return 0;
 }
}
