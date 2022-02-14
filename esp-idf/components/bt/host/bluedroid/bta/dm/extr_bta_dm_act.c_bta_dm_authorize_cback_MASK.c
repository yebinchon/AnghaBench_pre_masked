
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t service; scalar_t__* bd_name; int dev_class; int bd_addr; } ;
struct TYPE_6__ {TYPE_1__ authorize; } ;
typedef TYPE_2__ tBTA_DM_SEC ;
typedef size_t UINT8 ;
struct TYPE_7__ {int (* p_sec_cback ) (int ,TYPE_2__*) ;} ;
typedef int DEV_CLASS ;
typedef size_t* BOOLEAN ;
typedef scalar_t__ BD_NAME ;
typedef int BD_ADDR ;


 int FUNC_0 (char*,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (size_t*) ;
 int FUNC_2 (int ,int ) ;
 TYPE_4__ VAR_8 ;
 size_t* VAR_9 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,TYPE_2__*) ;

__attribute__((used)) static UINT8 FUNC_5 (BD_ADDR VAR_10, DEV_CLASS VAR_11, BD_NAME VAR_12,
                                     UINT8 *VAR_13, UINT8 VAR_14, BOOLEAN VAR_15)
{
    tBTA_DM_SEC VAR_16;
    UINT8 VAR_17 = 1;
    FUNC_1(VAR_13);
    FUNC_1(VAR_15);

    FUNC_2(VAR_16.authorize.bd_addr, VAR_10);
    FUNC_3(VAR_16.authorize.dev_class, VAR_11, VAR_7);

    FUNC_0((char *)VAR_16.authorize.bd_name, sizeof(BD_NAME), (char *)VAR_12, (VAR_0 - 1));


    VAR_16.authorize.bd_name[VAR_0 - 1] = 0;





    while (VAR_17 < VAR_4) {

        if (VAR_9[VAR_17] == VAR_14) {
            VAR_16.authorize.service = VAR_17;
            break;
        }
        VAR_17++;
    }



    if (VAR_8.p_sec_cback && (VAR_17 < VAR_4




                                 )) {
        VAR_8.p_sec_cback(VAR_1, &VAR_16);
        return VAR_5;
    } else {
        return VAR_6;
    }
}
