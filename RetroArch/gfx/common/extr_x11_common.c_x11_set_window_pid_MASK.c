
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int Window ;
typedef int Display ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int ,int ,int,int ,unsigned char*,int) ;
 int FUNC_2 (int *,char*,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,long) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (long) ;
 int FUNC_7 (char*) ;
 long FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(Display *VAR_7, Window VAR_8)
{
    long VAR_9 = 0;
    char *VAR_10 = ((void*)0);
    pid_t VAR_11 = FUNC_5();

    FUNC_1(VAR_7, VAR_8, FUNC_2(VAR_7, "_NET_WM_PID", VAR_0),
        VAR_2, 32, VAR_1, (unsigned char *)&VAR_11, 1);

    VAR_6 = 0;
    if ((VAR_9 = FUNC_8(VAR_5)) == -1 && VAR_6)
        return;
    if ((VAR_10 = (char*)FUNC_6(VAR_9 + 1)) == ((void*)0))
        return;

    if (FUNC_4(VAR_10, VAR_9 + 1) == -1)
        FUNC_0("Failed to get hostname.\n");
    else
    {
        FUNC_1(VAR_7, VAR_8, VAR_4, VAR_3, 8,
            VAR_1, (unsigned char *)VAR_10, FUNC_7(VAR_10));
    }
    FUNC_3(VAR_10);
}
