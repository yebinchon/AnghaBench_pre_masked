
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int idle_mode; } ;
typedef TYPE_1__ SLMP_INFO ;
 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_1(SLMP_INFO *VAR_1)
{
 unsigned char VAR_2 = 0xff;


 switch(VAR_1->idle_mode) {
 case 132: VAR_2 = 0x7e; break;
 case 133: VAR_2 = 0xaa; break;
 case 128: VAR_2 = 0x00; break;
 case 130: VAR_2 = 0xff; break;
 case 134: VAR_2 = 0xaa; break;
 case 129: VAR_2 = 0x00; break;
 case 131: VAR_2 = 0xff; break;
 }

 FUNC_0(VAR_1, VAR_0, VAR_2);
}
