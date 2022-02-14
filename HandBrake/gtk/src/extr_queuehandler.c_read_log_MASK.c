
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* extra_activity_path; int extra_activity_buffer; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int GtkTextIter ;
typedef int FILE ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (char*,int,size_t,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 size_t FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (size_t) ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int *,char*,size_t) ;
 int FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (char*,char const*) ;

__attribute__((used)) static void FUNC_13(signal_user_data_t * VAR_3, const char * VAR_4)
{
    FILE * VAR_5;
    size_t VAR_6, VAR_7;
    GtkTextIter VAR_8;
    char * VAR_9;

    if (VAR_3->extra_activity_path != ((void*)0) &&
        !FUNC_12(VAR_3->extra_activity_path, VAR_4))
    {
        return;
    }
    FUNC_6(VAR_3->extra_activity_path);
    VAR_3->extra_activity_path = FUNC_8(VAR_4);

    FUNC_11(VAR_3->extra_activity_buffer, "", 0);

    VAR_5 = FUNC_5(VAR_4, "r");
    if (VAR_5 == ((void*)0))
    {
        return;
    }
    FUNC_3(VAR_5, 0, VAR_1);
    VAR_7 = FUNC_4(VAR_5);
    FUNC_3(VAR_5, 0, VAR_2);
    if (VAR_7 > VAR_0)
    {
        VAR_7 = VAR_0;
    }
    VAR_9 = FUNC_7(VAR_7);
    while (!FUNC_1(VAR_5))
    {
        VAR_6 = FUNC_2(VAR_9, 1, VAR_7, VAR_5);
        if (VAR_6 <= 0)
        {
            break;
        }
        FUNC_9(VAR_3->extra_activity_buffer, &VAR_8);
        FUNC_10(VAR_3->extra_activity_buffer, &VAR_8, VAR_9, VAR_6);
    }
    FUNC_0(VAR_5);
    FUNC_6(VAR_9);
}
