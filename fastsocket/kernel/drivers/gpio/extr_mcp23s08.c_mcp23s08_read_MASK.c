
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mcp23s08 {int addr; int spi; } ;


 int FUNC_0 (int ,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_1(struct mcp23s08 *VAR_0, unsigned VAR_1)
{
 u8 VAR_2[2], VAR_3[1];
 int VAR_4;

 VAR_2[0] = VAR_0->addr | 0x01;
 VAR_2[1] = VAR_1;
 VAR_4 = FUNC_0(VAR_0->spi, VAR_2, sizeof VAR_2, VAR_3, sizeof VAR_3);
 return (VAR_4 < 0) ? VAR_4 : VAR_3[0];
}
