
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_6__ {int dev_class_mask; int dev_class; } ;
struct TYPE_8__ {int* bdaddr_cond; TYPE_1__ cod_cond; } ;
typedef TYPE_3__ tBTM_INQ_FILT_COND ;
typedef int UINT8 ;
struct TYPE_7__ {int inqfilt_active; } ;
struct TYPE_9__ {TYPE_2__ btm_inq_vars; } ;



 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__ VAR_6 ;
 scalar_t__ FUNC_1 (int ,int,int*,int) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static tBTM_STATUS FUNC_3 (UINT8 VAR_7,
        tBTM_INQ_FILT_COND *VAR_8)
{
    UINT8 VAR_9 = VAR_3 * 2;
    UINT8 VAR_10[VAR_3 * 2];
    UINT8 *VAR_11 = VAR_10;


    FUNC_0 ("btm_set_inq_event_filter: filter type %d [Clear-0, COD-1, BDADDR-2]\n",
                     VAR_7);
    FUNC_0 ("                       condition [%02x%02x%02x %02x%02x%02x]\n",
                     VAR_8->bdaddr_cond[0], VAR_8->bdaddr_cond[1], VAR_8->bdaddr_cond[2],
                     VAR_8->bdaddr_cond[3], VAR_8->bdaddr_cond[4], VAR_8->bdaddr_cond[5]);



    switch (VAR_7) {
    case 128:

        FUNC_2 (VAR_10, VAR_8->cod_cond.dev_class, VAR_3);
        FUNC_2 (&VAR_10[VAR_3],
                VAR_8->cod_cond.dev_class_mask, VAR_3);


        break;

    case 129:
        VAR_11 = VAR_8->bdaddr_cond;


        break;

    case 130:
        VAR_9 = 0;
        break;

    default:
        return (VAR_1);
    }

    VAR_6.btm_inq_vars.inqfilt_active = VAR_5;


    if (FUNC_1(VAR_4, VAR_7,
                                    VAR_11, VAR_9))

    {
        return (VAR_0);
    } else {
        return (VAR_2);
    }
}
