
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef int uint32_t ;
typedef int pid_t ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;

int
FUNC_2(uuid_t VAR_5, uint32_t VAR_6, pid_t *VAR_7)
{
 pid_t VAR_8;
 kern_return_t VAR_9;
 int VAR_10;





 VAR_9 = FUNC_1(&VAR_8);

 if (VAR_9) {
  if (VAR_9 == VAR_3)
   VAR_10 = VAR_2;
  else if (VAR_9 == VAR_4)
   VAR_10 = VAR_1;
  else
   VAR_10 = VAR_0;
  return VAR_10;
 }

 *VAR_7 = VAR_8;
 VAR_10 = FUNC_0(VAR_8, VAR_5, VAR_6);
 return VAR_10;
}
