
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* buf_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {int b_vp; int b_flags; struct TYPE_5__* b_trans_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,void*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(buf_t *VAR_7, void *VAR_8, int *VAR_9, int VAR_10, int VAR_11)
{
        buf_t VAR_12;
 int VAR_13;
 boolean_t VAR_14 = VAR_5;






        if (VAR_11) {
         for (VAR_12 = *VAR_7; VAR_12; VAR_12 = VAR_12->b_trans_next)
          FUNC_0(VAR_12);
 }





 for (VAR_12 = *VAR_7; VAR_12; VAR_12 = VAR_12->b_trans_next)
  VAR_12->b_flags |= VAR_0;
 VAR_12 = *VAR_7;

 if ((VAR_10 & (VAR_1 | VAR_3)) == VAR_3 && FUNC_2(VAR_12->b_vp))
  VAR_14 = VAR_6;

 VAR_13 = FUNC_1(VAR_12, VAR_8);

 if ( !(VAR_10 & VAR_1) && VAR_13 && *VAR_9 == 0) {
  if (((VAR_10 & (VAR_3 | VAR_2)) != VAR_3) || (VAR_13 != VAR_4))
   *VAR_9 = VAR_13;
  else if (VAR_14 == VAR_6)
   *VAR_9 = VAR_13;
 }
 *VAR_7 = (buf_t)((void*)0);
}
