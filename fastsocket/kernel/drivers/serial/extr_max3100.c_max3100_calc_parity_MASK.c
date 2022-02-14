
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct max3100_port {int parity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct max3100_port*,int) ;

__attribute__((used)) static void FUNC_1(struct max3100_port *VAR_2, u16 *VAR_3)
{
 if (VAR_2->parity & VAR_0)
  *VAR_3 &= 0x7f;
 else
  *VAR_3 &= 0xff;

 if (VAR_2->parity & VAR_1)
  *VAR_3 |= FUNC_0(VAR_2, *VAR_3) << 8;
}
