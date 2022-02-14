
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gtm_timer {int gtcfr; scalar_t__ gtevr; scalar_t__ gtrfr; scalar_t__ gtcnr; int gtmdr; scalar_t__ gtpsr; struct gtm* gtm; } ;
struct gtm {int clock; int lock; struct gtm_timer* timers; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct gtm_timer *VAR_5, int VAR_6,
          int VAR_7, bool VAR_8)
{
 struct gtm *VAR_9 = VAR_5->gtm;
 int VAR_10 = VAR_5 - &VAR_9->timers[0];
 unsigned int VAR_11;
 u8 VAR_12 = VAR_2;
 u8 VAR_13;
 u8 VAR_14;
 unsigned long VAR_15;
 int VAR_16 = 256 * 256 * 16;


 if (!VAR_5->gtpsr)
  VAR_16 /= 256;

 VAR_11 = VAR_9->clock / VAR_6;





 if (VAR_11 > VAR_16)
  return -VAR_0;

 if (VAR_11 > VAR_16 / 16) {
  VAR_12 = VAR_3;
  VAR_11 /= 16;
 }

 if (VAR_11 <= 256) {
  VAR_13 = 0;
  VAR_14 = VAR_11 - 1;
 } else {
  VAR_13 = 256 - 1;
  VAR_14 = VAR_11 / 256 - 1;
 }

 FUNC_8(&VAR_9->lock, VAR_15);





 FUNC_4(VAR_5->gtcfr, ~(FUNC_1(VAR_10) | FUNC_0(VAR_10)),
     FUNC_1(VAR_10) | FUNC_0(VAR_10));

 FUNC_7(VAR_5->gtcfr, FUNC_1(VAR_10));

 if (VAR_5->gtpsr)
  FUNC_6(VAR_5->gtpsr, VAR_13);
 FUNC_5(VAR_5->gtmdr, 0xFFFF, VAR_12 | FUNC_2(VAR_14) |
   VAR_4 | (VAR_8 ? VAR_1 : 0));
 FUNC_6(VAR_5->gtcnr, 0);
 FUNC_6(VAR_5->gtrfr, VAR_7);
 FUNC_6(VAR_5->gtevr, 0xFFFF);


 FUNC_3(VAR_5->gtcfr, FUNC_1(VAR_10));

 FUNC_9(&VAR_9->lock, VAR_15);

 return 0;
}
