
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int category; } ;
struct TYPE_10__ {int * priv_data; TYPE_1__* iformat; } ;
struct TYPE_9__ {scalar_t__ priv_data_size; TYPE_3__* priv_class; } ;
typedef TYPE_1__ AVInputFormat ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVClass ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (char const*) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 (TYPE_2__*) ;

int FUNC_7(AVFormatContext **VAR_2, AVInputFormat *VAR_3, const char *VAR_4)
{
    AVFormatContext *VAR_5;
    int VAR_6 = 0;

    *VAR_2 = ((void*)0);
    if (!VAR_3 && !VAR_4)
        return FUNC_0(VAR_0);
    if (!(VAR_5 = FUNC_5()))
        return FUNC_0(VAR_1);

    if (!VAR_3)
        VAR_3 = FUNC_2(VAR_4);
    if (!VAR_3 || !VAR_3->priv_class || !FUNC_1(VAR_3->priv_class->category)) {
        VAR_6 = FUNC_0(VAR_0);
        goto error;
    }
    VAR_5->iformat = VAR_3;
    if (VAR_5->iformat->priv_data_size > 0) {
        VAR_5->priv_data = FUNC_3(VAR_5->iformat->priv_data_size);
        if (!VAR_5->priv_data) {
            VAR_6 = FUNC_0(VAR_1);
            goto error;
        }
        if (VAR_5->iformat->priv_class) {
            *(const AVClass**)VAR_5->priv_data= VAR_5->iformat->priv_class;
            FUNC_4(VAR_5->priv_data);
        }
    } else
        VAR_5->priv_data = ((void*)0);

    *VAR_2 = VAR_5;
    return 0;
  error:
    FUNC_6(VAR_5);
    return VAR_6;
}
