
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct max3100_port {int parity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct max3100_port *VAR_2, u16 VAR_3)
{
 int VAR_4;

 if (VAR_2->parity & VAR_1)
  VAR_4 = 1;
 else
  VAR_4 = 0;

 if (VAR_2->parity & VAR_0)
  VAR_3 &= 0x7f;
 else
  VAR_3 &= 0xff;

 VAR_4 = VAR_4 ^ (FUNC_0(VAR_3) & 1);
 return VAR_4;
}
