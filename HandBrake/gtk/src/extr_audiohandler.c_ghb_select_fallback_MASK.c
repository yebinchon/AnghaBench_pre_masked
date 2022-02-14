
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int format; } ;
typedef TYPE_1__ hb_container_t ;
typedef scalar_t__ gint ;
typedef int GhbValue ;


 int VAR_0 ;
 char* FUNC_0 (int *,char*) ;
 TYPE_1__* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,int ,scalar_t__,int ) ;

int FUNC_5(GhbValue *VAR_1, int VAR_2)
{
    gint VAR_3 = 0;

    if (VAR_2 & VAR_0)
    {
        VAR_3 = FUNC_3(VAR_2);
        if (VAR_3 != 0)
        {
            return VAR_3;
        }
    }
    const char *VAR_4;
    const hb_container_t *VAR_5;

    VAR_4 = FUNC_0(VAR_1, "FileFormat");
    VAR_5 = FUNC_1(VAR_4);

    VAR_3 = FUNC_2(VAR_1,
                                                "AudioEncoderFallback");
    return FUNC_4(VAR_2, 0, VAR_3, VAR_5->format);
}
