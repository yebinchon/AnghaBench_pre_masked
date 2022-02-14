
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* priv_data; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_6__ {int key_file; int cert_file; } ;
struct TYPE_8__ {int ssl_context; TYPE_1__ tls_shared; } ;
typedef TYPE_3__ TLSContext ;
typedef int SecKeyRef ;
typedef int * SecIdentityRef ;
typedef int SecCertificateRef ;
typedef int * CFMutableArrayRef ;
typedef int * CFArrayRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int ,int *) ;
 int * FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int **) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(URLContext *VAR_3)
{
    TLSContext *VAR_4 = VAR_3->priv_data;
    int VAR_5 = 0;
    CFArrayRef VAR_6 = ((void*)0);
    CFArrayRef VAR_7 = ((void*)0);
    SecIdentityRef VAR_8 = ((void*)0);
    CFMutableArrayRef VAR_9 = ((void*)0);

    if ((VAR_5 = FUNC_7(VAR_3, VAR_4->tls_shared.cert_file, &VAR_6)) < 0)
        goto end;

    if ((VAR_5 = FUNC_7(VAR_3, VAR_4->tls_shared.key_file, &VAR_7)) < 0)
        goto end;

    if (!(VAR_8 = FUNC_6(VAR_2,
                                 (SecCertificateRef)FUNC_2(VAR_6, 0),
                                 (SecKeyRef)FUNC_2(VAR_7, 0)))) {
        VAR_5 = VAR_0;
        goto end;
    }

    if (!(VAR_9 = FUNC_1(VAR_2, 0, VAR_6))) {
        VAR_5 = FUNC_0(VAR_1);
        goto end;
    }

    FUNC_3(VAR_9, 0, VAR_8);

    FUNC_5(VAR_4->ssl_context, VAR_9);

end:
    if (VAR_6)
        FUNC_4(VAR_6);
    if (VAR_7)
        FUNC_4(VAR_7);
    if (VAR_9)
        FUNC_4(VAR_9);
    if (VAR_8)
        FUNC_4(VAR_8);
    return VAR_5;
}
