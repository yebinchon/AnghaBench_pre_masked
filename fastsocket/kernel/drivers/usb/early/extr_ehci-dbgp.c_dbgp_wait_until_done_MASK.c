
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int pids; int control; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 () ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_5(unsigned VAR_6)
{
 u32 VAR_7, VAR_8;
 int VAR_9;
 int VAR_10 = 3;

retry:
 FUNC_4(VAR_6 | VAR_0, &VAR_5->control);
 VAR_9 = FUNC_2();
 VAR_7 = FUNC_3(&VAR_5->pids);
 VAR_8 = FUNC_0(VAR_7);

 if (VAR_9 < 0) {






  if (VAR_9 == -VAR_1 && !VAR_4)
   VAR_4 = 1;
  return VAR_9;
 }





 if ((VAR_8 == VAR_2) || (VAR_8 == VAR_3))
  FUNC_1();


 if (VAR_8 == VAR_2) {
  if (--VAR_10 > 0)
   goto retry;
 }

 return VAR_9;
}
