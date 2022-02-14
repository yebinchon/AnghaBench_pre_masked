
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {int nb_frames; TYPE_1__* codecpar; } ;
struct TYPE_5__ {scalar_t__ codec_type; int channels; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int,int,int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(AVIOContext *VAR_2, AVStream *VAR_3)
{
    uint64_t VAR_4 = 0;
    int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_3->nb_frames; VAR_5++) {
        uint32_t VAR_6 = FUNC_1(VAR_2);
        uint32_t VAR_7 = FUNC_1(VAR_2);
        FUNC_2(VAR_2, 8);
        FUNC_0(VAR_3, VAR_6, VAR_4, VAR_7, 0, VAR_0);
        if (VAR_3->codecpar->codec_type == VAR_1) {
            VAR_4 += VAR_7 / (VAR_3->codecpar->channels * 2);
        } else {
            VAR_4++;
        }
    }
}
