
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_2__ {int divisor; int (* filter ) (void*,void*,int,int ,int*,int ) ;int (* nofilter ) (void*,void*,int,int ) ;int src_sps; int overlap_area; int cur_pos; scalar_t__ can_be_filtered; } ;
typedef int INT32 ;


 int FUNC_0 (char*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (void*,void*,int,int ,int*,int ) ;
 int FUNC_2 (void*,void*,int,int ) ;

INT32 FUNC_3 (void *VAR_1, UINT32 VAR_2, void *VAR_3)
{
    UINT32 VAR_4;




    if (VAR_0->can_be_filtered) {
        VAR_4 = (*VAR_0->filter) (VAR_1, VAR_3, (VAR_2 / VAR_0->divisor),
                                              VAR_0->src_sps, (INT32 *) &(VAR_0->cur_pos), VAR_0->overlap_area);
    } else {
        VAR_4 = (*VAR_0->nofilter) (VAR_1, VAR_3,
                                                (VAR_2 / VAR_0->divisor), VAR_0->src_sps);
    }





    return (VAR_4);
}
