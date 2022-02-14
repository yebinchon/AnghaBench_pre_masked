
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(int VAR_8)
{
 int VAR_9 = (VAR_8 & 0x100) >> 8;
 switch (VAR_8&0xf0) {
  case 0x00: return VAR_0;
  case 0x50:
   if (VAR_7 & VAR_6) return VAR_9 ? VAR_1 : VAR_3;
   FUNC_0(6, 0, 4);
   return VAR_9 ? VAR_3 : VAR_1;
  case 0x70:
   if (VAR_7 & VAR_6) return VAR_9 ? VAR_2 : VAR_4;
   FUNC_0(6, 0, 8);
   return VAR_9 ? VAR_3 : VAR_1;
  default:
   FUNC_1(VAR_5, "unimplemented cond?\n");
   FUNC_2();
   return 0;
 }
}
