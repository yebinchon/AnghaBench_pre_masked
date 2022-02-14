
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_4__ {unsigned int first_sendbuf; unsigned int last_sendbuf; } ;
struct qib_pportdata {unsigned long long sdma_descq_phys; unsigned long long sdma_head_phys; int port; TYPE_2__ sdma_state; struct qib_devdata* dd; } ;
struct qib_devdata {int num_pports; int piobcnt2k; int piobcnt4k; TYPE_1__* cspec; } ;
struct TYPE_3__ {int sdmabufcnt; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct qib_pportdata*) ;
 int FUNC_2 (struct qib_pportdata*,int ) ;
 int FUNC_3 (struct qib_pportdata*,int ,unsigned long long) ;
 unsigned long long VAR_8 ;

__attribute__((used)) static int FUNC_4(struct qib_pportdata *VAR_9)
{
 struct qib_devdata *VAR_10 = VAR_9->dd;
 unsigned VAR_11, VAR_12;
 u64 VAR_13[3] = { 0 };
 int VAR_14, VAR_15 = 0;

 FUNC_3(VAR_9, VAR_1, VAR_9->sdma_descq_phys);
 FUNC_1(VAR_9);
 FUNC_2(VAR_9, 0);
 FUNC_3(VAR_9, VAR_7, VAR_8);
 FUNC_3(VAR_9, VAR_5, 0);
 FUNC_3(VAR_9, VAR_6, VAR_9->sdma_head_phys);

 if (VAR_10->num_pports)
  VAR_14 = VAR_10->cspec->sdmabufcnt / VAR_10->num_pports;
 else
  VAR_14 = VAR_10->cspec->sdmabufcnt;
 VAR_12 = (VAR_10->piobcnt2k + VAR_10->piobcnt4k) -
  ((VAR_10->num_pports == 1 || VAR_9->port == 2) ? VAR_14 :
  VAR_10->cspec->sdmabufcnt);
 VAR_11 = VAR_12 + VAR_14;

 VAR_9->sdma_state.first_sendbuf = VAR_12;
 VAR_9->sdma_state.last_sendbuf = VAR_11;
 for (; VAR_12 < VAR_11; ++VAR_12) {
  unsigned VAR_16 = VAR_12 / VAR_0;
  unsigned VAR_17 = VAR_12 & (VAR_0 - 1);

  FUNC_0(VAR_16 >= 3);
  VAR_13[VAR_16] |= 1ULL << VAR_17;
 }
 FUNC_3(VAR_9, VAR_2, VAR_13[0]);
 FUNC_3(VAR_9, VAR_3, VAR_13[1]);
 FUNC_3(VAR_9, VAR_4, VAR_13[2]);
 return VAR_15;
}
