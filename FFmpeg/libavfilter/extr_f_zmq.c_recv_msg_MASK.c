
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zmq_msg_t ;
struct TYPE_5__ {int responder; } ;
typedef TYPE_1__ ZMQContext ;
struct TYPE_6__ {TYPE_1__* priv; } ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,char*,int ) ;
 char* FUNC_2 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static int FUNC_10(AVFilterContext *VAR_6, char **VAR_7, int *VAR_8)
{
    ZMQContext *VAR_9 = VAR_6->priv;
    zmq_msg_t VAR_10;
    int VAR_11 = 0;

    if (FUNC_6(&VAR_10) == -1) {
        FUNC_1(VAR_6, VAR_1,
               "Could not initialize receive message: %s\n", FUNC_9(VAR_5));
        return VAR_0;
    }

    if (FUNC_7(&VAR_10, VAR_9->responder, VAR_4) == -1) {
        if (VAR_5 != VAR_2)
            FUNC_1(VAR_6, VAR_1,
                   "Could not receive message: %s\n", FUNC_9(VAR_5));
        VAR_11 = VAR_0;
        goto end;
    }

    *VAR_8 = FUNC_8(&VAR_10) + 1;
    *VAR_7 = FUNC_2(*VAR_8);
    if (!*VAR_7) {
        VAR_11 = FUNC_0(VAR_3);
        goto end;
    }
    FUNC_3(*VAR_7, FUNC_5(&VAR_10), *VAR_8 - 1);
    (*VAR_7)[*VAR_8-1] = 0;

end:
    FUNC_4(&VAR_10);
    return VAR_11;
}
