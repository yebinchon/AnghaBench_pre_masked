
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_encoder {int dummy; } ;
struct intel_crt {TYPE_2__* connector; } ;
struct TYPE_3__ {int dpms; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int FUNC_0 (struct intel_encoder*,int ) ;
 struct intel_crt* FUNC_1 (struct intel_encoder*) ;

__attribute__((used)) static void FUNC_2(struct intel_encoder *VAR_0)
{
 struct intel_crt *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_0, VAR_1->connector->base.dpms);
}
