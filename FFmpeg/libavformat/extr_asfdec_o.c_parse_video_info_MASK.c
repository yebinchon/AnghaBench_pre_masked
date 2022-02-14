
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {TYPE_1__* codecpar; } ;
struct TYPE_5__ {unsigned int codec_tag; scalar_t__ extradata_size; scalar_t__ extradata; int codec_id; void* height; void* width; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int VAR_4 ;
 int FUNC_7 (int ,unsigned int) ;
 unsigned int FUNC_8 (int *,TYPE_2__*,scalar_t__*) ;
 int FUNC_9 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(AVIOContext *VAR_5, AVStream *VAR_6)
{
    uint16_t VAR_7;
    uint32_t VAR_8;
    unsigned int VAR_9;

    VAR_6->codecpar->width = FUNC_5(VAR_5);
    VAR_6->codecpar->height = FUNC_5(VAR_5);
    FUNC_6(VAR_5, 1);
    VAR_7 = FUNC_4(VAR_5);
    VAR_9 = FUNC_8(VAR_5, VAR_6, &VAR_8);
    VAR_6->codecpar->codec_tag = VAR_9;
    VAR_6->codecpar->codec_id = FUNC_7(VAR_4, VAR_9);
    VAR_8 = FUNC_1(VAR_7, VAR_8);

    if (VAR_8 > VAR_1 &&
        VAR_8 < VAR_3 - VAR_0) {
        int VAR_10;
        VAR_6->codecpar->extradata_size = VAR_8 - VAR_1;
        if (!(VAR_6->codecpar->extradata = FUNC_2(VAR_6->codecpar->extradata_size +
                                               VAR_0))) {
            VAR_6->codecpar->extradata_size = 0;
            return FUNC_0(VAR_2);
        }
        FUNC_9(VAR_6->codecpar->extradata + VAR_6->codecpar->extradata_size , 0,
               VAR_0);
        if ((VAR_10 = FUNC_3(VAR_5, VAR_6->codecpar->extradata,
                             VAR_6->codecpar->extradata_size)) < 0)
            return VAR_10;
    }
    return 0;
}
