
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dirtyPal; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
struct TYPE_5__ {int EmuOpt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int * FUNC_2 (int) ;
 int FUNC_3 () ;
 int * VAR_7 ;
 int* VAR_8 ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static void FUNC_5(void)
{
 VAR_7 = FUNC_2(1);

 if (VAR_5&0x10) {
 } else if (VAR_6.EmuOpt&0x80) {
  FUNC_1(VAR_3, 0);
  FUNC_0(VAR_0, ((void*)0));
 } else {
  FUNC_1(VAR_2, 0);
  FUNC_0(VAR_1, ((void*)0));
 }
 if ((VAR_5&0x10) || !(VAR_6.EmuOpt&0x80)) {

  VAR_8[0xc0] = 0x0600;
  VAR_8[0xd0] = 0xc000;
  VAR_8[0xe0] = 0x0000;
  VAR_8[0xf0] = 0xffff;
 }
 VAR_4.m.dirtyPal = 1;

 FUNC_4(VAR_7, 0, 321*240*2/4);
 if (VAR_6.EmuOpt&0x8000) {
  FUNC_3();
  VAR_7 = FUNC_2(0);
  FUNC_4(VAR_7, 0, 321*240*2/4);
 }
 FUNC_3();
 VAR_7 = ((void*)0);
}
