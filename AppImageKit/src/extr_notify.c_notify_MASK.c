
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void (* notify_notification_show_t ) (void*,char*) ;
typedef void (* notify_notification_set_timeout_t ) (void*,int) ;
typedef void* (* notify_notification_new_t ) (char*,char*,char*,char*) ;
typedef void (* notify_init_t ) (char*) ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (void*,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 int VAR_1 ;

int FUNC_6(char *VAR_2, char *VAR_3, int VAR_4)
{

    if (FUNC_4(FUNC_3(VAR_1))){

        FUNC_5("\n%s\n", VAR_2);
        FUNC_5("%s\n", VAR_3);
    }
    else
    {

        FUNC_5("\n%s\n", VAR_2);
        FUNC_5("%s\n", VAR_3);

        void *VAR_5, *VAR_6;
        typedef void (*notify_init_t)(char *);
        typedef void *(*notify_notification_new_t)( char *, char *, char *, char *);
        typedef void (*notify_notification_set_timeout_t)( void *, int );
        typedef void (*notify_notification_show_t)(void *, char *);
        VAR_5 = ((void*)0);
        if(VAR_5 == ((void*)0))
            VAR_5= FUNC_1("libnotify.so.3", VAR_0);
        if(VAR_5 == ((void*)0))
            VAR_5= FUNC_1("libnotify.so.4", VAR_0);
        if(VAR_5 == ((void*)0))
            VAR_5= FUNC_1("libnotify.so.5", VAR_0);
        if(VAR_5 == ((void*)0))
            VAR_5= FUNC_1("libnotify.so.6", VAR_0);
        if(VAR_5 == ((void*)0))
            VAR_5= FUNC_1("libnotify.so.7", VAR_0);
        if(VAR_5 == ((void*)0))
            VAR_5= FUNC_1("libnotify.so.8", VAR_0);

        if(VAR_5 == ((void*)0))
        {
            FUNC_5("Failed to open libnotify.\n\n" );
        }
        notify_init_t VAR_7 = (notify_init_t)FUNC_2(VAR_5, "notify_init");
        if ( VAR_7 == ((void*)0) )
        {
            FUNC_0( VAR_5 );
            return 1;
        }
        VAR_7("AppImage");

        notify_notification_new_t VAR_8 = (notify_notification_new_t)FUNC_2(VAR_5, "notify_notification_new");
        if ( VAR_8 == ((void*)0) )
        {
            FUNC_0( VAR_5 );
            return 1;
        }
        VAR_6 = VAR_8(VAR_2, VAR_3, ((void*)0), ((void*)0));
        notify_notification_set_timeout_t VAR_9 = (notify_notification_set_timeout_t)FUNC_2(VAR_5, "notify_notification_set_timeout");
        if ( VAR_9 == ((void*)0) )
        {
            FUNC_0( VAR_5 );
            return 1;
        }
        VAR_9(VAR_6, VAR_4);
        notify_notification_show_t VAR_10 = (notify_notification_show_t)FUNC_2(VAR_5, "notify_notification_show");
        if ( VAR_7 == ((void*)0) )
        {
            FUNC_0( VAR_5 );
            return 1;
        }
        VAR_10(VAR_6, ((void*)0) );
        FUNC_0(VAR_5 );
    }
    return 0;
}
