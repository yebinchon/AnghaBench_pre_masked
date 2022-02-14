
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_smp {int data; } ;
struct TYPE_3__ {scalar_t__ mgmt_class; scalar_t__ method; scalar_t__ attr_id; } ;
struct ib_mad {TYPE_1__ mad_hdr; } ;
struct ib_device {int node_desc; } ;
struct TYPE_4__ {int cap_mask_mutex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (struct ib_device*) ;

__attribute__((used)) static void FUNC_4(struct ib_device *VAR_4,
          struct ib_mad *VAR_5)
{
 if ((VAR_5->mad_hdr.mgmt_class == VAR_1 ||
      VAR_5->mad_hdr.mgmt_class == VAR_0) &&
     VAR_5->mad_hdr.method == VAR_2 &&
     VAR_5->mad_hdr.attr_id == VAR_3) {
  FUNC_1(&FUNC_3(VAR_4)->cap_mask_mutex);
  FUNC_0(((struct ib_smp *) VAR_5)->data, VAR_4->node_desc, 64);
  FUNC_2(&FUNC_3(VAR_4)->cap_mask_mutex);
 }
}
