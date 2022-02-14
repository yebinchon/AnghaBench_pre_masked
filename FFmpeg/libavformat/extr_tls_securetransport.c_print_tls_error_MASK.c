
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int lastErr; } ;
typedef TYPE_2__ TLSContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,char*,...) ;




__attribute__((used)) static int FUNC_2(URLContext *VAR_3, int VAR_4)
{
    TLSContext *VAR_5 = VAR_3->priv_data;
    switch (VAR_4) {
    case 130:
        return FUNC_0(VAR_1);
    case 129:
        FUNC_1(VAR_3, VAR_0, "Invalid certificate chain\n");
        return FUNC_0(VAR_2);
    case 128:
        return VAR_5->lastErr;
    default:
        FUNC_1(VAR_3, VAR_0, "IO Error: %i\n", VAR_4);
        return FUNC_0(VAR_2);
    }
    return FUNC_0(VAR_2);
}
