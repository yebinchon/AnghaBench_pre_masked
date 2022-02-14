
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt312_state {int dummy; } ;
typedef int fe_spectral_inversion_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mt312_state*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct mt312_state *VAR_3,
          fe_spectral_inversion_t *VAR_4)
{
 int VAR_5;
 u8 VAR_6;

 VAR_5 = FUNC_0(VAR_3, VAR_2, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_6 & 0x80)
  *VAR_4 = (VAR_6 & 0x40) ? VAR_1 : VAR_0;

 return 0;
}
