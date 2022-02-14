
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int u16 ;
struct atom_context {int data_table; int bios; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;

bool FUNC_2(struct atom_context *VAR_0, int VAR_1,
       uint16_t * VAR_2, uint8_t * VAR_3, uint8_t * VAR_4,
       uint16_t * VAR_5)
{
 int VAR_6 = VAR_1 * 2 + 4;
 int VAR_7 = FUNC_0(VAR_0->data_table + VAR_6);
 u16 *VAR_8 = (u16 *)(VAR_0->bios + VAR_0->data_table + 4);

 if (!VAR_8[VAR_1])
  return 0;

 if (VAR_2)
  *VAR_2 = FUNC_0(VAR_7);
 if (VAR_3)
  *VAR_3 = FUNC_1(VAR_7 + 2);
 if (VAR_4)
  *VAR_4 = FUNC_1(VAR_7 + 3);
 *VAR_5 = VAR_7;
 return 1;
}
