
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status; } ;
struct TYPE_5__ {TYPE_1__ ST; scalar_t__ eg_cnt; scalar_t__ eg_timer; } ;
struct TYPE_6__ {int* REGS; scalar_t__ addr_A1; scalar_t__ dacen; int * CH; TYPE_2__ OPN; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 TYPE_3__ VAR_0 ;

void FUNC_4(void)
{
 int VAR_1;

 FUNC_1(VAR_0, 0, sizeof(VAR_0));

 FUNC_3( 0x30 );
 VAR_0[0x27] = 0x30;

 VAR_0 = 0;
 VAR_0 = 0;
 VAR_0 = 0;

 FUNC_2( &VAR_0[0] );
 for(VAR_1 = 0xb6 ; VAR_1 >= 0xb4 ; VAR_1-- )
 {
  FUNC_0(VAR_1 ,0xc0);
  FUNC_0(VAR_1|0x100,0xc0);
  VAR_0[VAR_1 ] = 0xc0;
  VAR_0[VAR_1|0x100] = 0xc0;
 }
 for(VAR_1 = 0xb2 ; VAR_1 >= 0x30 ; VAR_1-- )
 {
  FUNC_0(VAR_1 ,0);
  FUNC_0(VAR_1|0x100,0);
 }
 for(VAR_1 = 0x26 ; VAR_1 >= 0x20 ; VAR_1-- ) FUNC_0(VAR_1,0);

 VAR_0 = 0;
 VAR_0 = 0;
}
