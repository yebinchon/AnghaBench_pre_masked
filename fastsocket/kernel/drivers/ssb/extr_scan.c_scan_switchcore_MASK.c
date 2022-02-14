
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ssb_bus {int bustype; } ;






 int FUNC_0 (struct ssb_bus*,int ) ;
 int FUNC_1 (struct ssb_bus*,int ) ;
 int FUNC_2 (struct ssb_bus*,int ) ;

__attribute__((used)) static int FUNC_3(struct ssb_bus *VAR_0, u8 VAR_1)
{
 switch (VAR_0->bustype) {
 case 128:
  break;
 case 131:
  return FUNC_0(VAR_0, VAR_1);
 case 130:
  return FUNC_1(VAR_0, VAR_1);
 case 129:
  return FUNC_2(VAR_0, VAR_1);
 }
 return 0;
}
