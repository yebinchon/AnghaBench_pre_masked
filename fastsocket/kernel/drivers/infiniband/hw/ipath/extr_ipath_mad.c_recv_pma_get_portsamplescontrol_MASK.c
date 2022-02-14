
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ipath_ibdev {int pending_lock; int * pma_counter_select; int pma_tag; int pma_sample_interval; int pma_sample_start; int pma_sample_status; TYPE_2__* dd; } ;
struct ipath_cregs {scalar_t__ cr_psstat; } ;
struct ib_smp {int dummy; } ;
struct ib_pma_portsamplescontrol {int port_select; int tick; int counter_width; int * counter_select; int tag; void* sample_interval; void* sample_start; int sample_status; int counter_mask0_9; } ;
struct TYPE_3__ {scalar_t__ attr_mod; int status; } ;
struct ib_pma_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {int ipath_link_speed_active; struct ipath_cregs* ipath_cregs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (struct ib_smp*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct ipath_ibdev* FUNC_7 (struct ib_device*) ;

__attribute__((used)) static int FUNC_8(struct ib_pma_mad *VAR_2,
        struct ib_device *VAR_3, u8 VAR_4)
{
 struct ib_pma_portsamplescontrol *VAR_5 =
  (struct ib_pma_portsamplescontrol *)VAR_2->data;
 struct ipath_ibdev *VAR_6 = FUNC_7(VAR_3);
 struct ipath_cregs const *VAR_7 = VAR_6->dd->ipath_cregs;
 unsigned long VAR_8;
 u8 VAR_9 = VAR_5->port_select;

 FUNC_3(VAR_2->data, 0, sizeof(VAR_2->data));

 VAR_5->port_select = VAR_9;
 if (VAR_2->mad_hdr.attr_mod != 0 ||
     (VAR_9 != VAR_4 && VAR_9 != 0xFF))
  VAR_2->mad_hdr.status |= VAR_1;
 if (VAR_7->cr_psstat)
  VAR_5->tick = VAR_6->dd->ipath_link_speed_active - 1;
 else
  VAR_5->tick = 250;
 VAR_5->counter_width = 4;
 VAR_5->counter_mask0_9 = VAR_0;
 FUNC_5(&VAR_6->pending_lock, VAR_8);
 if (VAR_7->cr_psstat)
  VAR_5->sample_status = FUNC_2(VAR_6->dd, VAR_7->cr_psstat);
 else
  VAR_5->sample_status = VAR_6->pma_sample_status;
 VAR_5->sample_start = FUNC_1(VAR_6->pma_sample_start);
 VAR_5->sample_interval = FUNC_1(VAR_6->pma_sample_interval);
 VAR_5->tag = FUNC_0(VAR_6->pma_tag);
 VAR_5->counter_select[0] = VAR_6->pma_counter_select[0];
 VAR_5->counter_select[1] = VAR_6->pma_counter_select[1];
 VAR_5->counter_select[2] = VAR_6->pma_counter_select[2];
 VAR_5->counter_select[3] = VAR_6->pma_counter_select[3];
 VAR_5->counter_select[4] = VAR_6->pma_counter_select[4];
 FUNC_6(&VAR_6->pending_lock, VAR_8);

 return FUNC_4((struct ib_smp *) VAR_2);
}
