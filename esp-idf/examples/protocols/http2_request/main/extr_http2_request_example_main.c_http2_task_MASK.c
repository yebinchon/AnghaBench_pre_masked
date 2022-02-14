
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh2lib_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct sh2lib_handle*,int ) ;
 int FUNC_3 (struct sh2lib_handle*,int ,int ) ;
 int FUNC_4 (struct sh2lib_handle*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct sh2lib_handle*) ;
 int FUNC_6 (struct sh2lib_handle*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(void *VAR_6)
{



    FUNC_1();


    FUNC_0("Connecting to server\n");
    struct sh2lib_handle VAR_7;
    if (FUNC_2(&VAR_7, VAR_1) != 0) {
        FUNC_0("Failed to connect\n");
        FUNC_8(((void*)0));
        return;
    }
    FUNC_0("Connection done\n");


    FUNC_3(&VAR_7, VAR_2, VAR_4);


    FUNC_4(&VAR_7, VAR_0, VAR_5, VAR_3);

    while (1) {

        if (FUNC_5(&VAR_7) < 0) {
            FUNC_0("Error in send/receive\n");
            break;
        }
        FUNC_7(2);
    }

    FUNC_6(&VAR_7);
    FUNC_8(((void*)0));
}
