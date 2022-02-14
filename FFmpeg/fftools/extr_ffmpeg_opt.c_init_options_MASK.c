
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double mux_max_delay; int accurate_seek; int chapters_input_file; int limit_filesize; void* recording_time; void* start_time_eof; void* start_time; void* stop_time; } ;
typedef TYPE_1__ OptionsContext ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(OptionsContext *VAR_4)
{
    FUNC_0(VAR_4, 0, sizeof(*VAR_4));

    VAR_4->stop_time = VAR_1;
    VAR_4->mux_max_delay = 0.7;
    VAR_4->start_time = VAR_0;
    VAR_4->start_time_eof = VAR_0;
    VAR_4->recording_time = VAR_1;
    VAR_4->limit_filesize = VAR_3;
    VAR_4->chapters_input_file = VAR_2;
    VAR_4->accurate_seek = 1;
}
