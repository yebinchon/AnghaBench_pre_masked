
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ extradata_size; scalar_t__ extradata; scalar_t__ codec_id; } ;
struct TYPE_9__ {int den; int num; } ;
struct TYPE_10__ {int metadata; TYPE_1__ time_base; int sample_aspect_ratio; int avg_frame_rate; int r_frame_rate; TYPE_3__* codecpar; } ;
typedef TYPE_2__ AVStream ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,int,int ,int ) ;
 int FUNC_4 (TYPE_3__*,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(AVStream *VAR_0, AVStream *VAR_1)
{
    int VAR_2;

    if (VAR_0->codecpar->codec_id || !VAR_1->codecpar->codec_id) {
        if (VAR_0->codecpar->extradata_size < VAR_1->codecpar->extradata_size) {
            if (VAR_0->codecpar->extradata) {
                FUNC_1(&VAR_0->codecpar->extradata);
                VAR_0->codecpar->extradata_size = 0;
            }
            VAR_2 = FUNC_4(VAR_0->codecpar,
                                     VAR_1->codecpar->extradata_size);
            if (VAR_2 < 0)
                return VAR_2;
        }
        FUNC_5(VAR_0->codecpar->extradata, VAR_1->codecpar->extradata,
               VAR_1->codecpar->extradata_size);
        return 0;
    }
    if ((VAR_2 = FUNC_2(VAR_0->codecpar, VAR_1->codecpar)) < 0)
        return VAR_2;
    VAR_0->r_frame_rate = VAR_1->r_frame_rate;
    VAR_0->avg_frame_rate = VAR_1->avg_frame_rate;
    VAR_0->sample_aspect_ratio = VAR_1->sample_aspect_ratio;
    FUNC_3(VAR_0, 64, VAR_1->time_base.num, VAR_1->time_base.den);

    FUNC_0(&VAR_0->metadata, VAR_1->metadata, 0);
    return 0;
}
