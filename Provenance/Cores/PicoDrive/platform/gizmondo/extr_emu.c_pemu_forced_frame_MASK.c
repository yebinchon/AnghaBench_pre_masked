
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
 int FUNC_2 () ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int * FUNC_3 (int) ;
 int FUNC_4 () ;
 int * VAR_7 ;

void FUNC_5(int VAR_8, int VAR_9)
{
 int VAR_10 = VAR_5;
 int VAR_11 = VAR_6.EmuOpt;

 VAR_5 &= ~0x10;
 VAR_5 |= VAR_2;
 if (!VAR_8)
  VAR_5 |= VAR_3;
 VAR_6.EmuOpt |= 0x80;

 if (VAR_7 == ((void*)0))
  VAR_7 = FUNC_3(1);

 FUNC_1(VAR_1, 0);
 FUNC_0(VAR_0, ((void*)0));
 VAR_4.m.dirtyPal = 1;
 FUNC_2();

 FUNC_4();
 VAR_7 = ((void*)0);

 VAR_5 = VAR_10;
 VAR_6.EmuOpt = VAR_11;
}
