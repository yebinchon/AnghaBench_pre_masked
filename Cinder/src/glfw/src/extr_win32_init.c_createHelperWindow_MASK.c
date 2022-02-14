
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dbi ;
struct TYPE_3__ {int dbcc_size; int dbcc_classguid; int dbcc_devicetype; } ;
typedef int * HWND ;
typedef int DEV_BROADCAST_HDR ;
typedef TYPE_1__ DEV_BROADCAST_DEVICEINTERFACE_W ;


 int * FUNC_0 (int ,int ,char*,int,int ,int ,int,int,int ,int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int *,int *,int ) ;
 int VAR_5 ;
 int FUNC_3 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_1__*,int) ;
 int VAR_9 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static HWND FUNC_6(void)
{
    HWND VAR_10 = FUNC_0(VAR_8,
                                  VAR_9,
                                  L"GLFW helper window",
                                  VAR_7 | VAR_6,
                                  0, 0, 1, 1,
                                  VAR_4, ((void*)0),
                                  FUNC_1(((void*)0)),
                                  ((void*)0));
    if (!VAR_10)
    {
        FUNC_5(VAR_2,
                        "Win32: Failed to create helper window");
        return ((void*)0);
    }



    FUNC_3(VAR_10, VAR_5);


    {
        DEV_BROADCAST_DEVICEINTERFACE_W VAR_11;
        FUNC_4(&VAR_11, sizeof(VAR_11));
        VAR_11.dbcc_size = sizeof(VAR_11);
        VAR_11.dbcc_devicetype = VAR_0;
        VAR_11.dbcc_classguid = VAR_3;

        FUNC_2(VAR_10,
                                    (DEV_BROADCAST_HDR*) &VAR_11,
                                    VAR_1);
    }

   return VAR_10;
}
