
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct ssb_device {struct ssb_bus* bus; } ;
struct ssb_bus {scalar_t__ mmio; struct ssb_device* mapped_device; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ssb_bus*) ;
 int FUNC_2 (struct ssb_bus*,struct ssb_device*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static u8 FUNC_4(struct ssb_device *VAR_0, u16 VAR_1)
{
 struct ssb_bus *VAR_2 = VAR_0->bus;

 if (FUNC_3(FUNC_1(VAR_2)))
  return 0xFF;
 if (FUNC_3(VAR_2->mapped_device != VAR_0)) {
  if (FUNC_3(FUNC_2(VAR_2, VAR_0)))
   return 0xFF;
 }
 return FUNC_0(VAR_2->mmio + VAR_1);
}
