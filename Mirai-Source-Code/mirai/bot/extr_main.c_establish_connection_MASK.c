
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int VAR_6 ;
 int FUNC_1 (int,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_5(void)
{




    if ((VAR_7 = FUNC_4(VAR_0, VAR_4, 0)) == -1)
    {



        return;
    }

    FUNC_1(VAR_7, VAR_2, VAR_3 | FUNC_1(VAR_7, VAR_1, 0));


    if (&FUNC_3 != ((void*)0))
        FUNC_3();

    VAR_8 = VAR_5;
    FUNC_0(VAR_7, (struct sockaddr *)&VAR_9, sizeof (struct sockaddr_in));
}
