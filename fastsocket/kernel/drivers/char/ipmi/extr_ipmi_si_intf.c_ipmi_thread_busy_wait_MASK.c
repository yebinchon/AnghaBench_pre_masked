
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct smi_info {size_t intf_num; } ;
typedef enum si_sm_result { ____Placeholder_si_sm_result } si_sm_result ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timespec*) ;
 int FUNC_1 (struct timespec*) ;
 int FUNC_2 (struct timespec*) ;
 unsigned int* VAR_2 ;
 size_t VAR_3 ;
 int FUNC_3 (struct timespec*,unsigned int) ;
 scalar_t__ FUNC_4 (struct timespec*,struct timespec*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(enum si_sm_result VAR_4,
    const struct smi_info *VAR_5,
    struct timespec *VAR_6)
{
 unsigned int VAR_7 = 0;

 if (VAR_5->intf_num < VAR_3)
  VAR_7 = VAR_2[VAR_5->intf_num];
 if (VAR_7 == 0 || VAR_4 != VAR_1)
  FUNC_2(VAR_6);
 else if (!FUNC_1(VAR_6)) {
  FUNC_0(VAR_6);
  FUNC_3(VAR_6, VAR_7*VAR_0);
 } else {
  struct timespec VAR_8;
  FUNC_0(&VAR_8);
  if (FUNC_5(FUNC_4(&VAR_8, VAR_6) > 0)) {
   FUNC_2(VAR_6);
   return 0;
  }
 }
 return 1;
}
