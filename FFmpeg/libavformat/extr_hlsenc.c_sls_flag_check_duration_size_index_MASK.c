
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ HLSContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;

__attribute__((used)) static int FUNC_2(HLSContext *VAR_5)
{
    int VAR_6 = 0;

    if (VAR_5->flags & VAR_2) {
        FUNC_1(VAR_5, VAR_0,
               "second_level_segment_duration hls_flag requires strftime to be true\n");
        VAR_6 = FUNC_0(VAR_1);
    }
    if (VAR_5->flags & VAR_4) {
        FUNC_1(VAR_5, VAR_0,
               "second_level_segment_size hls_flag requires strfime to be true\n");
        VAR_6 = FUNC_0(VAR_1);
    }
    if (VAR_5->flags & VAR_3) {
        FUNC_1(VAR_5, VAR_0,
               "second_level_segment_index hls_flag requires strftime to be true\n");
        VAR_6 = FUNC_0(VAR_1);
    }

    return VAR_6;
}
