
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ene_device {scalar_t__ hw_io; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct ene_device*,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static u8 FUNC_3(struct ene_device *VAR_1, u16 VAR_2)
{
 u8 VAR_3;
 FUNC_1(VAR_1, VAR_2);
 VAR_3 = FUNC_2(VAR_1->hw_io + VAR_0);
 FUNC_0("reg %04x == %02x", VAR_2, VAR_3);
 return VAR_3;
}
