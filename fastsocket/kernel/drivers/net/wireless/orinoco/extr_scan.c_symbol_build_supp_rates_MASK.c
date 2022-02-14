
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int const) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_1, const __le16 *VAR_2)
{
 int VAR_3;
 u8 VAR_4;

 VAR_1[0] = VAR_0;
 for (VAR_3 = 0; VAR_3 < 5; VAR_3++) {
  VAR_4 = FUNC_0(VAR_2[VAR_3]);

  if (VAR_4 == 0x0)
   break;
  VAR_1[VAR_3 + 2] = VAR_4;
 }
 VAR_1[1] = VAR_3;

 return VAR_3 + 2;
}
