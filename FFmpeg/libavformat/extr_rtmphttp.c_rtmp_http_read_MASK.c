
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int flags; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {scalar_t__ out_size; scalar_t__ nb_bytes_read; scalar_t__ finishing; int stream; } ;
typedef TYPE_2__ RTMP_HTTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;

__attribute__((used)) static int FUNC_5(URLContext *VAR_3, uint8_t *VAR_4, int VAR_5)
{
    RTMP_HTTPContext *VAR_6 = VAR_3->priv_data;
    int VAR_7, VAR_8 = 0;


    do {
        VAR_7 = FUNC_2(VAR_6->stream, VAR_4 + VAR_8, VAR_5);
        if (VAR_7 < 0 && VAR_7 != VAR_0)
            return VAR_7;

        if (!VAR_7 || VAR_7 == VAR_0) {
            if (VAR_6->finishing) {


                return FUNC_0(VAR_2);
            }




            if (VAR_6->out_size > 0) {
                if ((VAR_7 = FUNC_3(VAR_3, "send")) < 0)
                    return VAR_7;
            } else {
                if (VAR_6->nb_bytes_read == 0) {


                    FUNC_1(50000);
                }

                if ((VAR_7 = FUNC_4(VAR_3, "", 1)) < 0)
                    return VAR_7;

                if ((VAR_7 = FUNC_3(VAR_3, "idle")) < 0)
                    return VAR_7;
            }

            if (VAR_3->flags & VAR_1) {

                return FUNC_0(VAR_2);
            }
        } else {
            VAR_8 += VAR_7;
            VAR_5 -= VAR_7;
            VAR_6->nb_bytes_read += VAR_7;
        }
    } while (VAR_8 <= 0);

    return VAR_8;
}
