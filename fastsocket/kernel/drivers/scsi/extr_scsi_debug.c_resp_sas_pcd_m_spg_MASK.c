
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sas_pcd_m_pg ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_2(unsigned char * VAR_0, int VAR_1, int VAR_2,
         int VAR_3)
{
 unsigned char VAR_4[] = {0x59, 0x1, 0, 0x64, 0, 0x6, 0, 2,
      0, 0, 0, 0, 0x10, 0x9, 0x8, 0x0,
      0x52, 0x22, 0x22, 0x20, 0x0, 0x0, 0x0, 0x0,
      0x51, 0x11, 0x11, 0x10, 0x0, 0x0, 0x0, 0x1,
      0x2, 0, 0, 0, 0, 0, 0, 0,
      0x88, 0x99, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0,
      0, 1, 0, 0, 0x10, 0x9, 0x8, 0x0,
      0x52, 0x22, 0x22, 0x20, 0x0, 0x0, 0x0, 0x0,
      0x51, 0x11, 0x11, 0x10, 0x0, 0x0, 0x0, 0x1,
      0x3, 0, 0, 0, 0, 0, 0, 0,
      0x88, 0x99, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0,
  };
 int VAR_5, VAR_6;

 VAR_5 = VAR_3 + 1;
 VAR_6 = VAR_5 + 1;
 FUNC_0(VAR_0, VAR_4, sizeof(VAR_4));
 VAR_0[20] = (VAR_5 >> 24);
 VAR_0[21] = (VAR_5 >> 16) & 0xff;
 VAR_0[22] = (VAR_5 >> 8) & 0xff;
 VAR_0[23] = VAR_5 & 0xff;
 VAR_0[48 + 20] = (VAR_6 >> 24);
 VAR_0[48 + 21] = (VAR_6 >> 16) & 0xff;
 VAR_0[48 + 22] = (VAR_6 >> 8) & 0xff;
 VAR_0[48 + 23] = VAR_6 & 0xff;
 if (1 == VAR_1)
  FUNC_1(VAR_0 + 4, 0, sizeof(VAR_4) - 4);
 return sizeof(VAR_4);
}
