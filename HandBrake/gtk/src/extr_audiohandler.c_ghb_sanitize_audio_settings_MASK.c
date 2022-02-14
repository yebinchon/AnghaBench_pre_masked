
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int hb_title_t ;
struct TYPE_4__ {int codec; } ;
struct TYPE_5__ {TYPE_1__ in; } ;
typedef TYPE_2__ hb_audio_config_t ;
typedef int GhbValue ;


 int FUNC_0 (int *,char*) ;
 char* FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ) ;
 TYPE_2__* FUNC_3 (int const*,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int *) ;
 int FUNC_6 (int,int ,int,int,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int const*,int *) ;

__attribute__((used)) static void
FUNC_12(GhbValue *VAR_0, GhbValue *VAR_1)
{

    const char * VAR_2;
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    uint32_t VAR_9 = 0;
    hb_audio_config_t * VAR_10;
    const hb_title_t * VAR_11;

    VAR_3 = FUNC_0(VAR_0, "title");
    VAR_11 = FUNC_5(VAR_3, ((void*)0));

    VAR_2 = FUNC_1(VAR_0, "FileFormat");
    VAR_4 = FUNC_10(VAR_2);

    VAR_5 = FUNC_8(VAR_1, "Encoder");
    VAR_6 = FUNC_7(VAR_0, VAR_5);
    VAR_7 = FUNC_4(VAR_0);
    VAR_8 = FUNC_0(VAR_1, "Track");
    VAR_10 = FUNC_3(VAR_11, VAR_8);
    if (VAR_10 != ((void*)0))
    {
        VAR_9 = VAR_10->in.codec;
    }
    VAR_5 = FUNC_6(VAR_4, VAR_9, VAR_5,
                                       VAR_6, VAR_7);
    FUNC_2(VAR_1, "Encoder",
                        FUNC_9(VAR_5));


    FUNC_11(VAR_11, VAR_1);
}
