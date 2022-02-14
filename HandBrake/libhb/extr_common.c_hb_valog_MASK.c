
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int va_list ;
typedef int time_t ;
struct tm {int tm_hour; int tm_min; int tm_sec; } ;
typedef scalar_t__ hb_debug_level_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,char*,int,char*,int) ;
 int FUNC_2 (int ,int ,char*,int,char*,int,int *,int *) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_1 ;
 char* FUNC_5 (char*,int ) ;
 struct tm* FUNC_6 (int *) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*,int,char*,int,int,int,char const*,...) ;
 int VAR_2 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;

void FUNC_11( hb_debug_level_t VAR_3, const char * VAR_4, const char * VAR_5, va_list VAR_6)
{
    char * VAR_7;
    time_t VAR_8;
    struct tm * VAR_9;
    char VAR_10[362];

    if( VAR_1 < VAR_3 )
    {

        return;
    }


    VAR_8 = FUNC_10( ((void*)0) );
    VAR_9 = FUNC_6( &VAR_8 );
    if ( VAR_4 && *VAR_4 )
    {

        FUNC_8( VAR_10, 361, "[%02d:%02d:%02d] %s %s\n",
                 VAR_9->tm_hour, VAR_9->tm_min, VAR_9->tm_sec, VAR_4, VAR_5 );
    }
    else
    {
        FUNC_8( VAR_10, 361, "[%02d:%02d:%02d] %s\n",
                  VAR_9->tm_hour, VAR_9->tm_min, VAR_9->tm_sec, VAR_5 );
    }

    VAR_7 = FUNC_5(VAR_10, VAR_6);
    FUNC_3( VAR_2, "%s", VAR_7 );
    FUNC_4(VAR_7);
}
