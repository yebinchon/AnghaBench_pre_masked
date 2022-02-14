
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sdvo_pixel_clock_range {int min; int max; } ;
struct intel_sdvo {int dummy; } ;
typedef int clocks ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct intel_sdvo*,int ,struct intel_sdvo_pixel_clock_range*,int) ;

__attribute__((used)) static bool FUNC_2(struct intel_sdvo *VAR_1,
         int *VAR_2,
         int *VAR_3)
{
 struct intel_sdvo_pixel_clock_range VAR_4;

 FUNC_0(sizeof(VAR_4) != 4);
 if (!FUNC_1(VAR_1,
      VAR_0,
      &VAR_4, sizeof(VAR_4)))
  return 0;


 *VAR_2 = VAR_4.min * 10;
 *VAR_3 = VAR_4.max * 10;
 return 1;
}
