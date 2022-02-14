
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int URLContext ;
struct TYPE_7__ {int (* io_open ) (TYPE_2__*,int **,char*,int ,int **) ;TYPE_1__* priv_data; } ;
struct TYPE_6__ {int http_persistent; } ;
typedef TYPE_1__ HLSContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int **) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int **,char*,int ,int **) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_2, AVIOContext **VAR_3, char *VAR_4,
                          AVDictionary **VAR_5)
{
    HLSContext *VAR_6 = VAR_2->priv_data;
    int VAR_7 = VAR_4 ? FUNC_3(VAR_4) : 0;
    int VAR_8 = VAR_0;
    if (!*VAR_3 || !VAR_7 || !VAR_6->http_persistent) {
        VAR_8 = VAR_2->io_open(VAR_2, VAR_3, VAR_4, VAR_1, VAR_5);
    }
    return VAR_8;
}
