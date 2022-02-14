
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_sdvo {int dummy; } ;
typedef int state ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct intel_sdvo*,int ,int *,int) ;

__attribute__((used)) static bool FUNC_1(struct intel_sdvo *VAR_5,
            int VAR_6)
{
 u8 VAR_7 = VAR_2;

 switch (VAR_6) {
 case 130:
  VAR_7 = VAR_2;
  break;
 case 129:
  VAR_7 = VAR_3;
  break;
 case 128:
  VAR_7 = VAR_4;
  break;
 case 131:
  VAR_7 = VAR_1;
  break;
 }

 return FUNC_0(VAR_5,
        VAR_0, &VAR_7, sizeof(VAR_7));
}
