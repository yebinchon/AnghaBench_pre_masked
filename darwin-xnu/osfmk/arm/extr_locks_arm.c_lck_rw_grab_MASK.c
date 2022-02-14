
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {int lck_rw_data; } ;
typedef TYPE_1__ lck_rw_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int*,int ) ;
 scalar_t__ FUNC_2 (int *,int,int,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 () ;
 int VAR_9 ;
 int FUNC_6 () ;

__attribute__((used)) static boolean_t
FUNC_7(lck_rw_t *VAR_10, int VAR_11, boolean_t VAR_12)
{
 uint64_t VAR_13 = 0;
 uint32_t VAR_14, VAR_15;
 boolean_t VAR_16;





 VAR_12 = VAR_0;


 for ( ; ; ) {
  VAR_14 = FUNC_1(&VAR_10->lck_rw_data, &VAR_15, VAR_9);
  if (VAR_14 & VAR_2) {
   FUNC_0();
   FUNC_4(VAR_10);
   continue;
  }
  VAR_16 = VAR_0;
  if (VAR_11 == VAR_1) {
   if ((VAR_14 & VAR_6) == 0) {
    VAR_14 |= VAR_6;
    VAR_16 = VAR_8;
   }
  } else {
   if (((VAR_14 & (VAR_6 | VAR_7)) == 0) ||
    (((VAR_14 & VAR_4)) && ((VAR_14 & VAR_3) == 0))) {
    VAR_14 += VAR_5;
    VAR_16 = VAR_8;
   }
  }
  if (VAR_16) {
   if (FUNC_2(&VAR_10->lck_rw_data, VAR_15, VAR_14, VAR_9))
    return VAR_8;
  } else {
   if (VAR_12)
    FUNC_6();
   else
    FUNC_0();
   if (!VAR_12 || (FUNC_5() >= VAR_13))
    return VAR_0;
  }
 }
}
