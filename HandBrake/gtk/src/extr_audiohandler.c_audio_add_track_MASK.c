
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdouble ;
typedef int GhbValue ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,char*) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,char*,char const*) ;
 int FUNC_7 (int,int,int) ;
 int * FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int *) ;
 char const* FUNC_10 (int) ;
 char const* FUNC_11 (int) ;

__attribute__((used)) static GhbValue*
FUNC_12(
    GhbValue *VAR_0,
    int VAR_1,
    int VAR_2,
    gdouble VAR_3,
    int VAR_4,
    int VAR_5,
    int VAR_6,
    gdouble VAR_7,
    gdouble VAR_8)
{
    GhbValue *VAR_9;
    GhbValue *VAR_10;

    VAR_9 = FUNC_3();

    FUNC_5(VAR_9, "Track", VAR_1);
    FUNC_6(VAR_9, "Encoder",
                        FUNC_10(VAR_2));
    FUNC_4(VAR_9, "Quality", VAR_3);
    FUNC_5(VAR_9, "Bitrate", VAR_4);
    FUNC_5(VAR_9, "Samplerate", VAR_5);

    VAR_10 = FUNC_8(VAR_0, VAR_1);
    if (VAR_10 != ((void*)0))
    {
        int VAR_11 = FUNC_1(VAR_10, "ChannelLayout");
        const char * VAR_12 = FUNC_2(VAR_10, "Name");
        VAR_6 = FUNC_7(VAR_11, VAR_2, VAR_6);
        if (VAR_12 != ((void*)0))
        {
            FUNC_6(VAR_9, "Name", VAR_12);
        }
    }
    FUNC_6(VAR_9, "Mixdown", FUNC_11(VAR_6));
    FUNC_4(VAR_9, "DRC", VAR_7);
    FUNC_4(VAR_9, "Gain", VAR_8);

    FUNC_9(VAR_0, VAR_9);
    FUNC_0(VAR_0, VAR_9);

    return VAR_9;
}
