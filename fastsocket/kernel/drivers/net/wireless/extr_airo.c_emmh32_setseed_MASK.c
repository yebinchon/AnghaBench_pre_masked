
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct crypto_cipher {int dummy; } ;
struct TYPE_3__ {int * coeff; } ;
typedef TYPE_1__ emmh32_context ;
typedef int __be32 ;


 int FUNC_0 (int *) ;
 scalar_t__* VAR_0 ;
 int FUNC_1 (struct crypto_cipher*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (struct crypto_cipher*,scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(emmh32_context *VAR_1, u8 *VAR_2, int VAR_3,
      struct crypto_cipher *VAR_4)
{



 int VAR_5,VAR_6;
 u32 VAR_7;
 u8 *VAR_8, VAR_9[16];

 FUNC_2(VAR_4, VAR_2, 16);
 VAR_7 = 0;
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1->coeff); ) {
  VAR_0[15] = (u8)(VAR_7 >> 0);
  VAR_0[14] = (u8)(VAR_7 >> 8);
  VAR_0[13] = (u8)(VAR_7 >> 16);
  VAR_0[12] = (u8)(VAR_7 >> 24);
  VAR_7++;
  FUNC_3 (VAR_9, VAR_0, 16);
  FUNC_1(VAR_4, VAR_9, VAR_9);
  VAR_8 = VAR_9;
  for (VAR_6 = 0; (VAR_6 < 16) && (VAR_5 < FUNC_0(VAR_1->coeff)); ) {
   VAR_1->coeff[VAR_5++] = FUNC_4(*(__be32 *)&VAR_8[VAR_6]);
   VAR_6 += 4;
  }
 }
}
