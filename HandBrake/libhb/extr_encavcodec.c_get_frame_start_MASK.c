
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {TYPE_1__* frame_info; } ;
typedef TYPE_2__ hb_work_private_t ;
struct TYPE_4__ {int start; } ;


 int VAR_0 ;

__attribute__((used)) static int64_t FUNC_0( hb_work_private_t * VAR_1, int64_t VAR_2 )
{
    int VAR_3 = VAR_2 & VAR_0;
    return VAR_1->frame_info[VAR_3].start;
}
