
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;


 unsigned char VAR_0 ;
 int FUNC_0 (unsigned int,unsigned char) ;
 int FUNC_1 (int ,unsigned char) ;
 int FUNC_2 (int ,unsigned char) ;
 unsigned char VAR_1 ;
 int FUNC_3 (unsigned int,unsigned char,int ) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_2, unsigned char VAR_3,
  unsigned char VAR_4, unsigned char VAR_5)
{
 __u8 VAR_6, VAR_7;

 if (VAR_4 > 7) {
  return -1;
 }
 if ((VAR_3 < VAR_1) || (VAR_3 > VAR_0))
  return -1;
 VAR_6 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5 == 0)
  VAR_7 = FUNC_1(VAR_6, VAR_4);
 else {
  if (VAR_5 == 1)
   VAR_7 = FUNC_2(VAR_6, VAR_4);
  else
   return -1;
 }
 FUNC_3(VAR_2, VAR_3, VAR_7);
 return 0;
}
