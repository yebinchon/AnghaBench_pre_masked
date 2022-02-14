
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct MpvParseContext {int pc; } ;
struct TYPE_9__ {int framerate; } ;
struct TYPE_8__ {int flags; int repeat_pict; int pict_type; struct MpvParseContext* priv_data; } ;
typedef int ParseContext ;
typedef TYPE_1__ AVCodecParserContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int,int const**,int*) ;
 int FUNC_2 (int *,char*,int ,int ,int ) ;
 int FUNC_3 (int *,int const*,int,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int const*,int) ;

__attribute__((used)) static int FUNC_5(AVCodecParserContext *VAR_1,
                           AVCodecContext *VAR_2,
                           const uint8_t **VAR_3, int *VAR_4,
                           const uint8_t *VAR_5, int VAR_6)
{
    struct MpvParseContext *VAR_7 = VAR_1->priv_data;
    ParseContext *VAR_8= &VAR_7->pc;
    int VAR_9;

    if(VAR_1->flags & VAR_0){
        VAR_9= VAR_6;
    }else{
        VAR_9= FUNC_3(VAR_8, VAR_5, VAR_6, VAR_1);

        if (FUNC_1(VAR_8, VAR_9, &VAR_5, &VAR_6) < 0) {
            *VAR_3 = ((void*)0);
            *VAR_4 = 0;
            return VAR_6;
        }

    }



    FUNC_4(VAR_1, VAR_2, VAR_5, VAR_6);
    FUNC_2(((void*)0), "pict_type=%d frame_rate=%0.3f repeat_pict=%d\n",
            VAR_1->pict_type, FUNC_0(VAR_2->framerate), VAR_1->repeat_pict);

    *VAR_3 = VAR_5;
    *VAR_4 = VAR_6;
    return VAR_9;
}
