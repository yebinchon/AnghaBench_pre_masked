
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dip_infoframe {int type; } ;




 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_1(struct dip_infoframe *VAR_2)
{
 switch (VAR_2->type) {
 case 129:
  return VAR_0;
 case 128:
  return VAR_1;
 default:
  FUNC_0("unknown info frame type %d\n", VAR_2->type);
  return 0;
 }
}
