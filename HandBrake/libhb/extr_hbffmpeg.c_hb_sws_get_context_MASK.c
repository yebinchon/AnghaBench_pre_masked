
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SwsContext {int dummy; } ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct SwsContext*,char*,int,int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (char*) ;
 struct SwsContext* FUNC_3 () ;
 int FUNC_4 (struct SwsContext*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct SwsContext*,int *,int *) ;
 int FUNC_7 (struct SwsContext*,int ,int,int ,int,int ,int,int) ;

struct SwsContext*
FUNC_8(int VAR_2, int VAR_3, enum AVPixelFormat VAR_4,
                   int VAR_5, int VAR_6, enum AVPixelFormat VAR_7,
                   int VAR_8, int VAR_9)
{
    struct SwsContext * VAR_10;

    VAR_10 = FUNC_3();
    if ( VAR_10 )
    {
        int VAR_11, VAR_12;

        VAR_11 = FUNC_1(&VAR_4);
        VAR_12 = FUNC_1(&VAR_7);
        VAR_8 |= VAR_1 | VAR_0;

        FUNC_0(VAR_10, "srcw", VAR_2, 0);
        FUNC_0(VAR_10, "srch", VAR_3, 0);
        FUNC_0(VAR_10, "src_range", VAR_11, 0);
        FUNC_0(VAR_10, "src_format", VAR_4, 0);
        FUNC_0(VAR_10, "dstw", VAR_5, 0);
        FUNC_0(VAR_10, "dsth", VAR_6, 0);
        FUNC_0(VAR_10, "dst_range", VAR_12, 0);
        FUNC_0(VAR_10, "dst_format", VAR_7, 0);
        FUNC_0(VAR_10, "sws_flags", VAR_8, 0);

        FUNC_7( VAR_10,
                      FUNC_5( VAR_9 ),
                      VAR_11,
                      FUNC_5( VAR_9 ),
                      VAR_12,
                      0,
                      1 << 16,
                      1 << 16 );

        if (FUNC_6(VAR_10, ((void*)0), ((void*)0)) < 0) {
            FUNC_2("Cannot initialize resampling context");
            FUNC_4(VAR_10);
            VAR_10 = ((void*)0);
        }
    }
    return VAR_10;
}
