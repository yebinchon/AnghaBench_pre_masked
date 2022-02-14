
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int en; int duplex; int slottime; int speed; } ;
union cvmx_gmxx_prtx_cfg {int u64; TYPE_2__ s; } ;
struct TYPE_3__ {int int_loop; int ext_loop; } ;
union cvmx_asxx_prt_loop {int u64; TYPE_1__ s; } ;
typedef int uint64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;

int FUNC_11(int VAR_0, int VAR_1,
        int VAR_2)
{
 int VAR_3 = FUNC_8(VAR_0);
 int VAR_4 = FUNC_7(VAR_0);
 int VAR_5;
 union cvmx_gmxx_prtx_cfg VAR_6;
 union cvmx_asxx_prt_loop VAR_7;


 VAR_6.u64 = FUNC_9(FUNC_3(VAR_4, VAR_3));
 VAR_5 = VAR_6.s.en;

 VAR_6.s.en = 0;
 if (VAR_1) {

  VAR_6.s.duplex = 1;
  VAR_6.s.slottime = 1;
  VAR_6.s.speed = 1;
  FUNC_10(FUNC_5(VAR_4, VAR_3), 1);
  FUNC_10(FUNC_6(VAR_4, VAR_3), 0x200);
  FUNC_10(FUNC_4(VAR_4, VAR_3), 0x2000);
 }
 FUNC_10(FUNC_3(VAR_4, VAR_3), VAR_6.u64);


 VAR_7.u64 = FUNC_9(FUNC_0(VAR_3));
 if (VAR_1)
  VAR_7.s.int_loop |= 1 << VAR_4;
 else
  VAR_7.s.int_loop &= ~(1 << VAR_4);
 if (VAR_2)
  VAR_7.s.ext_loop |= 1 << VAR_4;
 else
  VAR_7.s.ext_loop &= ~(1 << VAR_4);
 FUNC_10(FUNC_0(VAR_3), VAR_7.u64);


 if (VAR_1) {
  uint64_t VAR_8;
  VAR_8 = FUNC_9(FUNC_2(VAR_3));
  FUNC_10(FUNC_2(VAR_3),
          (1 << VAR_4) | VAR_8);
  VAR_8 = FUNC_9(FUNC_1(VAR_3));
  FUNC_10(FUNC_1(VAR_3),
          (1 << VAR_4) | VAR_8);
  VAR_5 = 1;
 }


 VAR_6.s.en = VAR_5;
 FUNC_10(FUNC_3(VAR_4, VAR_3), VAR_6.u64);
 return 0;
}
