
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2x*,int ) ;






__attribute__((used)) static u32 FUNC_1(struct bnx2x *VAR_3,
          u32 VAR_4, u8 VAR_5)
{
 u32 VAR_6 = 0;
 switch (VAR_4) {
 case 129:
  break;
 case 131:
  if (FUNC_0(VAR_3, VAR_2))
   VAR_6 = VAR_1;
  else
   VAR_6 = VAR_0;
  break;
 case 130:
  if (FUNC_0(VAR_3, VAR_2))
   VAR_6 = VAR_0;
  else
   VAR_6 = VAR_1;
  break;
 case 132:
  VAR_6 = (VAR_5) ? VAR_1 : VAR_0;
  break;
 case 128:
  VAR_6 = (VAR_5) ? VAR_0 : VAR_1;
  break;
 default:
  break;
 }
 return VAR_6;

}
