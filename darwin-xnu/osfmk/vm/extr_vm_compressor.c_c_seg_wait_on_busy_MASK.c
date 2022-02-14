
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int event_t ;
typedef TYPE_1__* c_segment_t ;
struct TYPE_3__ {int c_wanted; int c_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

void
FUNC_3(c_segment_t VAR_2)
{
 VAR_2->c_wanted = 1;
 FUNC_0((event_t) (VAR_2), VAR_1);

 FUNC_1(&VAR_2->c_lock);
 FUNC_2(VAR_0);
}
