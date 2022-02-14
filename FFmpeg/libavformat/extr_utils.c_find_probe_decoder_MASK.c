
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_8__ {int capabilities; int id; } ;
typedef int AVStream ;
typedef int AVFormatContext ;
typedef TYPE_1__ AVCodec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*) ;
 TYPE_1__ const* FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static const AVCodec *FUNC_4(AVFormatContext *VAR_3, const AVStream *VAR_4, enum AVCodecID VAR_5)
{
    const AVCodec *VAR_6;
    VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_5);
    if (!VAR_6)
        return ((void*)0);

    if (VAR_6->capabilities & VAR_0) {
        const AVCodec *VAR_7 = ((void*)0);
        while ((VAR_7 = FUNC_1(VAR_7))) {
            if (VAR_7->id == VAR_5 &&
                    FUNC_0(VAR_7) &&
                    !(VAR_7->capabilities & (VAR_0 | VAR_1))) {
                return VAR_7;
            }
        }
    }

    return VAR_6;
}
