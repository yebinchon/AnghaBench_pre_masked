
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ VAStatus ;
typedef int VADisplay ;
struct TYPE_8__ {TYPE_1__* hwctx; } ;
struct TYPE_7__ {int display; } ;
typedef TYPE_1__ AVVAAPIDeviceContext ;
typedef TYPE_2__ AVHWDeviceContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,char*,int,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int*,int*) ;
 int FUNC_4 (int ,int *,TYPE_2__*) ;
 int FUNC_5 (int ,int *,TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(AVHWDeviceContext *VAR_6,
                                VADisplay VAR_7)
{
    AVVAAPIDeviceContext *VAR_8 = VAR_6->hwctx;
    int VAR_9, VAR_10;
    VAStatus VAR_11;






    VAR_8->display = VAR_7;

    VAR_11 = FUNC_3(VAR_7, &VAR_9, &VAR_10);
    if (VAR_11 != VAR_3) {
        FUNC_1(VAR_6, VAR_0, "Failed to initialise VAAPI "
               "connection: %d (%s).\n", VAR_11, FUNC_2(VAR_11));
        return FUNC_0(VAR_2);
    }
    FUNC_1(VAR_6, VAR_1, "Initialised VAAPI connection: "
           "version %d.%d\n", VAR_9, VAR_10);

    return 0;
}
