
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dev_mc_list {scalar_t__ dmi_addr; struct dev_mc_list* next; } ;
struct DEVICE {int base_addr; struct dev_mc_list* mc_list; scalar_t__ dev_addr; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct DEVICE *VAR_0, int VAR_1)
{
 struct dev_mc_list *VAR_2;
 u16 * VAR_3;
 unsigned long VAR_4 = VAR_0->base_addr+0xc0;
 u32 VAR_5;
 u16 VAR_6, VAR_7[4];

 FUNC_0(0, "dm9132_id_table()", 0);


 VAR_3 = (u16 *) VAR_0->dev_addr;
 FUNC_2(VAR_3[0], VAR_4);
 VAR_4 += 4;
 FUNC_2(VAR_3[1], VAR_4);
 VAR_4 += 4;
 FUNC_2(VAR_3[2], VAR_4);
 VAR_4 += 4;


 for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
  VAR_7[VAR_6] = 0x0;


 VAR_7[3] = 0x8000;


 for (VAR_2 = VAR_0->mc_list, VAR_6 = 0; VAR_6 < VAR_1; VAR_6++, VAR_2 = VAR_2->next) {
  VAR_5 = FUNC_1( (char *) VAR_2->dmi_addr, 6, 0) & 0x3f;
  VAR_7[VAR_5 / 16] |= (u16) 1 << (VAR_5 % 16);
 }


 for (VAR_6 = 0; VAR_6 < 4; VAR_6++, VAR_4 += 4)
  FUNC_2(VAR_7[VAR_6], VAR_4);
}
