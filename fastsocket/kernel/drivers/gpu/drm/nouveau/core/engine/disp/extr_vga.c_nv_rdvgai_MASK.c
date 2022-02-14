
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (void*,char*,int) ;
 int FUNC_1 (void*,int,int) ;
 int FUNC_2 (void*,int,int) ;
 int FUNC_3 (void*,int,int) ;

u8
FUNC_4(void *VAR_0, int VAR_1, u16 VAR_2, u8 VAR_3)
{
 if (VAR_2 == 0x03c4) return FUNC_3(VAR_0, VAR_1, VAR_3);
 if (VAR_2 == 0x03ce) return FUNC_2(VAR_0, VAR_1, VAR_3);
 if (VAR_2 == 0x03d4) return FUNC_1(VAR_0, VAR_1, VAR_3);
 FUNC_0(VAR_0, "unknown indexed vga port 0x%04x\n", VAR_2);
 return 0x00;
}
