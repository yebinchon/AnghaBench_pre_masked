
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* c_segment_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {int c_lock; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(c_segment_t VAR_5)
{
 boolean_t VAR_6 = VAR_1;

 if ( !FUNC_4(VAR_3)) {
  FUNC_0(VAR_5);

  FUNC_5(&VAR_5->c_lock);
  FUNC_3(VAR_3);
  FUNC_3(&VAR_5->c_lock);

  VAR_6 = VAR_2;
 }
 FUNC_2(VAR_5, VAR_0, VAR_1);

 VAR_4++;

 FUNC_5(VAR_3);

 if (VAR_6 == VAR_2)
  FUNC_1(VAR_5);
}
