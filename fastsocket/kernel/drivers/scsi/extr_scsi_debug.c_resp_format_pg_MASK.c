
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int format_pg ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(unsigned char * VAR_2, int VAR_3, int VAR_4)
{
 unsigned char VAR_5[] = {0x3, 0x16, 0, 0, 0, 0, 0, 0,
         0, 0, 0, 0, 0, 0, 0, 0,
         0, 0, 0, 0, 0x40, 0, 0, 0};

 FUNC_1(VAR_2, VAR_5, sizeof(VAR_5));
 VAR_2[10] = (VAR_1 >> 8) & 0xff;
 VAR_2[11] = VAR_1 & 0xff;
 VAR_2[12] = (VAR_0 >> 8) & 0xff;
 VAR_2[13] = VAR_0 & 0xff;
 if (FUNC_0(VAR_4))
  VAR_2[20] |= 0x20;
 if (1 == VAR_3)
  FUNC_2(VAR_2 + 2, 0, sizeof(VAR_5) - 2);
 return sizeof(VAR_5);
}
