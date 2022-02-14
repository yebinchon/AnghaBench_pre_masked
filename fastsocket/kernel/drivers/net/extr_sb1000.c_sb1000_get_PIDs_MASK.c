
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int const*,char const*,unsigned char const*,unsigned char*) ;
 int FUNC_1 (int const*,char const*) ;
 int FUNC_2 (int const*,char const*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(const int VAR_0[], const char* VAR_1, short VAR_2[])
{
 static const unsigned char VAR_3[6] = {0x80, 0x40, 0x00, 0x00, 0x00, 0x00};
 static const unsigned char VAR_4[6] = {0x80, 0x41, 0x00, 0x00, 0x00, 0x00};
 static const unsigned char VAR_5[6] = {0x80, 0x42, 0x00, 0x00, 0x00, 0x00};
 static const unsigned char VAR_6[6] = {0x80, 0x43, 0x00, 0x00, 0x00, 0x00};

 unsigned char VAR_7[7];
 int VAR_8;

 FUNC_3(1000);
 if ((VAR_8 = FUNC_2(VAR_0, VAR_1)))
  return VAR_8;

 if ((VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_3, VAR_7)))
  return VAR_8;
 VAR_2[0] = VAR_7[1] << 8 | VAR_7[2];

 if ((VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_4, VAR_7)))
  return VAR_8;
 VAR_2[1] = VAR_7[1] << 8 | VAR_7[2];

 if ((VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_5, VAR_7)))
  return VAR_8;
 VAR_2[2] = VAR_7[1] << 8 | VAR_7[2];

 if ((VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_6, VAR_7)))
  return VAR_8;
 VAR_2[3] = VAR_7[1] << 8 | VAR_7[2];

 return FUNC_1(VAR_0, VAR_1);
}
