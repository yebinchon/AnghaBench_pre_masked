
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int nsize ;
typedef int naddr ;


 void* FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,int) ;
 void* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (void*,char*,int*,int) ;
 int FUNC_4 (char*,unsigned long) ;
 int FUNC_5 (void*,char*,int*,int) ;
 int FUNC_6 (void*,char*,char*) ;

void FUNC_7(u64 VAR_0, u64 VAR_1)
{
 void *VAR_2, *VAR_3;
 int VAR_4, VAR_5, VAR_6;
 u32 VAR_7[4];

 VAR_2 = FUNC_2("/");
 if (FUNC_3(VAR_2, "#address-cells", &VAR_4, sizeof(VAR_4)) < 0)
  VAR_4 = 2;
 if (VAR_4 < 1 || VAR_4 > 2)
  FUNC_1("Can't cope with #address-cells == %d in /\n\r", VAR_4);

 if (FUNC_3(VAR_2, "#size-cells", &VAR_5, sizeof(VAR_5)) < 0)
  VAR_5 = 1;
 if (VAR_5 < 1 || VAR_5 > 2)
  FUNC_1("Can't cope with #size-cells == %d in /\n\r", VAR_5);

 VAR_6 = 0;
 if (VAR_4 == 2)
  VAR_7[VAR_6++] = VAR_0 >> 32;
 VAR_7[VAR_6++] = VAR_0 & 0xffffffff;
 if (VAR_5 == 2)
  VAR_7[VAR_6++] = VAR_1 >> 32;
 VAR_7[VAR_6++] = VAR_1 & 0xffffffff;

 VAR_3 = FUNC_2("/memory");
 if (! VAR_3) {
  VAR_3 = FUNC_0(((void*)0), "memory");
  FUNC_6(VAR_3, "device_type", "memory");
 }

 FUNC_4("Memory <- <0x%x", VAR_7[0]);
 for (VAR_6 = 1; VAR_6 < (VAR_4 + VAR_5); VAR_6++)
  FUNC_4(" 0x%x", VAR_7[VAR_6]);
 FUNC_4("> (%ldMB)\n\r", (unsigned long)(VAR_1 >> 20));

 FUNC_5(VAR_3, "reg", VAR_7, (VAR_4 + VAR_5)*sizeof(u32));
}
