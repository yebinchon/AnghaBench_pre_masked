
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_7__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_8__ {scalar_t__ icy_metaint; scalar_t__ icy_data_read; } ;
typedef TYPE_2__ HTTPContext ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,char*,char*,int ) ;
 int FUNC_2 (TYPE_1__*,...) ;
 int FUNC_3 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_4(URLContext *VAR_1, int VAR_2)
{
    HTTPContext *VAR_3 = VAR_1->priv_data;

    uint64_t VAR_4;

    if (VAR_3->icy_metaint < VAR_3->icy_data_read)
        return VAR_0;
    VAR_4 = VAR_3->icy_metaint - VAR_3->icy_data_read;

    if (!VAR_4) {




        uint8_t VAR_5;
        int VAR_6 = FUNC_2(VAR_1, &VAR_5, 1);
        if (VAR_6 < 0)
            return VAR_6;
        if (VAR_5 > 0) {
            char VAR_7[255 * 16 + 1];
            int VAR_8;
            VAR_6 = VAR_5 * 16;
            VAR_8 = FUNC_2(VAR_1, VAR_7, VAR_6);
            if (VAR_8 < 0)
                return VAR_8;
            VAR_7[VAR_6 + 1] = 0;
            if ((VAR_8 = FUNC_1(VAR_3, "icy_metadata_packet", VAR_7, 0)) < 0)
                return VAR_8;
            FUNC_3(VAR_1, VAR_7);
        }
        VAR_3->icy_data_read = 0;
        VAR_4 = VAR_3->icy_metaint;
    }

    return FUNC_0(VAR_2, VAR_4);
}
