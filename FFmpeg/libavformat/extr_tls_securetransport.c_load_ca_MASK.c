
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* priv_data; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_6__ {int ca_file; } ;
struct TYPE_8__ {int ca_array; TYPE_1__ tls_shared; } ;
typedef TYPE_3__ TLSContext ;
typedef int * CFArrayRef ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*,int ,int **) ;

__attribute__((used)) static int FUNC_4(URLContext *VAR_1)
{
    TLSContext *VAR_2 = VAR_1->priv_data;
    int VAR_3 = 0;
    CFArrayRef VAR_4 = ((void*)0);

    if ((VAR_3 = FUNC_3(VAR_1, VAR_2->tls_shared.ca_file, &VAR_4)) < 0)
        goto end;

    if (!(VAR_2->ca_array = FUNC_2(VAR_4))) {
        VAR_3 = FUNC_0(VAR_0);
        goto end;
    }

end:
    if (VAR_4)
        FUNC_1(VAR_4);
    return VAR_3;
}
