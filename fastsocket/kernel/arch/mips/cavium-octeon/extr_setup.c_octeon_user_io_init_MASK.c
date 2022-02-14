
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dismarkwblongto; int diswbfst; int wbthresh; int cvmsegenak; int lmemsz; scalar_t__ cvmsegenau; scalar_t__ cvmsegenas; scalar_t__ istrnol2; scalar_t__ wbfltime; scalar_t__ mclkalwys; scalar_t__ csrckalwys; scalar_t__ didtto; scalar_t__ nomerge; scalar_t__ allsyncw; scalar_t__ xkioenau; scalar_t__ xkioenas; scalar_t__ xkmemenau; scalar_t__ xkmemenas; scalar_t__ dissyncws; scalar_t__ syncwsmarked; scalar_t__ iobdmascrmsb; scalar_t__ dismrgclrwbto; } ;
union octeon_cvmemctl {int u64; TYPE_1__ s; } ;
struct TYPE_6__ {int nw_tim; } ;
union cvmx_pow_nw_tim {scalar_t__ u64; TYPE_3__ s; } ;
struct TYPE_5__ {int tout_val; scalar_t__ tout_enb; } ;
union cvmx_iob_fau_timeout {scalar_t__ u64; TYPE_2__ s; } ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

void FUNC_10(void)
{
 union octeon_cvmemctl VAR_4;
 union cvmx_iob_fau_timeout VAR_5;
 union cvmx_pow_nw_tim VAR_6;
 uint64_t VAR_7;


 VAR_4.u64 = FUNC_4();



 VAR_4.s.dismarkwblongto = 1;


 VAR_4.s.dismrgclrwbto = 0;



 VAR_4.s.iobdmascrmsb = 0;




 VAR_4.s.syncwsmarked = 0;

 VAR_4.s.dissyncws = 0;

 if (FUNC_0(VAR_3))
  VAR_4.s.diswbfst = 1;
 else
  VAR_4.s.diswbfst = 0;


 VAR_4.s.xkmemenas = 0;



 VAR_4.s.xkmemenau = 0;



 VAR_4.s.xkioenas = 0;



 VAR_4.s.xkioenau = 0;



 VAR_4.s.allsyncw = 0;



 VAR_4.s.nomerge = 0;




 VAR_4.s.didtto = 0;

 VAR_4.s.csrckalwys = 0;

 VAR_4.s.mclkalwys = 0;






 VAR_4.s.wbfltime = 0;

 VAR_4.s.istrnol2 = 0;

 VAR_4.s.wbthresh = 10;





 VAR_4.s.cvmsegenak = 0;



 VAR_4.s.cvmsegenas = 0;


 VAR_4.s.cvmsegenau = 0;


 VAR_4.s.lmemsz = VAR_0;


 if (FUNC_5() == 0)
  FUNC_2("CVMSEG size: %d cache lines (%d bytes)\n",
     VAR_0,
     VAR_0 * 128);

 FUNC_7(VAR_4.u64);


 VAR_7 = FUNC_3();
 VAR_7 &= ~(7 << 7);
 VAR_7 |= 6 << 7;
 FUNC_6(VAR_7);


 VAR_5.u64 = 0;
 VAR_5.s.tout_val = 0xfff;

 VAR_5.s.tout_enb = 0;
 FUNC_1(VAR_1, VAR_5.u64);

 VAR_6.u64 = 0;

 VAR_6.s.nw_tim = 3;
 FUNC_1(VAR_2, VAR_6.u64);

 FUNC_9(0);
 FUNC_8(0);
}
