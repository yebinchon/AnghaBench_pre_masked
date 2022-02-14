
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {int nb_index_entries; TYPE_1__* index_entries; int pts; int * pb; } ;
typedef TYPE_2__ WtvContext ;
struct TYPE_4__ {scalar_t__ pos; int timestamp; } ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(WtvContext *VAR_2, uint64_t VAR_3)
{
    AVIOContext *VAR_4 = VAR_2->pb;
    int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_2->nb_index_entries; VAR_5++) {
        if (VAR_2->index_entries[VAR_5].pos > VAR_3) {
            int64_t VAR_6 = FUNC_1(VAR_4, VAR_2->index_entries[VAR_5].pos, VAR_1);
            if (VAR_6 < 0)
                return VAR_6;
            VAR_2->pts = VAR_2->index_entries[VAR_5].timestamp;
            return 0;
         }
     }
     return FUNC_0(VAR_0);
}
