
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
 int FUNC_1 (TYPE_1__*,int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_2)
{
    LIBSMBContext *VAR_3 = VAR_2->priv_data;
    int VAR_4;

    if ((VAR_4 = FUNC_3(VAR_2)) < 0)
        goto fail;

    if ((VAR_3->dh = FUNC_4(VAR_2->filename)) < 0) {
        VAR_4 = FUNC_0(VAR_1);
        FUNC_1(VAR_2, VAR_0, "Error opening dir: %s\n", FUNC_5(VAR_1));
        goto fail;
    }

    return 0;

  fail:
    FUNC_2(VAR_2);
    return VAR_4;
}
