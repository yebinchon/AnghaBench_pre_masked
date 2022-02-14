
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int subpixel_order; } ;
struct TYPE_12__ {int interlace_allowed; TYPE_2__ display_info; scalar_t__ doublescan_allowed; int connector_type; } ;
struct TYPE_10__ {TYPE_5__ base; int get_hw_state; } ;
struct intel_sdvo_connector {TYPE_3__ base; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_11__ {TYPE_1__ base; } ;
struct intel_sdvo {TYPE_4__ base; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int *) ;
 int FUNC_1 (int ,TYPE_5__*,int *,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(struct intel_sdvo_connector *VAR_4,
     struct intel_sdvo *VAR_5)
{
 FUNC_1(VAR_5->base.base.dev,
      &VAR_4->base.base,
      &VAR_1,
      VAR_4->base.base.connector_type);

 FUNC_0(&VAR_4->base.base,
     &VAR_3);

 VAR_4->base.base.interlace_allowed = 1;
 VAR_4->base.base.doublescan_allowed = 0;
 VAR_4->base.base.display_info.subpixel_order = VAR_0;
 VAR_4->base.get_hw_state = VAR_2;

 FUNC_3(&VAR_4->base, &VAR_5->base);
 FUNC_2(&VAR_4->base.base);
}
