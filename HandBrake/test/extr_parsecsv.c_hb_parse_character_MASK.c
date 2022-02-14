
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ parse_state; int fileref; } ;
typedef TYPE_1__ hb_csv_file_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static uint16_t FUNC_7( hb_csv_file_t * VAR_7 )
{
    int VAR_8;
    uint16_t VAR_9 = 0;
    int VAR_10 = 1;

    if( VAR_7 == ((void*)0) )
    {
        return VAR_2;
    }

    while( VAR_10 )
    {
        VAR_8 = FUNC_2( VAR_7->fileref );
        if( FUNC_0( VAR_7->fileref ) )
        {
            return VAR_1;
        }
        if( FUNC_1( VAR_7->fileref ) )
        {
            return VAR_2;
        }

        if( VAR_7->parse_state == VAR_6 && FUNC_6(VAR_8) )
        {
            continue;
        }
        else if( VAR_7->parse_state != VAR_4 && FUNC_3(VAR_8) )
        {
            VAR_7->parse_state = VAR_4;
            continue;
        }
        else if( VAR_7->parse_state != VAR_4 && FUNC_5(VAR_8) )
        {
            VAR_7->parse_state = VAR_6;
            VAR_10 = 0;
            VAR_9 = VAR_0;
        }
        else if( VAR_7->parse_state == VAR_4 )
        {
            VAR_7->parse_state = VAR_5;
            VAR_10 = 0;
            VAR_9 = (uint16_t)VAR_8;
        }
        else if( FUNC_4(VAR_8) )
        {
            VAR_7->parse_state = VAR_6;
            VAR_10 = 0;
            VAR_9 = VAR_3;
        }
        else
        {
            VAR_7->parse_state = VAR_5;
            VAR_10 = 0;
            VAR_9 = (uint16_t)VAR_8;
        }
    }

    return VAR_9;
}
