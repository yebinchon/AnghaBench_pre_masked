
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tL2C_RCB ;
typedef int tL2C_LCB ;
struct TYPE_6__ {int chnl_state; int * p_rcb; int fixed_chnl_idle_tout; void* remote_cid; void* local_cid; } ;
typedef TYPE_1__ tL2C_CCB ;
typedef int BT_HDR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 TYPE_1__* FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_4 (int *,void*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

BOOLEAN FUNC_7(tL2C_LCB *VAR_8, BT_HDR *VAR_9)
{
    tL2C_CCB *VAR_10;
    tL2C_RCB *VAR_11;

    if (((VAR_10 = FUNC_4 (VAR_8, VAR_2)) != ((void*)0))
            || ((VAR_11 = FUNC_5 (VAR_6)) != ((void*)0))) {
        if (VAR_10 == ((void*)0)) {

            if ((VAR_10 = FUNC_2 (VAR_8, 0)) == ((void*)0)) {
                FUNC_0 ("L2CAP - no CCB for UCD reception");
                FUNC_6 (VAR_9);
                return VAR_7;
            } else {

                VAR_10->local_cid = VAR_2;
                VAR_10->remote_cid = VAR_2;


                VAR_10->fixed_chnl_idle_tout = VAR_4;


                FUNC_3 (VAR_10, VAR_3);


                VAR_10->p_rcb = VAR_11;

                VAR_10->chnl_state = VAR_0;
            }
        }
        FUNC_1(VAR_10, VAR_5, VAR_9);
        return VAR_7;
    } else {
        return VAR_1;
    }
}
