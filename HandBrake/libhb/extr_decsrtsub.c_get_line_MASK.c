
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ utf8_pos; scalar_t__ utf8_end; char* utf8_buf; } ;
typedef TYPE_1__ hb_work_private_t ;


 int FUNC_0 (char*,char,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2( hb_work_private_t * VAR_0, char *VAR_1, int VAR_2 )
{
    int VAR_3;
    char VAR_4;


    FUNC_0(VAR_1, '\0', VAR_2);


    for( VAR_3 = 0; VAR_3 < VAR_2 - 1; VAR_3++ )
    {
        if( VAR_0->utf8_pos >= VAR_0->utf8_end )
        {
            if( !FUNC_1( VAR_0 ) )
            {
                if( VAR_3 )
                    return 1;
                else
                    return 0;
            }
        }
        VAR_4 = VAR_0->utf8_buf[VAR_0->utf8_pos++];
        if( VAR_4 == '\n' )
        {
            VAR_1[VAR_3] = '\n';
            VAR_1[VAR_3+1] = '\0';
            return 1;
        }
        VAR_1[VAR_3] = VAR_4;
    }
    VAR_1[0] = '\0';
    return 1;
}
