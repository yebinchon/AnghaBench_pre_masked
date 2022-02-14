
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_5__ {int id; int capabilities; } ;
typedef TYPE_1__ AVCodec ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (void**) ;
 int FUNC_1 (int) ;

__attribute__((used)) static AVCodec *FUNC_2(enum AVCodecID VAR_1, int (*VAR_2)(const AVCodec *))
{
    const AVCodec *VAR_3, *VAR_4 = ((void*)0);
    void *VAR_5 = 0;

    VAR_1 = FUNC_1(VAR_1);

    while ((VAR_3 = FUNC_0(&VAR_5))) {
        if (!VAR_2(VAR_3))
            continue;
        if (VAR_3->id == VAR_1) {
            if (VAR_3->capabilities & VAR_0 && !VAR_4) {
                VAR_4 = VAR_3;
            } else
                return (AVCodec*)VAR_3;
        }
    }

    return (AVCodec*)VAR_4;
}
