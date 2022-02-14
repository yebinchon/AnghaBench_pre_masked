
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drm_i915_private {int crt_ddc_pin; } ;
struct bdb_header {int dummy; } ;
struct bdb_general_definitions {int crt_ddc_gmbus_pin; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 struct bdb_general_definitions* FUNC_1 (struct bdb_header*,int ) ;
 int FUNC_2 (struct bdb_general_definitions*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct drm_i915_private *VAR_1,
     struct bdb_header *VAR_2)
{
 struct bdb_general_definitions *VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (VAR_3) {
  u16 VAR_4 = FUNC_2(VAR_3);
  if (VAR_4 >= sizeof(*VAR_3)) {
   int VAR_5 = VAR_3->crt_ddc_gmbus_pin;
   FUNC_0("crt_ddc_bus_pin: %d\n", VAR_5);
   if (FUNC_3(VAR_5))
    VAR_1->crt_ddc_pin = VAR_5;
  } else {
   FUNC_0("BDB_GD too small (%d). Invalid.\n",
          VAR_4);
  }
 }
}
