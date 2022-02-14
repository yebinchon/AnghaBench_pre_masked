
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_2__ {int* tevColorEnv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int,int) ;
 TYPE_1__* VAR_1 ;

void FUNC_2(u8 VAR_2,u8 VAR_3,u8 VAR_4,u8 VAR_5,u8 VAR_6,u8 VAR_7)
{

 u32 VAR_8 = (VAR_2&0xf);
 VAR_1->tevColorEnv[VAR_8] = (VAR_1->tevColorEnv[VAR_8]&~0x40000)|(FUNC_1(VAR_3,18,1));
 if(VAR_3<=VAR_0) {
  VAR_1->tevColorEnv[VAR_8] = (VAR_1->tevColorEnv[VAR_8]&~0x300000)|(FUNC_1(VAR_5,20,2));
  VAR_1->tevColorEnv[VAR_8] = (VAR_1->tevColorEnv[VAR_8]&~0x30000)|(FUNC_1(VAR_4,16,2));
 } else {
  VAR_1->tevColorEnv[VAR_8] = (VAR_1->tevColorEnv[VAR_8]&~0x300000)|((FUNC_1(VAR_3,19,4))&0x300000);
  VAR_1->tevColorEnv[VAR_8] = (VAR_1->tevColorEnv[VAR_8]&~0x30000)|0x30000;
 }
 VAR_1->tevColorEnv[VAR_8] = (VAR_1->tevColorEnv[VAR_8]&~0x80000)|(FUNC_1(VAR_6,19,1));
 VAR_1->tevColorEnv[VAR_8] = (VAR_1->tevColorEnv[VAR_8]&~0xC00000)|(FUNC_1(VAR_7,22,2));

 FUNC_0(VAR_1->tevColorEnv[VAR_8]);
}
