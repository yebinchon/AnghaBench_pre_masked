
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef size_t u32 ;
typedef int u16 ;
struct qib_pportdata {struct qib_devdata* dd; } ;
struct qib_devdata {int first_user_ctxt; TYPE_1__* cspec; int pcidev; } ;
struct TYPE_2__ {unsigned long long lli_errs; unsigned long long overrun_thresh_errs; unsigned long long pma_sample_status; unsigned long long ibsymsnap; unsigned long long ibsymdelta; unsigned long long iblnkerrsnap; unsigned long long iblnkerrdelta; unsigned long long rxfc_unsupvl_errs; scalar_t__ ibdeltainprog; } ;


 size_t FUNC_0 (int const*) ;
 int VAR_0 ;







 int FUNC_1 (int ,char*,size_t) ;
 unsigned long long FUNC_2 (struct qib_devdata*,int) ;
 unsigned long long FUNC_3 (struct qib_devdata*,int) ;

__attribute__((used)) static u64 FUNC_4(struct qib_pportdata *VAR_1, u32 VAR_2)
{
 u64 VAR_3 = 0ULL;
 struct qib_devdata *VAR_4 = VAR_1->dd;
 u16 VAR_5;

 static const u16 VAR_6[] = {
  [166] = 135,
  [148] = 128,
  [160] = 0xffff,
  [159] = 0xffff,
  [158] = 0xffff,
  [152] = 131,
  [167] = 136,
  [164] = 0xffff,
  [163] = 0xffff,
  [157] = 134,
  [156] = 133,
  [149] = 129,
  [155] = 132,
  [154] = 0xffff,
  [153] = 0xffff,
  [180] = 145,
  [176] = 141,
  [178] = 143,
  [181] = 147,
  [175] = 146,
  [171] = 138,
  [170] = 137,
  [151] = 130,
  [174] = 0xffff,
  [179] = 144,
  [173] = 140,
  [172] = 139,
  [168] = 0xffff,
  [165] = 0xffff,
  [162] = 0xffff,
  [161] = 0xffff,
  [150] = 0xffff,
  [177] = 142,
  [169] = 0xffff,
 };

 if (VAR_2 >= FUNC_0(VAR_6)) {
  FUNC_1(VAR_1->dd->pcidev,
    "Unimplemented portcounter %u\n", VAR_2);
  goto done;
 }
 VAR_5 = VAR_6[VAR_2];


 if (VAR_2 == 168)
  VAR_3 = VAR_4->cspec->lli_errs;
 else if (VAR_2 == 174)
  VAR_3 = VAR_4->cspec->overrun_thresh_errs;
 else if (VAR_2 == 169) {
  int VAR_7;


  for (VAR_7 = 0; VAR_7 < VAR_4->first_user_ctxt; VAR_7++)
   VAR_3 += FUNC_3(VAR_4, VAR_0 + VAR_7);
 } else if (VAR_2 == 161)
  VAR_3 = VAR_4->cspec->pma_sample_status;
 if (VAR_5 == 0xffff)
  goto done;





 if (VAR_5 == 128 || VAR_5 == 129 ||
     VAR_5 == 135 || VAR_5 == 136)
  VAR_3 = FUNC_2(VAR_4, VAR_5);
 else
  VAR_3 = FUNC_3(VAR_4, VAR_5);
 if (VAR_5 == 138) {
  if (VAR_4->cspec->ibdeltainprog)
   VAR_3 -= VAR_3 - VAR_4->cspec->ibsymsnap;
  VAR_3 -= VAR_4->cspec->ibsymdelta;
 } else if (VAR_5 == 139) {
  if (VAR_4->cspec->ibdeltainprog)
   VAR_3 -= VAR_3 - VAR_4->cspec->iblnkerrsnap;
  VAR_3 -= VAR_4->cspec->iblnkerrdelta;
 }
 if (VAR_2 == 155)
  VAR_3 += VAR_4->cspec->rxfc_unsupvl_errs;

done:
 return VAR_3;
}
