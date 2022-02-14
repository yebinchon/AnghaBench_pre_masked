
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ p_eir; } ;
struct TYPE_5__ {TYPE_1__ inq_res; } ;
typedef TYPE_2__ tBTA_DM_SEARCH ;
typedef scalar_t__ UINT8 ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__* FUNC_0 (scalar_t__,int ,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static BOOLEAN FUNC_2(tBTA_DM_SEARCH *VAR_5,
                                     UINT8 *VAR_6, UINT8 *VAR_7)
{
    UINT8 *VAR_8 = ((void*)0);
    UINT8 VAR_9 = 0;


    if (VAR_5->inq_res.p_eir) {
        VAR_8 = FUNC_0(VAR_5->inq_res.p_eir,
                                             VAR_1, &VAR_9);
        if (!VAR_8) {
            VAR_8 = FUNC_0(VAR_5->inq_res.p_eir,
                                                 VAR_2, &VAR_9);
        }

        if (VAR_8) {
            if (VAR_9 > VAR_0) {
                VAR_9 = VAR_0;
            }

            if (VAR_6 && VAR_7) {
                FUNC_1(VAR_6, VAR_8, VAR_9);
                *(VAR_6 + VAR_9) = 0;
                *VAR_7 = VAR_9;
            }

            return VAR_4;
        }
    }

    return VAR_3;

}
