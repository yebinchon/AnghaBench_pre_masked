
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;
struct saa7146 {int dummy; } ;


 int FUNC_0 (struct saa7146*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct saa7146 *VAR_5, unsigned char VAR_6, unsigned char VAR_7,
      unsigned char VAR_8, int VAR_9)
{
 int VAR_10;
 u32 VAR_11;

 if (FUNC_1(VAR_1) & 0x3c)
  FUNC_0(VAR_5);
 for (VAR_10 = 0; VAR_10 < 1000 &&
      (FUNC_1(VAR_1) & VAR_0); VAR_10++)
  FUNC_3();
 if (VAR_10 == 1000)
  FUNC_0(VAR_5);
 VAR_11 = ((VAR_6 & 0xfe) << 24) | ((VAR_7 & 0xff) << 16);
 if (VAR_9)
  VAR_11 |= ((VAR_8 & 0xff) << 8) | 0xe5;
 else
  VAR_11 |= 0xd1;
 FUNC_2(VAR_11, VAR_2);
 FUNC_2((VAR_4 << 16) | VAR_4,
   VAR_3);
 return 0;
}
