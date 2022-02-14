
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int filename; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_8__ {int dh; } ;
typedef TYPE_2__ LIBSMBContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(URLContext *VAR_1, URLContext *VAR_2)
{
    LIBSMBContext *VAR_3 = VAR_1->priv_data;
    int VAR_4;

    if ((VAR_4 = FUNC_2(VAR_1)) < 0)
        goto cleanup;

    if ((VAR_3->dh = FUNC_3(VAR_1->filename, VAR_2->filename)) < 0) {
        VAR_4 = FUNC_0(VAR_0);
        goto cleanup;
    }

    VAR_4 = 0;

cleanup:
    FUNC_1(VAR_1);
    return VAR_4;
}
