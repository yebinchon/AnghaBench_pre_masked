
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int errbuf ;
struct TYPE_6__ {int * priv_data; } ;
typedef int DASHContext ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,char*,char*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,char*,char*,...) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int **,char*,int **) ;
 int FUNC_7 (TYPE_1__*,int **) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int **,int *) ;

__attribute__((used)) static void FUNC_10(AVFormatContext *VAR_4, char *VAR_5) {
    DASHContext *VAR_6 = VAR_4->priv_data;
    int VAR_7 = FUNC_8(VAR_5);

    if (VAR_7) {
        AVIOContext *VAR_8 = ((void*)0);
        AVDictionary *VAR_9 = ((void*)0);

        FUNC_9(&VAR_9, VAR_6);
        FUNC_2(&VAR_9, "method", "DELETE", 0);

        if (FUNC_6(VAR_4, &VAR_8, VAR_5, &VAR_9) < 0) {
            FUNC_3(VAR_4, VAR_1, "failed to delete %s\n", VAR_5);
        }

        FUNC_1(&VAR_9);
        FUNC_7(VAR_4, &VAR_8);
    } else {
        int VAR_10 = FUNC_5(VAR_5);
        if (VAR_10 < 0) {
            char VAR_11[VAR_0];
            FUNC_4(VAR_10, VAR_11, sizeof(VAR_11));
            FUNC_3(VAR_4, (VAR_10 == FUNC_0(VAR_3) ? VAR_2 : VAR_1), "failed to delete %s: %s\n", VAR_5, VAR_11);
        }
    }
}
