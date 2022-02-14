
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* int64_t ;
struct TYPE_4__ {void* end_time; void* startv_time; void* start_time; } ;
typedef TYPE_1__ CCaptionSubContext ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(CCaptionSubContext *VAR_0, int64_t VAR_1)
{
    VAR_0->start_time = VAR_0->startv_time;
    VAR_0->startv_time = VAR_1;
    VAR_0->end_time = VAR_1;
    return FUNC_0(VAR_0);
}
