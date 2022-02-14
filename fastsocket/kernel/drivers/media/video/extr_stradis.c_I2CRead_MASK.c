
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146 {int dummy; } ;


 int FUNC_0 (struct saa7146*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct saa7146 *VAR_6, unsigned char VAR_7,
     unsigned char VAR_8, int VAR_9)
{
 int VAR_10;

 if (FUNC_2(VAR_2) & 0x3c)
  FUNC_0(VAR_6);
 for (VAR_10 = 0;
  VAR_10 < 1000 && (FUNC_2(VAR_2) & VAR_0);
  VAR_10++)
  FUNC_4();
 if (VAR_10 == 1000)
  FUNC_0(VAR_6);
 if (VAR_9)
  FUNC_3(((VAR_7 & 0xfe) << 24) | (((VAR_7 | 1) & 0xff) << 8) |
   ((VAR_8 & 0xff) << 16) | 0xed, VAR_3);
 else
  FUNC_3(((VAR_7 & 0xfe) << 24) | (((VAR_7 | 1) & 0xff) << 16) |
   0xf1, VAR_3);
 FUNC_3((VAR_5 << 16) |
   VAR_5, VAR_4);

 for (VAR_10 = 0; VAR_10 < 1000 &&
      !(FUNC_2(VAR_4) & VAR_5); VAR_10++)
  FUNC_4();

 for (VAR_10 = 0; VAR_10 < 1000 &&
      (FUNC_2(VAR_2) & VAR_0); VAR_10++)
  FUNC_4();
 if (FUNC_2(VAR_2) & VAR_1)
  return -1;
 if (VAR_10 == 1000)
  FUNC_1("i2c setup read timeout\n");
 FUNC_3(0x41, VAR_3);
 FUNC_3((VAR_5 << 16) |
   VAR_5, VAR_4);

 for (VAR_10 = 0; VAR_10 < 1000 &&
      !(FUNC_2(VAR_4) & VAR_5); VAR_10++)
  FUNC_4();

 for (VAR_10 = 0; VAR_10 < 1000 &&
      (FUNC_2(VAR_3) & VAR_0); VAR_10++)
  FUNC_4();
 if (FUNC_2(VAR_3) & VAR_1)
  return -1;
 if (VAR_10 == 1000)
  FUNC_1("i2c read timeout\n");
 return ((FUNC_2(VAR_3) >> 24) & 0xff);
}
