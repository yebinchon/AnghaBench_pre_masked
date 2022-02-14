
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct budget_patch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct budget_patch*,int*,int) ;
 int FUNC_1 (int,char*,struct budget_patch*) ;

__attribute__((used)) static int FUNC_2(struct budget_patch *VAR_2, int VAR_3, u8 *VAR_4, int VAR_5)
{
 int VAR_6;
 u16 VAR_7[18] = { ((VAR_0 << 8) | VAR_1),
  16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

 FUNC_1(2, "budget: %p\n", VAR_2);

 if (VAR_3>10)
  VAR_3=10;

 VAR_7[1] = VAR_3+2;
 VAR_7[2] = VAR_3;

 if (VAR_5 != -1)
  VAR_7[3]=VAR_5 ? 0x01 : 0x00;
 else
  VAR_7[3]=0xffff;

 for (VAR_6=0; VAR_6<VAR_3; VAR_6++)
  VAR_7[VAR_6+4]=VAR_4[VAR_6];

 FUNC_0(VAR_2, VAR_7, 18);
 return 0;
}
