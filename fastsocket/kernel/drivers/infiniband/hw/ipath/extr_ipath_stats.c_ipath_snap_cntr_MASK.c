
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int u32 ;
struct ipath_devdata {int ipath_flags; int ipath_lastsword; unsigned long long ipath_sword; int ipath_lastrword; unsigned long long ipath_rword; int ipath_lastspkts; unsigned long long ipath_spkts; int ipath_lastrpkts; unsigned long long ipath_rpkts; unsigned long long ibsymsnap; unsigned long long iblnkerrsnap; scalar_t__ iblnkerrdelta; scalar_t__ ibdeltainprog; TYPE_1__* ipath_cregs; scalar_t__ ibsymdelta; } ;
typedef scalar_t__ ipath_creg ;
struct TYPE_2__ {scalar_t__ cr_wordsendcnt; scalar_t__ cr_wordrcvcnt; scalar_t__ cr_pktsendcnt; scalar_t__ cr_pktrcvcnt; scalar_t__ cr_ibsymbolerrcnt; scalar_t__ cr_iblinkerrrecovcnt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipath_devdata*,char*,scalar_t__) ;
 unsigned long long FUNC_1 (struct ipath_devdata*,scalar_t__) ;
 int FUNC_2 (struct ipath_devdata*,scalar_t__) ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__,unsigned long) ;

u64 FUNC_4(struct ipath_devdata *VAR_3, ipath_creg VAR_4)
{
 u32 VAR_5, VAR_6 = 0;
 u64 VAR_7;
 unsigned long VAR_8, VAR_9;
 u64 VAR_10;

 VAR_8 = VAR_2;


 if (!(VAR_3->ipath_flags & VAR_1) &&
     (VAR_4 == VAR_3->ipath_cregs->cr_wordsendcnt ||
      VAR_4 == VAR_3->ipath_cregs->cr_wordrcvcnt ||
      VAR_4 == VAR_3->ipath_cregs->cr_pktsendcnt ||
      VAR_4 == VAR_3->ipath_cregs->cr_pktrcvcnt)) {
  VAR_7 = FUNC_1(VAR_3, VAR_4);
  VAR_5 = VAR_7 == ~0ULL ? ~0U : 0;
  VAR_6 = 1;
 } else
  VAR_7 = VAR_5 = FUNC_2(VAR_3, VAR_4);







 VAR_9 = VAR_2;
 if (FUNC_3(VAR_8 + VAR_0, VAR_9) && VAR_5 == -1) {
  FUNC_0(VAR_3, "Error!  Read counter 0x%x timed out\n",
         VAR_4);
  VAR_10 = 0ULL;
  goto bail;
 }
 if (VAR_6) {
  VAR_10 = VAR_7;
  goto bail;
 }

 if (VAR_4 == VAR_3->ipath_cregs->cr_wordsendcnt) {
  if (VAR_5 != VAR_3->ipath_lastsword) {
   VAR_3->ipath_sword += VAR_5 - VAR_3->ipath_lastsword;
   VAR_3->ipath_lastsword = VAR_5;
  }
  VAR_7 = VAR_3->ipath_sword;
 } else if (VAR_4 == VAR_3->ipath_cregs->cr_wordrcvcnt) {
  if (VAR_5 != VAR_3->ipath_lastrword) {
   VAR_3->ipath_rword += VAR_5 - VAR_3->ipath_lastrword;
   VAR_3->ipath_lastrword = VAR_5;
  }
  VAR_7 = VAR_3->ipath_rword;
 } else if (VAR_4 == VAR_3->ipath_cregs->cr_pktsendcnt) {
  if (VAR_5 != VAR_3->ipath_lastspkts) {
   VAR_3->ipath_spkts += VAR_5 - VAR_3->ipath_lastspkts;
   VAR_3->ipath_lastspkts = VAR_5;
  }
  VAR_7 = VAR_3->ipath_spkts;
 } else if (VAR_4 == VAR_3->ipath_cregs->cr_pktrcvcnt) {
  if (VAR_5 != VAR_3->ipath_lastrpkts) {
   VAR_3->ipath_rpkts += VAR_5 - VAR_3->ipath_lastrpkts;
   VAR_3->ipath_lastrpkts = VAR_5;
  }
  VAR_7 = VAR_3->ipath_rpkts;
 } else if (VAR_4 == VAR_3->ipath_cregs->cr_ibsymbolerrcnt) {
  if (VAR_3->ibdeltainprog)
   VAR_7 -= VAR_7 - VAR_3->ibsymsnap;
  VAR_7 -= VAR_3->ibsymdelta;
 } else if (VAR_4 == VAR_3->ipath_cregs->cr_iblinkerrrecovcnt) {
  if (VAR_3->ibdeltainprog)
   VAR_7 -= VAR_7 - VAR_3->iblnkerrsnap;
  VAR_7 -= VAR_3->iblnkerrdelta;
 } else
  VAR_7 = (u64) VAR_5;

 VAR_10 = VAR_7;

bail:
 return VAR_10;
}
