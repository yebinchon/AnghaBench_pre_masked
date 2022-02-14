
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qib_pportdata {scalar_t__ vls_supported; TYPE_1__* dd; } ;
struct ib_smp {int status; int data; int attr_mod; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {int (* f_get_ib_table ) (struct qib_pportdata*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct qib_pportdata* FUNC_2 (int ) ;
 int FUNC_3 (struct ib_smp*) ;
 int FUNC_4 (struct qib_pportdata*,int ,int ) ;
 int FUNC_5 (struct qib_pportdata*,int ,int ) ;
 int FUNC_6 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct ib_smp *VAR_7, struct ib_device *VAR_8,
      u8 VAR_9)
{
 unsigned VAR_10 = FUNC_0(VAR_7->attr_mod) >> 16;
 struct qib_pportdata *VAR_11 = FUNC_2(FUNC_6(VAR_8, VAR_9));

 FUNC_1(VAR_7->data, 0, sizeof(VAR_7->data));

 if (VAR_11->vls_supported == VAR_4)
  VAR_7->status |= VAR_1;
 else if (VAR_10 == VAR_3)
  (void) VAR_11->dd->f_get_ib_table(VAR_11, VAR_6,
         VAR_7->data);
 else if (VAR_10 == VAR_2)
  (void) VAR_11->dd->f_get_ib_table(VAR_11, VAR_5,
         VAR_7->data);
 else
  VAR_7->status |= VAR_0;

 return FUNC_3(VAR_7);
}
