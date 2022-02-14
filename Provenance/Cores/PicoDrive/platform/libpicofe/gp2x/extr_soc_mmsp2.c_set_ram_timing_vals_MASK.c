
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ,char*) ;
 int* VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10;
 FUNC_0(VAR_2, -2, 0x1);
 FUNC_0(VAR_3, -1, 0xf);
 FUNC_0(VAR_4, -1, 0xf);
 FUNC_0(VAR_5, -1, 0xf);
 FUNC_0(VAR_6, -1, 0xf);
 FUNC_0(VAR_7, -1, 0xf);
 FUNC_0(VAR_8, -1, 0xf);
 FUNC_0(VAR_9, -1, 0xf);


 FUNC_3(1);

 VAR_0[0x3802>>1] = ((VAR_6 & 0xF) << 12) | ((VAR_7 & 0xF) << 8) | ((VAR_8 & 0xF) << 4) | (VAR_9 & 0xF);
 VAR_0[0x3804>>1] = 0x8000 | ((VAR_2 & 1) << 12) | ((VAR_3 & 0xF) << 8) | ((VAR_4 & 0xF) << 4) | (VAR_5 & 0xF);


 FUNC_3(128*1024);
 for (VAR_10 = 0; VAR_10 < 8*1024; VAR_10++)
  if (!(VAR_0[0x3804>>1] & 0x8000))
   break;

 FUNC_2("RAM timings set.\n");
 return;
bad:
 FUNC_1(VAR_1, "RAM timings invalid.\n");
}
