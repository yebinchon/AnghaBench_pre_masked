
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tda10023_state {int reg0; } ;


 int FUNC_0 (struct tda10023_state*,int,int) ;

__attribute__((used)) static int FUNC_1 (struct tda10023_state* VAR_0, u8 VAR_1)
{
 VAR_1 |= VAR_0->reg0 & 0x63;

 FUNC_0 (VAR_0, 0x00, VAR_1 & 0xfe);
 FUNC_0 (VAR_0, 0x00, VAR_1 | 0x01);

 VAR_0->reg0 = VAR_1;
 return 0;
}
