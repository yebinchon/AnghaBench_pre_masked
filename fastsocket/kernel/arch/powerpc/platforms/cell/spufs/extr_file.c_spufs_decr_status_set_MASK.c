
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {int mfc_control_RW; } ;
struct TYPE_4__ {TYPE_1__ priv2; } ;
struct spu_context {TYPE_2__ csa; } ;


 int VAR_0 ;
 int FUNC_0 (struct spu_context*) ;
 int FUNC_1 (struct spu_context*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, u64 VAR_2)
{
 struct spu_context *VAR_3 = VAR_1;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  return VAR_4;
 if (VAR_2)
  VAR_3->csa.priv2.mfc_control_RW |= VAR_0;
 else
  VAR_3->csa.priv2.mfc_control_RW &= ~VAR_0;
 FUNC_1(VAR_3);

 return 0;
}
