
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef size_t u32 ;
typedef int u16 ;
struct qib_pportdata {TYPE_1__* cpspec; struct qib_devdata* dd; } ;
struct qib_devdata {int first_user_ctxt; TYPE_3__* pport; int pcidev; } ;
struct TYPE_6__ {TYPE_2__* cpspec; } ;
struct TYPE_5__ {unsigned long long ibsymdelta; unsigned long long iblnkerrdelta; scalar_t__ ibdeltainprog; } ;
struct TYPE_4__ {unsigned long long ibsymsnap; unsigned long long iblnkerrsnap; } ;


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
  [179] = 146,
  [161] = 128,
  [173] = 140,
  [172] = 139,
  [171] = 138,
  [165] = 132,
  [180] = 147,
  [177] = 144,
  [176] = 143,
  [170] = 137,
  [169] = 136,
  [162] = 129,
  [168] = 135,
  [167] = 134,
  [166] = 133,
  [193] = 158,
  [189] = 154,
  [191] = 156,
  [194] = 160,
  [188] = 159,
  [184] = 150,
  [183] = 149,
  [164] = 131,
  [187] = 153,
  [192] = 157,
  [186] = 152,
  [185] = 151,
  [181] = 148,
  [178] = 145,
  [175] = 142,
  [174] = 141,
  [163] = 130,
  [190] = 155,
  [182] = 0xffff,
 };

 if (VAR_2 >= FUNC_0(VAR_6)) {
  FUNC_1(VAR_1->dd->pcidev,
    "Unimplemented portcounter %u\n", VAR_2);
  goto done;
 }
 VAR_5 = VAR_6[VAR_2];

 if (VAR_2 == 182) {
  int VAR_7;


  for (VAR_7 = 0; VAR_7 < VAR_4->first_user_ctxt; VAR_7++)
   VAR_3 += FUNC_3(VAR_4, VAR_0 + VAR_7);
 }
 if (VAR_5 == 0xffff)
  goto done;





 if ((VAR_5 == 128 || VAR_5 == 129 ||
      VAR_5 == 146 || VAR_5 == 147))
  VAR_3 = FUNC_2(VAR_4, VAR_5);
 else
  VAR_3 = FUNC_3(VAR_4, VAR_5);
 if (VAR_5 == 150) {
  if (VAR_4->pport->cpspec->ibdeltainprog)
   VAR_3 -= VAR_3 - VAR_1->cpspec->ibsymsnap;
  VAR_3 -= VAR_4->pport->cpspec->ibsymdelta;
 } else if (VAR_5 == 151) {
  if (VAR_4->pport->cpspec->ibdeltainprog)
   VAR_3 -= VAR_3 - VAR_1->cpspec->iblnkerrsnap;
  VAR_3 -= VAR_4->pport->cpspec->iblnkerrdelta;
 }
done:
 return VAR_3;
}
