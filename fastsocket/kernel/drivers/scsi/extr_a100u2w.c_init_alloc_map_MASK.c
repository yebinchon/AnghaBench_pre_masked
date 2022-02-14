
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct orc_host {int** allocation_map; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct orc_host * VAR_1)
{
 u8 VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
   VAR_1->allocation_map[VAR_2][VAR_3] = 0xffffffff;
  }
 }
}
