
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tsb {int dummy; } ;
struct TYPE_4__ {int lock; TYPE_1__* tsb_block; } ;
struct mm_struct {TYPE_2__ context; } ;
typedef int gfp_t ;
struct TYPE_3__ {unsigned long tsb_rss_limit; int tsb_reg_val; int tsb_nentries; struct tsb* tsb; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (unsigned long) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct tsb* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,struct tsb*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_7 (struct mm_struct*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 scalar_t__ VAR_7 ;
 int * VAR_8 ;
 int FUNC_10 (struct mm_struct*) ;
 int FUNC_11 (struct tsb*,unsigned long) ;
 unsigned long FUNC_12 (unsigned long) ;
 scalar_t__ FUNC_13 (int) ;

void FUNC_14(struct mm_struct *VAR_9, unsigned long VAR_10, unsigned long VAR_11)
{
 unsigned long VAR_12 = 1 * 1024 * 1024;
 unsigned long VAR_13, VAR_14, VAR_15;
 struct tsb *VAR_16, *VAR_17;
 unsigned long VAR_18, VAR_19;
 unsigned long VAR_20;
 gfp_t VAR_21;

 if (VAR_12 > (VAR_2 << VAR_1))
  VAR_12 = (VAR_2 << VAR_1);

 VAR_18 = 0;
 for (VAR_13 = 8192; VAR_13 < VAR_12; VAR_13 <<= 1UL) {
  VAR_20 = FUNC_12(VAR_13);
  if (VAR_20 > VAR_11)
   break;
  VAR_18++;
 }

 if (VAR_13 == VAR_12)
  VAR_20 = ~0UL;

retry_tsb_alloc:
 VAR_21 = VAR_0;
 if (VAR_13 > (VAR_2 * 2))
  VAR_21 = VAR_4 | VAR_3;

 VAR_17 = FUNC_1(VAR_8[VAR_18],
     VAR_21, FUNC_3());
 if (FUNC_13(!VAR_17)) {





  if (VAR_9->context.tsb_block[VAR_10].tsb == ((void*)0) &&
      VAR_18 > 0) {
   VAR_18 = 0;
   VAR_13 = 8192;
   VAR_20 = ~0UL;
   goto retry_tsb_alloc;
  }




  if (VAR_9->context.tsb_block[VAR_10].tsb != ((void*)0))
   VAR_9->context.tsb_block[VAR_10].tsb_rss_limit = ~0UL;
  return;
 }


 FUNC_11(VAR_17, VAR_13);
 FUNC_8(&VAR_9->context.lock, VAR_15);

 VAR_16 = VAR_9->context.tsb_block[VAR_10].tsb;
 VAR_19 =
  (VAR_9->context.tsb_block[VAR_10].tsb_reg_val & 0x7UL);
 VAR_14 = (VAR_9->context.tsb_block[VAR_10].tsb_nentries *
      sizeof(struct tsb));






 if (FUNC_13(VAR_16 &&
       (VAR_11 < VAR_9->context.tsb_block[VAR_10].tsb_rss_limit))) {
  FUNC_9(&VAR_9->context.lock, VAR_15);

  FUNC_2(VAR_8[VAR_18], VAR_17);
  return;
 }

 VAR_9->context.tsb_block[VAR_10].tsb_rss_limit = VAR_20;

 if (VAR_16) {
  extern void FUNC_0(unsigned long VAR_22,
         unsigned long VAR_23,
         unsigned long VAR_24,
         unsigned long VAR_25);
  unsigned long VAR_26 = (unsigned long) VAR_16;
  unsigned long VAR_27 = (unsigned long) VAR_17;

  if (VAR_7 == VAR_5 || VAR_7 == VAR_6) {
   VAR_26 = FUNC_0(VAR_26);
   VAR_27 = FUNC_0(VAR_27);
  }
  FUNC_0(VAR_26, VAR_14, VAR_27, VAR_13);
 }

 VAR_9->context.tsb_block[VAR_10].tsb = VAR_17;
 FUNC_6(VAR_9, VAR_10, VAR_13);

 FUNC_9(&VAR_9->context.lock, VAR_15);




 if (VAR_16) {

  FUNC_10(VAR_9);


  FUNC_4();
  FUNC_7(VAR_9);
  FUNC_5();


  FUNC_2(VAR_8[VAR_19], VAR_16);
 }
}
