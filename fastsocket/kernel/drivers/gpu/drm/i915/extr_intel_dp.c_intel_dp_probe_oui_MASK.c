
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_dp {int* dpcd; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct intel_dp*,int ,int *,int) ;
 int FUNC_2 (struct intel_dp*,int) ;
 int FUNC_3 (struct intel_dp*) ;

__attribute__((used)) static void
FUNC_4(struct intel_dp *VAR_4)
{
 u8 VAR_5[3];

 if (!(VAR_4->dpcd[VAR_1] & VAR_2))
  return;

 FUNC_3(VAR_4);

 if (FUNC_1(VAR_4, VAR_3, VAR_5, 3))
  FUNC_0("Sink OUI: %02hx%02hx%02hx\n",
         VAR_5[0], VAR_5[1], VAR_5[2]);

 if (FUNC_1(VAR_4, VAR_0, VAR_5, 3))
  FUNC_0("Branch OUI: %02hx%02hx%02hx\n",
         VAR_5[0], VAR_5[1], VAR_5[2]);

 FUNC_2(VAR_4, 0);
}
