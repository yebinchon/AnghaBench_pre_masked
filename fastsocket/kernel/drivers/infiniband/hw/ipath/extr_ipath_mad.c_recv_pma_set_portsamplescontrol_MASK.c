
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ipath_ibdev {scalar_t__ pma_sample_status; int pending_lock; void* pma_sample_start; TYPE_2__* dd; void* pma_sample_interval; int * pma_counter_select; int pma_tag; } ;
struct ipath_cregs {int cr_psstart; int cr_psinterval; scalar_t__ cr_psstat; } ;
struct ib_smp {int dummy; } ;
struct ib_pma_portsamplescontrol {scalar_t__ port_select; int * counter_select; int tag; int sample_interval; int sample_start; } ;
struct TYPE_4__ {scalar_t__ attr_mod; int status; } ;
struct ib_pma_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct ib_device {int dummy; } ;
struct TYPE_5__ {struct ipath_cregs* ipath_cregs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int ,void*) ;
 int FUNC_4 (struct ib_pma_mad*,struct ib_device*,scalar_t__) ;
 int FUNC_5 (struct ib_smp*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct ipath_ibdev* FUNC_8 (struct ib_device*) ;

__attribute__((used)) static int FUNC_9(struct ib_pma_mad *VAR_3,
        struct ib_device *VAR_4, u8 VAR_5)
{
 struct ib_pma_portsamplescontrol *VAR_6 =
  (struct ib_pma_portsamplescontrol *)VAR_3->data;
 struct ipath_ibdev *VAR_7 = FUNC_8(VAR_4);
 struct ipath_cregs const *VAR_8 = VAR_7->dd->ipath_cregs;
 unsigned long VAR_9;
 u8 VAR_10;
 int VAR_11;

 if (VAR_3->mad_hdr.attr_mod != 0 ||
     (VAR_6->port_select != VAR_5 && VAR_6->port_select != 0xFF)) {
  VAR_3->mad_hdr.status |= VAR_2;
  VAR_11 = FUNC_5((struct ib_smp *) VAR_3);
  goto bail;
 }

 FUNC_6(&VAR_7->pending_lock, VAR_9);
 if (VAR_8->cr_psstat)
  VAR_10 = FUNC_2(VAR_7->dd, VAR_8->cr_psstat);
 else
  VAR_10 = VAR_7->pma_sample_status;
 if (VAR_10 == VAR_0) {
  VAR_7->pma_sample_start = FUNC_1(VAR_6->sample_start);
  VAR_7->pma_sample_interval = FUNC_1(VAR_6->sample_interval);
  VAR_7->pma_tag = FUNC_0(VAR_6->tag);
  VAR_7->pma_counter_select[0] = VAR_6->counter_select[0];
  VAR_7->pma_counter_select[1] = VAR_6->counter_select[1];
  VAR_7->pma_counter_select[2] = VAR_6->counter_select[2];
  VAR_7->pma_counter_select[3] = VAR_6->counter_select[3];
  VAR_7->pma_counter_select[4] = VAR_6->counter_select[4];
  if (VAR_8->cr_psstat) {
   FUNC_3(VAR_7->dd, VAR_8->cr_psinterval,
      VAR_7->pma_sample_interval);
   FUNC_3(VAR_7->dd, VAR_8->cr_psstart,
      VAR_7->pma_sample_start);
  } else
   VAR_7->pma_sample_status = VAR_1;
 }
 FUNC_7(&VAR_7->pending_lock, VAR_9);

 VAR_11 = FUNC_4(VAR_3, VAR_4, VAR_5);

bail:
 return VAR_11;
}
