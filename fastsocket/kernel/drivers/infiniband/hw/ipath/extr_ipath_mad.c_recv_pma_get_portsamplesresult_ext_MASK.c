
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ipath_ibdev {scalar_t__ pma_tag; scalar_t__ pma_sample_status; int * pma_counter_select; TYPE_1__* dd; } ;
struct ipath_cregs {scalar_t__ cr_psstat; } ;
struct ib_smp {int dummy; } ;
struct ib_pma_portsamplesresult_ext {int * counter; int extended_width; void* sample_status; void* tag; } ;
struct ib_pma_mad {scalar_t__ data; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {struct ipath_cregs* ipath_cregs; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ipath_ibdev*,struct ipath_cregs const*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (struct ib_smp*) ;
 struct ipath_ibdev* FUNC_8 (struct ib_device*) ;

__attribute__((used)) static int FUNC_9(struct ib_pma_mad *VAR_1,
           struct ib_device *VAR_2)
{
 struct ib_pma_portsamplesresult_ext *VAR_3 =
  (struct ib_pma_portsamplesresult_ext *)VAR_1->data;
 struct ipath_ibdev *VAR_4 = FUNC_8(VAR_2);
 struct ipath_cregs const *VAR_5 = VAR_4->dd->ipath_cregs;
 u8 VAR_6;
 int VAR_7;

 FUNC_6(VAR_1->data, 0, sizeof(VAR_1->data));
 VAR_3->tag = FUNC_1(VAR_4->pma_tag);
 if (VAR_5->cr_psstat)
  VAR_6 = FUNC_5(VAR_4->dd, VAR_5->cr_psstat);
 else
  VAR_6 = VAR_4->pma_sample_status;
 VAR_3->sample_status = FUNC_1(VAR_6);

 VAR_3->extended_width = FUNC_2(0x80000000);
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4->pma_counter_select); VAR_7++)
  VAR_3->counter[VAR_7] = (VAR_6 != VAR_0) ? 0 :
      FUNC_3(
   FUNC_4(VAR_4, VAR_5, VAR_4->pma_counter_select[VAR_7]));

 return FUNC_7((struct ib_smp *) VAR_1);
}
