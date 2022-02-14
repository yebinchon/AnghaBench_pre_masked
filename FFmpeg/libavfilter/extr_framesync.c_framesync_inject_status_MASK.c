
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {TYPE_1__* in; } ;
struct TYPE_6__ {int have_next; scalar_t__ state; scalar_t__ after; int pts_next; int * frame_next; scalar_t__ sync; int pts; } ;
typedef TYPE_2__ FFFrameSync ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,unsigned int,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(FFFrameSync *VAR_3, unsigned VAR_4, int VAR_5, int64_t VAR_6)
{
    FUNC_0(!VAR_3->in[VAR_4].have_next);
    VAR_6 = VAR_3->in[VAR_4].state != VAR_2 || VAR_3->in[VAR_4].after == VAR_0
        ? VAR_1 : FUNC_1(VAR_3, VAR_4, VAR_3->in[VAR_4].pts);
    VAR_3->in[VAR_4].sync = 0;
    FUNC_2(VAR_3);
    VAR_3->in[VAR_4].frame_next = ((void*)0);
    VAR_3->in[VAR_4].pts_next = VAR_6;
    VAR_3->in[VAR_4].have_next = 1;
}
