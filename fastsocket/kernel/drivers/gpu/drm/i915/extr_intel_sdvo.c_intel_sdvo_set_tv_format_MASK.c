
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct intel_sdvo_tv_format {int dummy; } ;
struct intel_sdvo {int tv_format_index; } ;
typedef int format_map ;
typedef int format ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct intel_sdvo*,int ,struct intel_sdvo_tv_format*,int) ;
 int FUNC_2 (struct intel_sdvo_tv_format*,int*,int ) ;
 int FUNC_3 (struct intel_sdvo_tv_format*,int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static bool FUNC_5(struct intel_sdvo *VAR_1)
{
 struct intel_sdvo_tv_format VAR_2;
 uint32_t VAR_3;

 VAR_3 = 1 << VAR_1->tv_format_index;
 FUNC_3(&VAR_2, 0, sizeof(VAR_2));
 FUNC_2(&VAR_2, &VAR_3, FUNC_4(sizeof(VAR_2), sizeof(VAR_3)));

 FUNC_0(sizeof(VAR_2) != 6);
 return FUNC_1(VAR_1,
        VAR_0,
        &VAR_2, sizeof(VAR_2));
}
