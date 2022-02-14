
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct qib_pportdata {int dummy; } ;
struct qib_ibport {int lock; int * pma_counter_select; int pma_tag; int pma_sample_interval; int pma_sample_start; } ;
struct qib_ibdev {int dummy; } ;
struct qib_devdata {int (* f_portcntr ) (struct qib_pportdata*,int ) ;int (* f_get_ib_cfg ) (struct qib_pportdata*,int ) ;} ;
struct ib_smp {int dummy; } ;
struct ib_pma_portsamplescontrol {scalar_t__ port_select; int counter_width; int * counter_select; int tag; void* sample_interval; void* sample_start; int counter_mask0_9; int sample_status; int tick; } ;
struct TYPE_2__ {scalar_t__ attr_mod; int status; } ;
struct ib_pma_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 struct qib_devdata* FUNC_2 (struct qib_ibdev*) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 struct qib_pportdata* FUNC_4 (struct qib_ibport*) ;
 int FUNC_5 (struct ib_smp*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct qib_pportdata*,int ) ;
 int FUNC_9 (struct qib_pportdata*,int ) ;
 struct qib_ibdev* FUNC_10 (struct ib_device*) ;
 struct qib_ibport* FUNC_11 (struct ib_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct ib_pma_mad *VAR_4,
          struct ib_device *VAR_5, u8 VAR_6)
{
 struct ib_pma_portsamplescontrol *VAR_7 =
  (struct ib_pma_portsamplescontrol *)VAR_4->data;
 struct qib_ibdev *VAR_8 = FUNC_10(VAR_5);
 struct qib_devdata *VAR_9 = FUNC_2(VAR_8);
 struct qib_ibport *VAR_10 = FUNC_11(VAR_5, VAR_6);
 struct qib_pportdata *VAR_11 = FUNC_4(VAR_10);
 unsigned long VAR_12;
 u8 VAR_13 = VAR_7->port_select;

 FUNC_3(VAR_4->data, 0, sizeof(VAR_4->data));

 VAR_7->port_select = VAR_13;
 if (VAR_4->mad_hdr.attr_mod != 0 || VAR_13 != VAR_6) {
  VAR_4->mad_hdr.status |= VAR_1;
  goto bail;
 }
 FUNC_6(&VAR_10->lock, VAR_12);
 VAR_7->tick = VAR_9->f_get_ib_cfg(VAR_11, VAR_3);
 VAR_7->sample_status = VAR_9->f_portcntr(VAR_11, VAR_2);
 VAR_7->counter_width = 4;
 VAR_7->counter_mask0_9 = VAR_0;
 VAR_7->sample_start = FUNC_1(VAR_10->pma_sample_start);
 VAR_7->sample_interval = FUNC_1(VAR_10->pma_sample_interval);
 VAR_7->tag = FUNC_0(VAR_10->pma_tag);
 VAR_7->counter_select[0] = VAR_10->pma_counter_select[0];
 VAR_7->counter_select[1] = VAR_10->pma_counter_select[1];
 VAR_7->counter_select[2] = VAR_10->pma_counter_select[2];
 VAR_7->counter_select[3] = VAR_10->pma_counter_select[3];
 VAR_7->counter_select[4] = VAR_10->pma_counter_select[4];
 FUNC_7(&VAR_10->lock, VAR_12);

bail:
 return FUNC_5((struct ib_smp *) VAR_4);
}
