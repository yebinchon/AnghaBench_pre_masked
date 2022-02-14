
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char unchar ;


 unsigned long FUNC_0 (unsigned long) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (unsigned char,scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned long,int) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_6, unsigned long VAR_7, unchar VAR_8)
{
 unsigned char *VAR_9;
 unsigned long VAR_10;

 if (FUNC_2(VAR_6, (VAR_7 ? VAR_0 * 100 : VAR_0)))
  return 1;

 if (VAR_7) {
  VAR_10 = FUNC_0(VAR_7);
  VAR_9 = (unsigned char *)&VAR_10;
  FUNC_1(VAR_9[3], VAR_6 + VAR_3);
  FUNC_1(VAR_9[2], VAR_6 + VAR_2);
  FUNC_1(VAR_9[1], VAR_6 + VAR_4);
  FUNC_1(VAR_9[0], VAR_6 + VAR_5);
 }

 FUNC_1(VAR_8, VAR_6 + VAR_1);
 return 0;
}
