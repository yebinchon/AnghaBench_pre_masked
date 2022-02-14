
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct qt1010_priv {int dummy; } ;
struct TYPE_3__ {scalar_t__ member_0; size_t member_1; size_t member_2; scalar_t__ oper; int reg; int val; } ;
typedef TYPE_1__ qt1010_i2c_oper_t ;


 size_t FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,size_t,size_t,size_t) ;
 int FUNC_2 (struct qt1010_priv*,size_t,size_t*) ;
 int FUNC_3 (struct qt1010_priv*,int,int) ;

__attribute__((used)) static int FUNC_4(struct qt1010_priv *VAR_2,
        u8 VAR_3, u8 VAR_4, u8 VAR_5, u8 *VAR_6)
{
 u8 VAR_7, VAR_8, VAR_9;
 int VAR_10;

 qt1010_i2c_oper_t VAR_11[] = {
  { VAR_1, VAR_4, VAR_5 },
  { VAR_1, 0x1e, 0x00 },
  { VAR_1, 0x1e, VAR_3 },
  { VAR_0, VAR_4, 0xff }
 };

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_11); VAR_7++) {
  if (VAR_11[VAR_7].oper == VAR_1) {
   VAR_10 = FUNC_3(VAR_2, VAR_11[VAR_7].reg,
           VAR_11[VAR_7].val);
  } else {
   VAR_10 = FUNC_2(VAR_2, VAR_11[VAR_7].reg, &VAR_9);
  }
  if (VAR_10) return VAR_10;
 }

 do {
  VAR_8 = VAR_9;
  VAR_10 = FUNC_2(VAR_2, VAR_4, &VAR_9);
  if (VAR_10) return VAR_10;
  FUNC_1("compare reg:%02x %02x %02x", VAR_4, VAR_8, VAR_9);
 } while (VAR_8 != VAR_9);
 *VAR_6 = VAR_8;

 return FUNC_3(VAR_2, 0x1e, 0x00);
}
