
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct mcp23s08 {unsigned int* cache; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct mcp23s08*,size_t,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct mcp23s08 *VAR_1, unsigned VAR_2, int VAR_3)
{
 u8 VAR_4 = VAR_1->cache[VAR_0];

 if (VAR_3)
  VAR_4 |= VAR_2;
 else
  VAR_4 &= ~VAR_2;
 VAR_1->cache[VAR_0] = VAR_4;
 return FUNC_0(VAR_1, VAR_0, VAR_4);
}
