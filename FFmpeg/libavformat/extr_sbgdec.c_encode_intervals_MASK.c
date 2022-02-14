
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct ws_intervals {int nb_inter; TYPE_1__* inter; } ;
struct sbg_script {int dummy; } ;
struct TYPE_6__ {int * extradata; } ;
struct TYPE_5__ {int type; int channels; int f1; int f2; int a1; int a2; int phi; int ts2; int ts1; } ;
typedef TYPE_2__ AVCodecParameters ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_4(struct sbg_script *VAR_2, AVCodecParameters *VAR_3,
                            struct ws_intervals *VAR_4)
{
    int VAR_5, VAR_6 = 4;
    uint8_t *VAR_7;

    for (VAR_5 = 0; VAR_5 < VAR_4->nb_inter; VAR_5++) {
        VAR_6 += VAR_4->inter[VAR_5].type == 128 ? 44 :
                      VAR_4->inter[VAR_5].type == 129 ? 32 : 0;
        if (VAR_6 < 0)
            return FUNC_2(VAR_1);
    }
    if (FUNC_3(VAR_3, VAR_6))
        return FUNC_2(VAR_1);
    VAR_7 = VAR_3->extradata;



    do { FUNC_0(VAR_7, (VAR_4->nb_inter)); VAR_7 += 4; } while(0);
    for (VAR_5 = 0; VAR_5 < VAR_4->nb_inter; VAR_5++) {
        do { FUNC_0(VAR_7, (VAR_4->inter[VAR_5].ts1)); VAR_7 += 8; } while(0);
        do { FUNC_0(VAR_7, (VAR_4->inter[VAR_5].ts2)); VAR_7 += 8; } while(0);
        do { FUNC_0(VAR_7, (VAR_4->inter[VAR_5].type)); VAR_7 += 4; } while(0);
        do { FUNC_0(VAR_7, (VAR_4->inter[VAR_5].channels)); VAR_7 += 4; } while(0);
        switch (VAR_4->inter[VAR_5].type) {
            case 128:
                do { FUNC_0(VAR_7, (VAR_4->inter[VAR_5].f1)); VAR_7 += 4; } while(0);
                do { FUNC_0(VAR_7, (VAR_4->inter[VAR_5].f2)); VAR_7 += 4; } while(0);
                do { FUNC_0(VAR_7, (VAR_4->inter[VAR_5].a1)); VAR_7 += 4; } while(0);
                do { FUNC_0(VAR_7, (VAR_4->inter[VAR_5].a2)); VAR_7 += 4; } while(0);
                do { FUNC_0(VAR_7, (VAR_4->inter[VAR_5].phi)); VAR_7 += 4; } while(0);
                break;
            case 129:
                do { FUNC_0(VAR_7, (VAR_4->inter[VAR_5].a1)); VAR_7 += 4; } while(0);
                do { FUNC_0(VAR_7, (VAR_4->inter[VAR_5].a2)); VAR_7 += 4; } while(0);
                break;
        }
    }
    if (VAR_7 != VAR_3->extradata + VAR_6)
        return VAR_0;
    return 0;
}
