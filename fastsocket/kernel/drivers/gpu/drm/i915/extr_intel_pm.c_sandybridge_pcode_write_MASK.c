
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int hw_lock; } ;
struct drm_i915_private {TYPE_1__ rps; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int,int) ;

int FUNC_7(struct drm_i915_private *VAR_5, u8 VAR_6, u32 VAR_7)
{
 FUNC_4(!FUNC_5(&VAR_5->rps.hw_lock));

 if (FUNC_2(VAR_3) & VAR_4) {
  FUNC_0("warning: pcode (write) mailbox access failed\n");
  return -VAR_0;
 }

 FUNC_3(VAR_2, VAR_7);
 FUNC_3(VAR_3, VAR_4 | VAR_6);

 if (FUNC_6((FUNC_2(VAR_3) & VAR_4) == 0,
       500)) {
  FUNC_1("timeout waiting for pcode write (%d) to finish\n", VAR_6);
  return -VAR_1;
 }

 FUNC_3(VAR_2, 0);

 return 0;
}
