
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int URLContext ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {scalar_t__ encrypt; scalar_t__ key_info_file; int http_persistent; } ;
typedef TYPE_1__ HLSContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_1, AVIOContext **VAR_2, char *VAR_3)
{
    HLSContext *VAR_4 = VAR_1->priv_data;
    int VAR_5 = VAR_3 ? FUNC_4(VAR_3) : 0;
    int VAR_6 = 0;
    if (!*VAR_2)
        return VAR_6;
    if (!VAR_5 || !VAR_4->http_persistent || VAR_4->key_info_file || VAR_4->encrypt) {
        FUNC_2(VAR_1, VAR_2);
    }
    return VAR_6;
}
