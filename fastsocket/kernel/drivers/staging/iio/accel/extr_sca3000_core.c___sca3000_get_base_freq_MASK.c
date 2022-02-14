
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sca3000_state {int dummy; } ;
struct sca3000_chip_info {int measurement_mode_freq; int option_mode_1_freq; int option_mode_2_freq; } ;





 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (struct sca3000_state*,int ,int**,int) ;

__attribute__((used)) static inline int FUNC_2(struct sca3000_state *VAR_1,
       const struct sca3000_chip_info *VAR_2,
       int *VAR_3)
{
 int VAR_4;
 u8 *VAR_5;

 VAR_4 = FUNC_1(VAR_1, VAR_0, &VAR_5, 1);
 if (VAR_4)
  goto error_ret;
 switch (0x03 & VAR_5[1]) {
 case 130:
  *VAR_3 = VAR_2->measurement_mode_freq;
  break;
 case 129:
  *VAR_3 = VAR_2->option_mode_1_freq;
  break;
 case 128:
  *VAR_3 = VAR_2->option_mode_2_freq;
  break;
 };
 FUNC_0(VAR_5);
error_ret:
 return VAR_4;
}
