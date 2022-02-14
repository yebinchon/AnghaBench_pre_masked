
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int chunk_count; TYPE_1__* stsc_data; int stsc_count; } ;
struct TYPE_4__ {int first; int count; } ;
typedef TYPE_2__ MOVStreamContext ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static inline int64_t FUNC_2(MOVStreamContext *VAR_0, unsigned int VAR_1)
{
    int VAR_2;

    if (FUNC_1(VAR_1, VAR_0->stsc_count))
        VAR_2 = VAR_0->stsc_data[VAR_1 + 1].first - VAR_0->stsc_data[VAR_1].first;
    else {

        FUNC_0(VAR_0->stsc_data[VAR_1].first <= VAR_0->chunk_count);
        VAR_2 = VAR_0->chunk_count - (VAR_0->stsc_data[VAR_1].first - 1);
    }

    return VAR_0->stsc_data[VAR_1].count * (int64_t)VAR_2;
}
