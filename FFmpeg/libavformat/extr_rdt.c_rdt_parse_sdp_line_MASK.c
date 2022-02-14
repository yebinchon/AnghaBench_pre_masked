
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int nb_streams; TYPE_2__** streams; } ;
struct TYPE_9__ {scalar_t__ id; int index; int first_dts; } ;
struct TYPE_8__ {int nb_rmst; int * rmst; int mlti_data_size; int mlti_data; } ;
typedef TYPE_1__ PayloadContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int **,int) ;
 scalar_t__ FUNC_3 (char const*,char*,char const**) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_7 (int *,char const*) ;

__attribute__((used)) static int
FUNC_8 (AVFormatContext *VAR_1, int VAR_2,
                    PayloadContext *VAR_3, const char *VAR_4)
{
    AVStream *VAR_5 = VAR_1->streams[VAR_2];
    const char *VAR_6 = VAR_4;

    if (FUNC_3(VAR_6, "OpaqueData:buffer;", &VAR_6)) {
        VAR_3->mlti_data = FUNC_7(&VAR_3->mlti_data_size, VAR_6);
    } else if (FUNC_3(VAR_6, "StartTime:integer;", &VAR_6))
        VAR_5->first_dts = FUNC_1(VAR_6);
    else if (FUNC_3(VAR_6, "ASMRuleBook:string;", &VAR_6)) {
        int VAR_7, VAR_8 = -1;

        for (VAR_7 = 0; VAR_7 < VAR_1->nb_streams; VAR_7++)
            if (VAR_1->streams[VAR_7]->id == VAR_5->id) {
                int VAR_9 = VAR_1->streams[VAR_7]->index + 1, VAR_10;
                if (VAR_8 == -1) VAR_8 = VAR_7;
                if (VAR_3->nb_rmst < VAR_9) {
                    if ((VAR_10 = FUNC_2(&VAR_3->rmst,
                                           VAR_9 * sizeof(*VAR_3->rmst))) < 0) {
                        VAR_3->nb_rmst = 0;
                        return VAR_10;
                    }
                    FUNC_5(VAR_3->rmst + VAR_3->nb_rmst, 0,
                           (VAR_9 - VAR_3->nb_rmst) * sizeof(*VAR_3->rmst));
                    VAR_3->nb_rmst = VAR_9;
                }
                VAR_3->rmst[VAR_1->streams[VAR_7]->index] = FUNC_4();
                if (!VAR_3->rmst[VAR_1->streams[VAR_7]->index])
                    return FUNC_0(VAR_0);
                FUNC_6(VAR_3, VAR_1->streams[VAR_7], (VAR_7 - VAR_8) * 2);
           }
    }

    return 0;
}
