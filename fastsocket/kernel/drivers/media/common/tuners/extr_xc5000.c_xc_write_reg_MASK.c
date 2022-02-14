
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct xc5000_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xc5000_priv*,int ,int*) ;
 int FUNC_1 (struct xc5000_priv*,int*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct xc5000_priv *VAR_3, u16 VAR_4, u16 VAR_5)
{
 u8 VAR_6[4];
 int VAR_7 = 100;
 int VAR_8;

 VAR_6[0] = (VAR_4 >> 8) & 0xFF;
 VAR_6[1] = VAR_4 & 0xFF;
 VAR_6[2] = (VAR_5 >> 8) & 0xFF;
 VAR_6[3] = VAR_5 & 0xFF;
 VAR_8 = FUNC_1(VAR_3, VAR_6, 4);
 if (VAR_8 == VAR_1) {

  while ((VAR_7 > 0) && (VAR_8 == VAR_1)) {
   VAR_8 = FUNC_0(VAR_3, VAR_2, (u16 *)VAR_6);
   if (VAR_8 == VAR_1) {
    if ((VAR_6[0] == 0) && (VAR_6[1] == 0)) {

     break;
    } else {
     FUNC_2(5);
     VAR_7--;
    }
   }
  }
 }
 if (VAR_7 < 0)
  VAR_8 = VAR_0;

 return VAR_8;
}
