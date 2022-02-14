
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {scalar_t__ flags; } ;
struct qib_pportdata {TYPE_2__ cong_stats; } ;
struct qib_ibport {int lock; void* pma_sample_start; void* pma_sample_interval; int * pma_counter_select; int pma_tag; } ;
struct qib_ibdev {int dummy; } ;
struct qib_devdata {scalar_t__ (* f_portcntr ) (struct qib_pportdata*,int ) ;int (* f_set_cntr_sample ) (struct qib_pportdata*,void*,void*) ;} ;
struct ib_smp {int dummy; } ;
struct ib_pma_portsamplescontrol {scalar_t__ port_select; int * counter_select; int tag; int sample_interval; int sample_start; } ;
struct TYPE_3__ {scalar_t__ attr_mod; int status; } ;
struct ib_pma_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct ib_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 struct qib_devdata* FUNC_2 (struct qib_ibdev*) ;
 int FUNC_3 (struct ib_pma_mad*,struct ib_device*,scalar_t__) ;
 struct qib_pportdata* FUNC_4 (struct qib_ibport*) ;
 int FUNC_5 (struct ib_smp*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (struct qib_pportdata*,int ) ;
 int FUNC_9 (struct qib_pportdata*,void*,void*) ;
 struct qib_ibdev* FUNC_10 (struct ib_device*) ;
 struct qib_ibport* FUNC_11 (struct ib_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct ib_pma_mad *VAR_6,
          struct ib_device *VAR_7, u8 VAR_8)
{
 struct ib_pma_portsamplescontrol *VAR_9 =
  (struct ib_pma_portsamplescontrol *)VAR_6->data;
 struct qib_ibdev *VAR_10 = FUNC_10(VAR_7);
 struct qib_devdata *VAR_11 = FUNC_2(VAR_10);
 struct qib_ibport *VAR_12 = FUNC_11(VAR_7, VAR_8);
 struct qib_pportdata *VAR_13 = FUNC_4(VAR_12);
 unsigned long VAR_14;
 u8 VAR_15, VAR_16;
 int VAR_17;

 if (VAR_6->mad_hdr.attr_mod != 0 || VAR_9->port_select != VAR_8) {
  VAR_6->mad_hdr.status |= VAR_4;
  VAR_17 = FUNC_5((struct ib_smp *) VAR_6);
  goto bail;
 }

 FUNC_6(&VAR_12->lock, VAR_14);


 VAR_16 = VAR_13->cong_stats.flags;
 VAR_13->cong_stats.flags = VAR_0;
 VAR_15 = VAR_11->f_portcntr(VAR_13, VAR_5);
 if (VAR_15 == VAR_2 ||
     (VAR_15 == VAR_3 &&
      VAR_16 == VAR_1)) {
  VAR_12->pma_sample_start = FUNC_1(VAR_9->sample_start);
  VAR_12->pma_sample_interval = FUNC_1(VAR_9->sample_interval);
  VAR_12->pma_tag = FUNC_0(VAR_9->tag);
  VAR_12->pma_counter_select[0] = VAR_9->counter_select[0];
  VAR_12->pma_counter_select[1] = VAR_9->counter_select[1];
  VAR_12->pma_counter_select[2] = VAR_9->counter_select[2];
  VAR_12->pma_counter_select[3] = VAR_9->counter_select[3];
  VAR_12->pma_counter_select[4] = VAR_9->counter_select[4];
  VAR_11->f_set_cntr_sample(VAR_13, VAR_12->pma_sample_interval,
          VAR_12->pma_sample_start);
 }
 FUNC_7(&VAR_12->lock, VAR_14);

 VAR_17 = FUNC_3(VAR_6, VAR_7, VAR_8);

bail:
 return VAR_17;
}
