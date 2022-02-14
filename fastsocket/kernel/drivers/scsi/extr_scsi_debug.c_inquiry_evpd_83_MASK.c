
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int b ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (unsigned char*,char const*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_3(unsigned char * VAR_2, int VAR_3,
      int VAR_4, int VAR_5,
      const char * VAR_6,
      int VAR_7)
{
 int VAR_8, VAR_9;
 char VAR_10[32];

 VAR_9 = VAR_4 + 1;

 VAR_2[0] = 0x2;
 VAR_2[1] = 0x1;
 VAR_2[2] = 0x0;
 FUNC_0(&VAR_2[4], VAR_1, 8);
 FUNC_0(&VAR_2[12], VAR_0, 16);
 FUNC_0(&VAR_2[28], VAR_6, VAR_7);
 VAR_8 = 8 + 16 + VAR_7;
 VAR_2[3] = VAR_8;
 VAR_8 += 4;
 if (VAR_5 >= 0) {

  VAR_2[VAR_8++] = 0x1;
  VAR_2[VAR_8++] = 0x3;
  VAR_2[VAR_8++] = 0x0;
  VAR_2[VAR_8++] = 0x8;
  VAR_2[VAR_8++] = 0x53;
  VAR_2[VAR_8++] = 0x33;
  VAR_2[VAR_8++] = 0x33;
  VAR_2[VAR_8++] = 0x30;
  VAR_2[VAR_8++] = (VAR_5 >> 24);
  VAR_2[VAR_8++] = (VAR_5 >> 16) & 0xff;
  VAR_2[VAR_8++] = (VAR_5 >> 8) & 0xff;
  VAR_2[VAR_8++] = VAR_5 & 0xff;

  VAR_2[VAR_8++] = 0x61;
  VAR_2[VAR_8++] = 0x94;
  VAR_2[VAR_8++] = 0x0;
  VAR_2[VAR_8++] = 0x4;
  VAR_2[VAR_8++] = 0x0;
  VAR_2[VAR_8++] = 0x0;
  VAR_2[VAR_8++] = 0x0;
  VAR_2[VAR_8++] = 0x1;
 }

 VAR_2[VAR_8++] = 0x61;
 VAR_2[VAR_8++] = 0x93;
 VAR_2[VAR_8++] = 0x0;
 VAR_2[VAR_8++] = 0x8;
 VAR_2[VAR_8++] = 0x52;
 VAR_2[VAR_8++] = 0x22;
 VAR_2[VAR_8++] = 0x22;
 VAR_2[VAR_8++] = 0x20;
 VAR_2[VAR_8++] = (VAR_9 >> 24);
 VAR_2[VAR_8++] = (VAR_9 >> 16) & 0xff;
 VAR_2[VAR_8++] = (VAR_9 >> 8) & 0xff;
 VAR_2[VAR_8++] = VAR_9 & 0xff;

 VAR_2[VAR_8++] = 0x61;
 VAR_2[VAR_8++] = 0x95;
 VAR_2[VAR_8++] = 0x0;
 VAR_2[VAR_8++] = 0x4;
 VAR_2[VAR_8++] = 0;
 VAR_2[VAR_8++] = 0;
 VAR_2[VAR_8++] = (VAR_3 >> 8) & 0xff;
 VAR_2[VAR_8++] = VAR_3 & 0xff;

 VAR_2[VAR_8++] = 0x61;
 VAR_2[VAR_8++] = 0xa3;
 VAR_2[VAR_8++] = 0x0;
 VAR_2[VAR_8++] = 0x8;
 VAR_2[VAR_8++] = 0x52;
 VAR_2[VAR_8++] = 0x22;
 VAR_2[VAR_8++] = 0x22;
 VAR_2[VAR_8++] = 0x20;
 VAR_2[VAR_8++] = (VAR_4 >> 24);
 VAR_2[VAR_8++] = (VAR_4 >> 16) & 0xff;
 VAR_2[VAR_8++] = (VAR_4 >> 8) & 0xff;
 VAR_2[VAR_8++] = VAR_4 & 0xff;

 VAR_2[VAR_8++] = 0x63;
 VAR_2[VAR_8++] = 0xa8;
 VAR_2[VAR_8++] = 0x0;
 VAR_2[VAR_8++] = 24;
 FUNC_0(VAR_2 + VAR_8, "naa.52222220", 12);
 VAR_8 += 12;
 FUNC_2(VAR_10, sizeof(VAR_10), "%08X", VAR_4);
 FUNC_0(VAR_2 + VAR_8, VAR_10, 8);
 VAR_8 += 8;
 FUNC_1(VAR_2 + VAR_8, 0, 4);
 VAR_8 += 4;
 return VAR_8;
}
