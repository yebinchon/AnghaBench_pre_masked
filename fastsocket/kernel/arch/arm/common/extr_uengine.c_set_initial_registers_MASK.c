
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ixp2000_uengine_code {int uengine_parameters; struct ixp2000_reg_value* initial_reg_values; } ;
struct ixp2000_reg_value {int reg; int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int*,int*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int,int*,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int*) ;
 int* FUNC_7 (int,int ) ;
 int* FUNC_8 (int,int ) ;

__attribute__((used)) static int FUNC_9(int VAR_3, struct ixp2000_uengine_code *VAR_4)
{
 int VAR_5;
 u32 *VAR_6;
 u32 *VAR_7;
 u8 *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_8(128 * sizeof(u32), VAR_1);
 VAR_7 = FUNC_8(128 * sizeof(u32), VAR_1);
 VAR_8 = FUNC_7(513 * 5, VAR_1);
 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == ((void*)0)) {
  FUNC_6(VAR_8);
  FUNC_6(VAR_7);
  FUNC_6(VAR_6);
  return 1;
 }

 VAR_5 = 16;
 if (VAR_4->uengine_parameters & VAR_2)
  VAR_5 = 32;

 for (VAR_9 = 0; VAR_9 < 256; VAR_9++) {
  struct ixp2000_reg_value *VAR_10 = VAR_4->initial_reg_values + VAR_9;
  u32 *VAR_11;
  int VAR_12;
  int VAR_13;

  if (VAR_10->reg == -1)
   break;

  VAR_11 = (VAR_10->reg & 0x400) ? VAR_7 : VAR_6;
  VAR_12 = (VAR_10->reg & 0x80) ? 128 : VAR_5;

  VAR_13 = VAR_10->reg & 0x7f;
  while (VAR_13 < 128) {
   VAR_11[VAR_13] = VAR_10->value;
   VAR_13 += VAR_12;
  }
 }

 FUNC_0(VAR_8, VAR_6, VAR_7);
 FUNC_3(VAR_3, VAR_8, 513);
 FUNC_2(VAR_3, 0, 0);
 FUNC_4(VAR_3, 0x01);
 for (VAR_9 = 0; VAR_9 < 100; VAR_9++) {
  u32 VAR_14;

  VAR_14 = FUNC_1(VAR_3, VAR_0);
  if (!(VAR_14 & 0x80000000))
   break;
 }
 FUNC_5(VAR_3, 0x01);

 FUNC_6(VAR_8);
 FUNC_6(VAR_7);
 FUNC_6(VAR_6);

 return !!(VAR_9 == 100);
}
