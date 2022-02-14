
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {int nb_index_entries; TYPE_1__* index_entries; } ;
struct TYPE_4__ {scalar_t__ timestamp; } ;
typedef TYPE_2__ AVStream ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(AVStream* VAR_0, int VAR_1, int64_t VAR_2,
                                       int64_t* VAR_3,
                                       int VAR_4) {
    int VAR_5 = 0;
    FUNC_0(VAR_1 >= 0 && VAR_1 <= VAR_0->nb_index_entries);
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        VAR_2 -= VAR_3[VAR_4 - 1 - VAR_5];
        VAR_0->index_entries[VAR_1 - 1 - VAR_5].timestamp = VAR_2;
    }
}
