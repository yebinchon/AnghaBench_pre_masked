
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int basename; } ;
typedef TYPE_1__ VariantStream ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_2__ HLSContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(HLSContext *VAR_4, VariantStream *VAR_5)
{
    const char *VAR_6 = FUNC_2(VAR_5->basename);
    int VAR_7 = VAR_6 && !FUNC_3(VAR_6, "file");
    int VAR_8 = 0;

    if ((VAR_4->flags & VAR_2) && !VAR_7) {
        FUNC_1(VAR_4, VAR_0,
               "second_level_segment_duration hls_flag works only with file protocol segment names\n");
        VAR_8 = FUNC_0(VAR_1);
    }
    if ((VAR_4->flags & VAR_3) && !VAR_7) {
        FUNC_1(VAR_4, VAR_0,
               "second_level_segment_size hls_flag works only with file protocol segment names\n");
        VAR_8 = FUNC_0(VAR_1);
    }

    return VAR_8;
}
