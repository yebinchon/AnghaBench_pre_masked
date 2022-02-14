
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mt312_state {int xtal; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct mt312_state*,int ,int*,int) ;
 int FUNC_3 (struct mt312_state*,int ,int*) ;
 int FUNC_4 (struct mt312_state*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct mt312_state *VAR_4, u32 *VAR_5)
{
 int VAR_6;
 u8 VAR_7;
 u8 VAR_8;
 u16 VAR_9;
 u16 VAR_10;
 u8 VAR_11[2];

 VAR_6 = FUNC_3(VAR_4, VAR_2, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_7 & 0x80) {

  VAR_6 = FUNC_4(VAR_4, VAR_1, 0x03);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_6 = FUNC_2(VAR_4, VAR_0, VAR_11, sizeof(VAR_11));
  if (VAR_6 < 0)
   return VAR_6;

  VAR_10 = (VAR_11[0] << 8) | VAR_11[1];

  FUNC_0("sr(auto) = %u\n",
         FUNC_1(VAR_10 * 15625, 4));
 } else {
  VAR_6 = FUNC_4(VAR_4, VAR_1, 0x05);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_6 = FUNC_2(VAR_4, VAR_0, VAR_11, sizeof(VAR_11));
  if (VAR_6 < 0)
   return VAR_6;

  VAR_8 = ((VAR_11[0] >> 5) & 0x07) * 32;

  VAR_6 = FUNC_2(VAR_4, VAR_3, VAR_11, sizeof(VAR_11));
  if (VAR_6 < 0)
   return VAR_6;

  VAR_9 = (VAR_11[0] << 8) | VAR_11[1];

  FUNC_0("sym_rat_op=%d dec_ratio=%d\n",
         VAR_9, VAR_8);
  FUNC_0("*sr(manual) = %lu\n",
         (((VAR_4->xtal * 8192) / (VAR_9 + 8192)) *
   2) - VAR_8);
 }

 return 0;
}
