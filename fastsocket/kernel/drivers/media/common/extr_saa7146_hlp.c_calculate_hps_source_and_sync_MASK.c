
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct saa7146_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct saa7146_dev *VAR_3, int VAR_4, int VAR_5, u32* VAR_6)
{
 *VAR_6 &= ~(VAR_1 | VAR_2 | VAR_0);
 *VAR_6 |= (VAR_4 << 30) | (VAR_5 << 28);
}
