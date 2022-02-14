
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int ,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int VAR_7 ;

void FUNC_5 (char* VAR_8)
{
    int VAR_9;
    int VAR_10;

    VAR_7 = 0;
    FUNC_4 (VAR_3, VAR_8);
    FUNC_3 (VAR_3, ".lmp");
    VAR_10 = 0x20000;
    VAR_9 = FUNC_0 ("-maxdemo");
    if (VAR_9 && VAR_9<VAR_5-1)
 VAR_10 = FUNC_2(VAR_6[VAR_9+1])*1024;
    VAR_1 = FUNC_1 (VAR_10,VAR_0,((void*)0));
    VAR_2 = VAR_1 + VAR_10;

    VAR_4 = 1;
}
