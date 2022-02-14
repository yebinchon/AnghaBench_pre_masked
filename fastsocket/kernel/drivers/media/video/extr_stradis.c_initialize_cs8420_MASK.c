
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct saa7146 {int nr; } ;


 int FUNC_0 (struct saa7146*,int,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct saa7146 *VAR_5, int VAR_6)
{
 int VAR_7;
 u8 *VAR_8;
 if (VAR_6)
  VAR_8 = VAR_4;
 else
  VAR_8 = VAR_3;
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  FUNC_0(VAR_5, 0x20, VAR_2[VAR_7 * 2], VAR_2[VAR_7 * 2 + 1], 2);
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  FUNC_0(VAR_5, 0x20, VAR_8[VAR_7 * 2], VAR_8[VAR_7 * 2 + 1], 2);
 FUNC_1("stradis%d: CS8420 initialized\n", VAR_5->nr);
}
