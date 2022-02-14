
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ user_addr_t ;
typedef int kd_threadmap ;
typedef int boolean_t ;
struct TYPE_2__ {int kdebug_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,size_t*,int) ;
 int FUNC_2 () ;

int
FUNC_3(user_addr_t VAR_4, size_t VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 boolean_t VAR_8;
 size_t VAR_9;

 FUNC_2();

 if ((!VAR_6 && !VAR_4) || (VAR_6 && VAR_4)) {
  return VAR_0;
 }

 VAR_8 = (VAR_2.kdebug_flags & VAR_1);
 VAR_9 = VAR_3 * sizeof(kd_threadmap);

 if (VAR_8 && (VAR_5 >= VAR_9))
 {
  VAR_7 = FUNC_1(VAR_4, &VAR_5, VAR_6);

  if (VAR_7 == 0) {
   FUNC_0();
  }
 } else {
  VAR_7 = VAR_0;
 }

 return VAR_7;
}
