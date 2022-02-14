
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * client; } ;
typedef TYPE_1__ OPENMAX_JPEG_DECODER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

int
FUNC_9(OPENMAX_JPEG_DECODER ** VAR_5)
{
    *VAR_5 = FUNC_3(sizeof(OPENMAX_JPEG_DECODER));
    if (VAR_5[0] == ((void*)0)) {
 FUNC_5("malloc decoder");
 return VAR_1;
    }
    FUNC_4(*VAR_5, 0, sizeof(OPENMAX_JPEG_DECODER));

    if ((VAR_5[0]->client = FUNC_2()) == ((void*)0)) {
 FUNC_5("ilclient_init");
 return VAR_0;
    }

    if (FUNC_0() != VAR_4) {
 FUNC_1(VAR_5[0]->client);
 FUNC_5("OMX_Init");
 return VAR_2;
    }

    int VAR_6 = FUNC_6(VAR_5[0]);
    if (VAR_6 != VAR_3)
 return VAR_6;

    VAR_6 = FUNC_7(VAR_5[0]);
    if (VAR_6 != VAR_3)
 return VAR_6;

    VAR_6 = FUNC_8(VAR_5[0]);
    if (VAR_6 != VAR_3)
 return VAR_6;

    return VAR_3;
}
