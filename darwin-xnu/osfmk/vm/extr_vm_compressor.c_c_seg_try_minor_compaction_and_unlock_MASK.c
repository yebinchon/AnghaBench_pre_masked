
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* c_segment_t ;
struct TYPE_5__ {int c_lock; int c_on_minorcompact_q; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_5(c_segment_t VAR_5)
{

 FUNC_1(VAR_5->c_on_minorcompact_q);







 if ( !FUNC_3(VAR_2)) {



  VAR_3++;

  FUNC_4(&VAR_5->c_lock);
 } else {
  VAR_4++;

  FUNC_0(VAR_5);
  FUNC_2(VAR_5, VAR_1, VAR_0, VAR_0);
 }
}
