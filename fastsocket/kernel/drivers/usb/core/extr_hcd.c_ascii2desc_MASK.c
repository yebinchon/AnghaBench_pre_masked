
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static unsigned
FUNC_1(char const *VAR_1, u8 *VAR_2, unsigned VAR_3)
{
 unsigned VAR_4, VAR_5 = 2 + 2*FUNC_0(VAR_1);

 if (VAR_5 > 254)
  VAR_5 = 254;
 if (VAR_3 > VAR_5)
  VAR_3 = VAR_5;

 VAR_5 += VAR_0 << 8;

 VAR_4 = VAR_3;
 while (VAR_4--) {
  *VAR_2++ = VAR_5;
  if (!VAR_4--)
   break;
  *VAR_2++ = VAR_5 >> 8;
  VAR_5 = (unsigned char)*VAR_1++;
 }
 return VAR_3;
}
