
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MGSLPC_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,unsigned char) ;
 int FUNC_1 (int *,unsigned char,unsigned char) ;

__attribute__((used)) static void FUNC_2(MGSLPC_INFO *VAR_2, unsigned char VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6;
 unsigned char VAR_7;





 if (VAR_4) {
  VAR_6 = 3686400 / VAR_4;
  if (!VAR_6)
   VAR_6 = 1;
  VAR_6 >>= 1;
  for (VAR_5 = 1; VAR_6 > 64 && VAR_5 < 16; VAR_5++)
   VAR_6 >>= 1;
  VAR_6--;
  FUNC_1(VAR_2, (unsigned char) (VAR_3 + VAR_0),
      (unsigned char) ((VAR_5 << 6) + VAR_6));
  VAR_7 = FUNC_0(VAR_2, (unsigned char) (VAR_3 + VAR_1)) & 0x3f;
  VAR_7 |= ((VAR_5 << 4) & 0xc0);
  FUNC_1(VAR_2, (unsigned char) (VAR_3 + VAR_1), VAR_7);
 }
}
