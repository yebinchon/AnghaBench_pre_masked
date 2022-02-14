
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt312_state {int dummy; } ;
typedef int fe_code_rate_t ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mt312_state*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct mt312_state *VAR_8, fe_code_rate_t *VAR_9)
{
 const fe_code_rate_t VAR_10[8] =
     { VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
  VAR_6, VAR_6 };

 int VAR_11;
 u8 VAR_12;

 VAR_11 = FUNC_0(VAR_8, VAR_7, &VAR_12);
 if (VAR_11 < 0)
  return VAR_11;

 *VAR_9 = VAR_10[(VAR_12 >> 4) & 0x07];

 return 0;
}
