
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int tmp_buf ;
struct TYPE_7__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_8__ {int finishing; int stream; int out_data; scalar_t__ out_size; scalar_t__ initialized; } ;
typedef TYPE_2__ RTMP_HTTPContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;

__attribute__((used)) static int FUNC_5(URLContext *VAR_0)
{
    RTMP_HTTPContext *VAR_1 = VAR_0->priv_data;
    uint8_t VAR_2[2048];
    int VAR_3 = 0;

    if (VAR_1->initialized) {

        VAR_1->finishing = 1;

        do {
            VAR_3 = FUNC_2(VAR_0, VAR_2, sizeof(VAR_2));
        } while (VAR_3 > 0);


        VAR_1->out_size = 0;

        if ((VAR_3 = FUNC_4(VAR_0, "", 1)) == 1)
            VAR_3 = FUNC_3(VAR_0, "close");
    }

    FUNC_0(&VAR_1->out_data);
    FUNC_1(VAR_1->stream);

    return VAR_3;
}
