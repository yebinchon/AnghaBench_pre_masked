
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct smi_info {int si_lock; } ;
typedef enum si_sm_result { ____Placeholder_si_sm_result } si_sm_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct timespec*) ;
 int FUNC_1 (int,struct smi_info*,struct timespec*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct smi_info*,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(void *VAR_4)
{
 struct smi_info *VAR_5 = VAR_4;
 unsigned long VAR_6;
 enum si_sm_result VAR_7;
 struct timespec VAR_8;

 FUNC_0(&VAR_8);

 FUNC_5(VAR_3, 19);
 while (!FUNC_2()) {
  int VAR_9;

  FUNC_7(&(VAR_5->si_lock), VAR_6);
  VAR_7 = FUNC_6(VAR_5, 0);
  FUNC_8(&(VAR_5->si_lock), VAR_6);
  VAR_9 = FUNC_1(VAR_7, VAR_5,
        &VAR_8);

  if (VAR_7 == VAR_0)
   ;
  else if (VAR_7 == VAR_1 && VAR_9)
   FUNC_3();
  else if (VAR_7 == VAR_2)
   FUNC_4(100);
  else
   FUNC_4(1);
 }
 return 0;
}
