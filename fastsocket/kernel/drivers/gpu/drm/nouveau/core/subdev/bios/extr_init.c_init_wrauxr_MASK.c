
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvbios_init {int dummy; } ;
struct nouveau_i2c_port {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nvbios_init*) ;
 struct nouveau_i2c_port* FUNC_1 (struct nvbios_init*,int) ;
 int FUNC_2 (struct nouveau_i2c_port*,int ,int *,int) ;

__attribute__((used)) static int
FUNC_3(struct nvbios_init *VAR_1, u32 VAR_2, u8 VAR_3)
{
 struct nouveau_i2c_port *VAR_4 = FUNC_1(VAR_1, -2);
 if (VAR_4 && FUNC_0(VAR_1))
  return FUNC_2(VAR_4, VAR_2, &VAR_3, 1);
 return -VAR_0;
}
