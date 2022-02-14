
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int * metadata; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVDictionaryEntry ;
typedef int AVDictionary ;


 double VAR_0 ;
 TYPE_2__* FUNC_0 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_1 (int ,int *,int) ;

__attribute__((used)) static double FUNC_2(AVFrame *VAR_1, int64_t VAR_2)
{
    AVDictionary *VAR_3 = VAR_1->metadata;
    AVDictionaryEntry *VAR_4 = FUNC_0(VAR_3, "lavf.concatdec.start_time", ((void*)0), 0);
    AVDictionaryEntry *VAR_5 = FUNC_0(VAR_3, "lavf.concatdec.duration", ((void*)0), 0);
    if (VAR_4) {
        int64_t VAR_6 = FUNC_1(VAR_4->value, ((void*)0), 10);
        if (VAR_2 >= VAR_6) {
            if (VAR_5) {
              int64_t VAR_7 = FUNC_1(VAR_5->value, ((void*)0), 10);
              if (VAR_2 < VAR_6 + VAR_7)
                  return -1;
              else
                  return 0;
            }
            return -1;
        }
        return 0;
    }
    return VAR_0;
}
