
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int ssize_t ;
struct TYPE_5__ {int sec_inst; TYPE_1__* sec; } ;
struct TYPE_4__ {int (* new_transport_session ) (int ,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (char*,int*) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_2__*,char*,scalar_t__,int*,int,int**,int*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(int VAR_4, char** VAR_5)
{
    if (VAR_4 < 3) {
        return VAR_0;
    }

    int VAR_6, VAR_7;

    uint32_t VAR_8 = FUNC_0(VAR_5[1]);

    uint8_t *VAR_9 = (uint8_t *) FUNC_3(FUNC_6(VAR_5[2]));
    uint8_t *VAR_10;
    ssize_t VAR_11;
    ssize_t VAR_12 = FUNC_2(VAR_5[2], VAR_9);

    if (VAR_8 != VAR_3) {
        if (VAR_2->sec && VAR_2->sec->new_transport_session) {
            VAR_7 = VAR_2->sec->new_transport_session(VAR_2->sec_inst, VAR_8);
            if (VAR_7 == VAR_1) {
                VAR_3 = VAR_8;
            }
        }
    }

    VAR_7 = FUNC_5(VAR_2, VAR_5[0], VAR_8, VAR_9, VAR_12, &VAR_10, &VAR_11);
    FUNC_1(VAR_9);

    if (VAR_7 == VAR_1) {
        FUNC_4("\r\n");
        for (VAR_6 = 0; VAR_6 < VAR_11; VAR_6++) {
            FUNC_4("%02x", VAR_10[VAR_6]);
        }
        FUNC_4("\r\n");


        FUNC_1(VAR_10);

        return VAR_1;
    } else {
        return VAR_7;
    }
}
