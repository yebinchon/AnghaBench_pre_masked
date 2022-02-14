
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int en; } ;
union cvmx_smix_en {void* u64; TYPE_2__ s; } ;
struct TYPE_3__ {scalar_t__ rfb_arb_mode; scalar_t__ lrf_arb_mode; } ;
union cvmx_l2c_cfg {void* u64; TYPE_1__ s; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int,scalar_t__,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 () ;
 void* FUNC_16 (int ) ;
 int FUNC_17 (int ,void*) ;

int FUNC_18(void)
{
 int VAR_5 = 0;
 int VAR_6;
 union cvmx_l2c_cfg VAR_7;
 union cvmx_smix_en VAR_8;
 const int VAR_9 = FUNC_9();





 if (FUNC_1(VAR_3))
  FUNC_2(1);






 VAR_7.u64 = FUNC_16(VAR_0);
 VAR_7.s.lrf_arb_mode = 0;
 VAR_7.s.rfb_arb_mode = 0;
 FUNC_17(VAR_0, VAR_7.u64);


 VAR_8.u64 = FUNC_16(FUNC_0(0));
 if (!VAR_8.s.en) {
  VAR_8.s.en = 1;
  FUNC_17(FUNC_0(0), VAR_8.u64);
 }


 if (!FUNC_1(VAR_1) &&
     !FUNC_1(VAR_4) &&
     !FUNC_1(VAR_2)) {
  VAR_8.u64 = FUNC_16(FUNC_0(1));
  if (!VAR_8.s.en) {
   VAR_8.s.en = 1;
   FUNC_17(FUNC_0(1), VAR_8.u64);
  }
 }

 FUNC_15();
 for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
  VAR_5 |= FUNC_12(VAR_6);
  if (FUNC_14(VAR_6) > 0)
   FUNC_8("Interface %d has %d ports (%s)\n",
         VAR_6,
         FUNC_14(VAR_6),
         FUNC_11
         (FUNC_10
          (VAR_6)));
  VAR_5 |= FUNC_6(VAR_6);
  VAR_5 |= FUNC_7(VAR_6);
 }

 VAR_5 |= FUNC_4();
 VAR_5 |= FUNC_5();


 VAR_5 |= FUNC_3();




 return VAR_5;
}
