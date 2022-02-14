
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int min_16_digit; scalar_t__* bd_name; int dev_class; int bd_addr; } ;
struct TYPE_6__ {TYPE_1__ pin_req; } ;
typedef TYPE_2__ tBTA_DM_SEC ;
typedef int UINT8 ;
struct TYPE_7__ {int (* p_sec_cback ) (int ,TYPE_2__*) ;} ;
typedef int DEV_CLASS ;
typedef int BOOLEAN ;
typedef scalar_t__ BD_NAME ;
typedef int BD_ADDR ;


 int FUNC_0 (char*,int,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 TYPE_4__ VAR_4 ;
 int FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static UINT8 FUNC_4 (BD_ADDR VAR_5, DEV_CLASS VAR_6, BD_NAME VAR_7,
                               BOOLEAN VAR_8)
{
    tBTA_DM_SEC VAR_9;

    if (!VAR_4.p_sec_cback) {
        return VAR_3;
    }

    FUNC_2(VAR_9.pin_req.bd_addr, VAR_5);
    FUNC_1(VAR_9.pin_req.dev_class, VAR_6);
    FUNC_0((char *)VAR_9.pin_req.bd_name, sizeof(BD_NAME), (char *)VAR_7, (VAR_0 - 1));
    VAR_9.pin_req.bd_name[VAR_0 - 1] = 0;
    VAR_9.pin_req.min_16_digit = VAR_8;

    VAR_4.p_sec_cback(VAR_1, &VAR_9);
    return VAR_2;
}
