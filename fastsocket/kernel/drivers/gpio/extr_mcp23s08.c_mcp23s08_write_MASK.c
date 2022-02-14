
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct mcp23s08 {unsigned int addr; int spi; } ;


 int FUNC_0 (int ,unsigned int*,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct mcp23s08 *VAR_0, unsigned VAR_1, u8 VAR_2)
{
 u8 VAR_3[3];

 VAR_3[0] = VAR_0->addr;
 VAR_3[1] = VAR_1;
 VAR_3[2] = VAR_2;
 return FUNC_0(VAR_0->spi, VAR_3, sizeof VAR_3, ((void*)0), 0);
}
