
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cmac {unsigned int offset; int adapter; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,unsigned int,int ) ;

void FUNC_2(struct cmac *VAR_2)
{
 unsigned int VAR_3, VAR_4 = VAR_2->offset + VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++, VAR_4 += 8) {
  u32 VAR_5 = FUNC_0(VAR_2->adapter, VAR_4);
  FUNC_1(VAR_2->adapter, VAR_4, VAR_5);
 }
 FUNC_0(VAR_2->adapter, VAR_0);
}
