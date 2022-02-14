
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned char* VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_14, unsigned VAR_15, int VAR_16)
{
 unsigned char VAR_17[8];
 unsigned char VAR_18;
 unsigned char VAR_19;
 int VAR_20;

 VAR_18 = ((VAR_16 & 0x01) << 3) | ((VAR_16 & 0x02) << 1)
           | ((VAR_16 & 0x04) >> 1) | ((VAR_16 & 0x08) >> 3);
 VAR_17[0] = (VAR_1 << 4) | (VAR_18 & 0xf);
 VAR_17[1] = 0x00;
 VAR_17[2] = 0x05;
 VAR_17[3] = 0;
 VAR_17[4] = 0x11;
 VAR_17[5] = VAR_13[VAR_15 & 0xf];
 VAR_17[6] = 0;
 VAR_17[7] = 0;
 FUNC_2(VAR_14, VAR_10, 0xf);
 FUNC_0(100);
 VAR_19 = FUNC_1(VAR_14, VAR_3+VAR_9);


 VAR_19 = (VAR_14 >> 4) & 0xff;
 for (VAR_20=1;VAR_20<=0xf;VAR_20++) FUNC_2(VAR_14, VAR_20, VAR_19);
 FUNC_2(VAR_14, VAR_0 & 0xf, VAR_19);
 FUNC_2(VAR_14, VAR_0 >> 4, VAR_17[0]);
 for(VAR_20=1;VAR_20<7;VAR_20++) FUNC_2(VAR_14, 0, VAR_17[VAR_20]);
 FUNC_2(VAR_14, ((VAR_14 >> 4)) & 0x3, VAR_17[7]);


 FUNC_0(100);
 FUNC_2(VAR_14, VAR_3+VAR_11, 0);
 FUNC_2(VAR_14, VAR_12+VAR_11, 0);
 FUNC_0(10);
 FUNC_2(VAR_14, VAR_3+VAR_11, 1);
 FUNC_2(VAR_14, VAR_12+VAR_11, 1);
 FUNC_0(100);
 FUNC_2(VAR_14, VAR_3+VAR_11, 0);
 FUNC_2(VAR_14, VAR_12+VAR_11, 0);
 FUNC_0(10);
 FUNC_2(VAR_14, VAR_3+VAR_2, 0);
 FUNC_0(5);
 FUNC_2(VAR_14, VAR_12+VAR_2, 0);

 if (FUNC_1(VAR_14, VAR_3+VAR_9) != 0x1)
  return 1;
 if (FUNC_1(VAR_14, VAR_3+VAR_6) != 0x0)
  return 2;
 if (FUNC_1(VAR_14, VAR_3+VAR_7) != 0x0)
  return 3;
 if ((FUNC_1(VAR_14, VAR_3+VAR_4) & 0xf0) != 0x70)
  return 4;
 if ((FUNC_1(VAR_14, VAR_3+VAR_8) & 0x0e) != 0)
  return 5;
 if ((FUNC_1(VAR_14, VAR_3+VAR_5) & 0x7d) != 1)
  return 6;
 if (FUNC_1(VAR_14, VAR_12+VAR_9) != 0x1)
  return 7;
 if ((FUNC_1(VAR_14, VAR_12+VAR_8) & 0x0e) != 0)
  return 8;
 if ((FUNC_1(VAR_14, VAR_12+VAR_5) & 0x7d) != 0)
  return 9;
        return 0;
}
