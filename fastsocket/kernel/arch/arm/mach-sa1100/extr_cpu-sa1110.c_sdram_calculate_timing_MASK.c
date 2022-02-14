
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sdram_params {int cas_latency; int trcd; int trp; int twr; int tck; } ;
struct sdram_info {int mdcnfg; int mdrefr; int * mdcas; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int,int,int ,int ,int ) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static void
FUNC_3(struct sdram_info *VAR_5, u_int VAR_6,
         struct sdram_params *VAR_7)
{
 u_int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_8 = VAR_6 / 2;
 VAR_9 = VAR_8;
 if ((FUNC_0(VAR_7->tck, VAR_9) > 1) ||
     (VAR_0 < VAR_1 && VAR_9 < 62000))
  VAR_9 /= 2;

 VAR_5->mdcnfg = VAR_2 & 0x007f007f;

 VAR_11 = FUNC_0(VAR_7->twr, VAR_8);


 VAR_10 = FUNC_0(VAR_7->trp, VAR_8) - 1;
 if (VAR_10 < 1)
  VAR_10 = 1;

 VAR_5->mdcnfg |= VAR_10 << 8;
 VAR_5->mdcnfg |= VAR_10 << 24;
 VAR_5->mdcnfg |= VAR_7->cas_latency << 12;
 VAR_5->mdcnfg |= VAR_7->cas_latency << 28;
 VAR_5->mdcnfg |= VAR_11 << 14;
 VAR_5->mdcnfg |= VAR_11 << 30;

 VAR_5->mdrefr = VAR_3 & 0xffbffff0;
 VAR_5->mdrefr |= 7;

 if (VAR_9 != VAR_8)
  VAR_5->mdrefr |= VAR_4;


 FUNC_2(VAR_5->mdcas, VAR_9 >= 62000, FUNC_0(VAR_7->trcd, VAR_8));





}
