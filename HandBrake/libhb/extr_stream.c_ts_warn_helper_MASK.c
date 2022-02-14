
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
typedef int msg ;
struct TYPE_3__ {int errors; int frames; int last_error_frame; int last_error_count; } ;
typedef TYPE_1__ hb_stream_t ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,int,char*,int ) ;

__attribute__((used)) static void FUNC_2( hb_stream_t *VAR_0, char *VAR_1, va_list VAR_2 )
{

    ++VAR_0->errors;
    if ( VAR_0->frames - VAR_0->last_error_frame >= 30*60 )
    {
        char VAR_3[256];

        FUNC_1( VAR_3, sizeof(VAR_3), VAR_1, VAR_2 );

        if ( VAR_0->errors - VAR_0->last_error_count < 10 )
        {
            FUNC_0( "stream: error near frame %d: %s", VAR_0->frames, VAR_3 );
        }
        else
        {
            int VAR_4 = VAR_0->errors - VAR_0->last_error_count;
            double VAR_5 = (double)VAR_4 * 100. /
                            (VAR_0->frames - VAR_0->last_error_frame);
            FUNC_0( "stream: %d new errors (%.0f%%) up to frame %d: %s",
                    VAR_4, VAR_5, VAR_0->frames, VAR_3 );
        }
        VAR_0->last_error_frame = VAR_0->frames;
        VAR_0->last_error_count = VAR_0->errors;
    }
}
