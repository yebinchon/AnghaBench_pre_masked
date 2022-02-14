
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ flags; int counter; } ;
struct qib_pportdata {TYPE_1__ cong_stats; } ;
struct qib_ibport {scalar_t__ pma_tag; int lock; int * pma_counter_select; } ;
struct qib_ibdev {int dummy; } ;
struct qib_devdata {scalar_t__ (* f_portcntr ) (struct qib_pportdata*,int ) ;int (* f_set_cntr_sample ) (struct qib_pportdata*,int ,int ) ;} ;
struct ib_smp {int dummy; } ;
struct ib_pma_portsamplesresult_ext {int * counter; int extended_width; void* sample_status; void* tag; } ;
struct ib_pma_mad {scalar_t__ data; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qib_pportdata*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 struct qib_devdata* FUNC_5 (struct qib_ibdev*) ;
 int FUNC_6 (struct qib_pportdata*,int ) ;
 int FUNC_7 (scalar_t__,int ,int) ;
 struct qib_pportdata* FUNC_8 (struct qib_ibport*) ;
 int FUNC_9 (struct ib_smp*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (struct qib_pportdata*,int ) ;
 int FUNC_13 (struct qib_pportdata*,int ,int ) ;
 struct qib_ibdev* FUNC_14 (struct ib_device*) ;
 struct qib_ibport* FUNC_15 (struct ib_device*,scalar_t__) ;
 int FUNC_16 (struct qib_pportdata*) ;

__attribute__((used)) static int FUNC_17(struct ib_pma_mad *VAR_4,
      struct ib_device *VAR_5, u8 VAR_6)
{
 struct ib_pma_portsamplesresult_ext *VAR_7 =
  (struct ib_pma_portsamplesresult_ext *)VAR_4->data;
 struct qib_ibdev *VAR_8 = FUNC_14(VAR_5);
 struct qib_devdata *VAR_9 = FUNC_5(VAR_8);
 struct qib_ibport *VAR_10 = FUNC_15(VAR_5, VAR_6);
 struct qib_pportdata *VAR_11 = FUNC_8(VAR_10);
 unsigned long VAR_12;
 u8 VAR_13;
 int VAR_14;


 FUNC_7(VAR_4->data, 0, sizeof(VAR_4->data));
 FUNC_10(&VAR_10->lock, VAR_12);
 VAR_7->tag = FUNC_2(VAR_10->pma_tag);
 if (VAR_11->cong_stats.flags == VAR_0)
  VAR_7->sample_status = VAR_1;
 else {
  VAR_13 = VAR_9->f_portcntr(VAR_11, VAR_2);
  VAR_7->sample_status = FUNC_2(VAR_13);

  VAR_7->extended_width = FUNC_3(0x80000000);
  if (VAR_13 == VAR_1) {
   FUNC_1(VAR_11);
   VAR_11->cong_stats.counter =
    FUNC_16(VAR_11);
   VAR_9->f_set_cntr_sample(VAR_11,
           VAR_3, 0);
   VAR_11->cong_stats.flags = VAR_0;
  }
 }
 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_10->pma_counter_select); VAR_14++)
  VAR_7->counter[VAR_14] = FUNC_4(
   FUNC_6(
    VAR_11, VAR_10->pma_counter_select[VAR_14]));
 FUNC_11(&VAR_10->lock, VAR_12);

 return FUNC_9((struct ib_smp *) VAR_4);
}
