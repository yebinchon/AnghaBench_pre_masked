
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ib_smp {int status; scalar_t__ data; int attr_mod; } ;
struct ib_device {int dummy; } ;
typedef scalar_t__ __be64 ;
struct TYPE_4__ {TYPE_1__* dd; } ;
struct TYPE_3__ {scalar_t__ ipath_guid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (struct ib_smp*) ;
 TYPE_2__* FUNC_3 (struct ib_device*) ;

__attribute__((used)) static int FUNC_4(struct ib_smp *VAR_1,
      struct ib_device *VAR_2)
{
 u32 VAR_3 = 8 * FUNC_0(VAR_1->attr_mod);
 __be64 *VAR_4 = (__be64 *) VAR_1->data;



 FUNC_1(VAR_1->data, 0, sizeof(VAR_1->data));





 if (VAR_3 == 0) {
  __be64 VAR_5 = FUNC_3(VAR_2)->dd->ipath_guid;
  if (VAR_5 == 0)

   VAR_1->status |= VAR_0;
  else

   *VAR_4 = VAR_5;
 } else
  VAR_1->status |= VAR_0;

 return FUNC_2(VAR_1);
}
