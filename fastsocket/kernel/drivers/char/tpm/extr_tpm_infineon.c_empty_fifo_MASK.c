
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct tpm_chip *VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 if (VAR_7) {
  for (VAR_10 = 0; VAR_10 < 4096; VAR_10++) {
   VAR_8 = FUNC_0(VAR_5);
   if (VAR_8 == 0xff) {
    if (VAR_9 == 5)
     break;
    else
     VAR_9++;
   }
  }
 }
 VAR_10 = 0;
 do {
  VAR_8 = FUNC_0(VAR_1);
  VAR_8 = FUNC_0(VAR_2);
  VAR_10++;
  if (VAR_10 == VAR_4)
   return -VAR_0;
 } while ((VAR_8 & (1 << VAR_3)) != 0);
 return 0;
}
