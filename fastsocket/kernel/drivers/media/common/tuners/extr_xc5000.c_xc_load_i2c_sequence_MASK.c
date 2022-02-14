
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xc5000_priv {int dummy; } ;
struct dvb_frontend {struct xc5000_priv* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct xc5000_priv*,int*,int) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_2, const u8 *VAR_3)
{
 struct xc5000_priv *VAR_4 = VAR_2->tuner_priv;

 int VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;
 u8 VAR_11[VAR_0];

 VAR_10 = 0;
 while ((VAR_3[VAR_10] != 0xFF) ||
  (VAR_3[VAR_10 + 1] != 0xFF)) {
  VAR_8 = VAR_3[VAR_10] * 256 + VAR_3[VAR_10+1];
  if (VAR_8 == 0x0000) {

   VAR_7 = FUNC_0(VAR_2);
   VAR_10 += 2;
   if (VAR_7 != VAR_1)
    return VAR_7;
  } else if (VAR_8 & 0x8000) {

   FUNC_2(VAR_8 & 0x7FFF);
   VAR_10 += 2;
  } else {



   VAR_10 += 2;
   VAR_11[0] = VAR_3[VAR_10];
   VAR_11[1] = VAR_3[VAR_10 + 1];
   VAR_9 = 2;
   while (VAR_9 < VAR_8) {
    if ((VAR_8 - VAR_9) > VAR_0 - 2)
     VAR_6 =
      VAR_0;
    else
     VAR_6 = (VAR_8 - VAR_9 + 2);
    for (VAR_5 = 2; VAR_5 < VAR_6; VAR_5++) {
     VAR_11[VAR_5] = VAR_3[VAR_10 + VAR_9 +
      VAR_5 - 2];
    }
    VAR_7 = FUNC_1(VAR_4, VAR_11,
     VAR_6);

    if (VAR_7 != VAR_1)
     return VAR_7;

    VAR_9 += VAR_6 - 2;
   }
   VAR_10 += VAR_8;
  }
 }
 return VAR_1;
}
