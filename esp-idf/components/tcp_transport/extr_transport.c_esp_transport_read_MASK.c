
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* esp_transport_handle_t ;
struct TYPE_4__ {int (* _read ) (TYPE_1__*,char*,int,int) ;} ;


 int FUNC_0 (TYPE_1__*,char*,int,int) ;

int FUNC_1(esp_transport_handle_t VAR_0, char *VAR_1, int VAR_2, int VAR_3)
{
    if (VAR_0 && VAR_0->_read) {
        return VAR_0->_read(VAR_0, VAR_1, VAR_2, VAR_3);
    }
    return -1;
}
