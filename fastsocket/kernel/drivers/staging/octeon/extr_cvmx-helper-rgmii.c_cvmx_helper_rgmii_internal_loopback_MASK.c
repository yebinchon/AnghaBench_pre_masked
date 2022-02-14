
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int duplex; int slottime; int speed; int en; } ;
union cvmx_gmxx_prtx_cfg {int u64; TYPE_1__ s; } ;
typedef int uint64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;

void FUNC_9(int VAR_0)
{
 int VAR_1 = (VAR_0 >> 4) & 1;
 int VAR_2 = VAR_0 & 0xf;
 uint64_t VAR_3;

 union cvmx_gmxx_prtx_cfg VAR_4;
 VAR_4.u64 = 0;
 VAR_4.s.duplex = 1;
 VAR_4.s.slottime = 1;
 VAR_4.s.speed = 1;
 FUNC_8(FUNC_5(VAR_2, VAR_1), 1);
 FUNC_8(FUNC_6(VAR_2, VAR_1), 0x200);
 FUNC_8(FUNC_4(VAR_2, VAR_1), 0x2000);
 FUNC_8(FUNC_3(VAR_2, VAR_1), VAR_4.u64);
 VAR_3 = FUNC_7(FUNC_0(VAR_1));
 FUNC_8(FUNC_0(VAR_1), (1 << VAR_2) | VAR_3);
 VAR_3 = FUNC_7(FUNC_2(VAR_1));
 FUNC_8(FUNC_2(VAR_1), (1 << VAR_2) | VAR_3);
 VAR_3 = FUNC_7(FUNC_1(VAR_1));
 FUNC_8(FUNC_1(VAR_1), (1 << VAR_2) | VAR_3);
 VAR_4.s.en = 1;
 FUNC_8(FUNC_3(VAR_2, VAR_1), VAR_4.u64);
}
