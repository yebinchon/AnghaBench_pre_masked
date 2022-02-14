
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct qt1010_priv {int dummy; } ;
struct TYPE_3__ {scalar_t__ member_0; int member_1; size_t member_2; scalar_t__ oper; int reg; int val; } ;
typedef TYPE_1__ qt1010_i2c_oper_t ;


 size_t FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct qt1010_priv*,int ,size_t*) ;
 int FUNC_2 (struct qt1010_priv*,int ,int ) ;

__attribute__((used)) static u8 FUNC_3(struct qt1010_priv *VAR_2,
       u8 VAR_3, u8 *VAR_4)
{
 u8 VAR_5, VAR_6;
 int VAR_7;
 qt1010_i2c_oper_t VAR_8[] = {
  { VAR_1, 0x07, VAR_3 },
  { VAR_1, 0x22, 0xd0 },
  { VAR_1, 0x1e, 0x00 },
  { VAR_1, 0x1e, 0xd0 },
  { VAR_0, 0x22, 0xff },
  { VAR_1, 0x1e, 0x00 },
  { VAR_1, 0x22, 0xff }
 };
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_8); VAR_5++) {
  if (VAR_8[VAR_5].oper == VAR_1) {
   VAR_7 = FUNC_2(VAR_2, VAR_8[VAR_5].reg,
           VAR_8[VAR_5].val);
  } else {
   VAR_7 = FUNC_1(VAR_2, VAR_8[VAR_5].reg, &VAR_6);
  }
  if (VAR_7) return VAR_7;
 }
 *VAR_4 = VAR_6;
 return 0;
}
