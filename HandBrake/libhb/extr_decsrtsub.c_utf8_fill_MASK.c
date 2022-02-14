
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {char* utf8_buf; size_t utf8_pos; size_t utf8_end; int end; int pos; char* buf; int utf8_bom_skipped; int file; int iconv_context; } ;
typedef TYPE_1__ hb_work_private_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int,int,int ) ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (int ,char**,size_t*,char**,size_t*) ;
 int FUNC_3 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_4( hb_work_private_t * VAR_4 )
{
    int VAR_5, VAR_6 = 0;
    size_t VAR_7;



    FUNC_3( VAR_4->utf8_buf, VAR_4->utf8_buf + VAR_4->utf8_pos, VAR_4->utf8_end - VAR_4->utf8_pos );
    VAR_4->utf8_end -= VAR_4->utf8_pos;
    VAR_4->utf8_pos = 0;
    VAR_7 = 2048 - VAR_4->utf8_end;
    while( VAR_7 )
    {
        char *VAR_8, *VAR_9;
        size_t VAR_10, VAR_11;

        if( VAR_4->end == VAR_4->pos )
        {
            VAR_5 = FUNC_0( VAR_4->buf, 1, 1024, VAR_4->file );
            VAR_4->pos = 0;
            VAR_4->end = VAR_5;
            if( VAR_5 == 0 )
            {
                return VAR_6;
            }
        }

        VAR_8 = VAR_4->buf + VAR_4->pos;
        VAR_9 = VAR_4->utf8_buf + VAR_4->utf8_end;
        VAR_10 = VAR_4->end - VAR_4->pos;

        VAR_11 = FUNC_2( VAR_4->iconv_context, &VAR_8, &VAR_10, &VAR_9, &VAR_7);
        if (VAR_9 != VAR_4->utf8_buf + VAR_4->utf8_end)
        {
            VAR_6 = 1;
        }

        VAR_4->utf8_end = VAR_9 - VAR_4->utf8_buf;
        VAR_4->pos = VAR_8 - VAR_4->buf;

        if ( !VAR_4->utf8_bom_skipped )
        {
            uint8_t *VAR_12 = (uint8_t*)VAR_4->utf8_buf;
            if (VAR_12[0] == 0xef && VAR_12[1] == 0xbb && VAR_12[2] == 0xbf)
            {
                VAR_4->utf8_pos = 3;
                if (VAR_4->utf8_pos == VAR_4->utf8_end)
                {

                    VAR_6 = 0;
                }
            }
            VAR_4->utf8_bom_skipped = 1;
        }

        if( ( VAR_11 == -1 ) && ( VAR_3 == VAR_2 ) )
        {

            FUNC_3( VAR_4->buf, VAR_8, VAR_4->end - VAR_4->pos );
            VAR_4->end -= VAR_4->pos;
            VAR_4->pos = 0;
            VAR_5 = FUNC_0( VAR_4->buf + VAR_4->end, 1, 1024 - VAR_4->end, VAR_4->file );
            if( VAR_5 == 0 )
            {
                return VAR_6;
            }
            VAR_4->end += VAR_5;
        } else if ( ( VAR_11 == -1 ) && ( VAR_3 == VAR_1 ) )
        {
            FUNC_1( "Invalid byte for codeset in input, discard byte" );

            VAR_4->pos++;
        } else if ( ( VAR_11 == -1 ) && ( VAR_3 == VAR_0 ) )
        {

            return VAR_6;
        }
    }
    return 1;
}
