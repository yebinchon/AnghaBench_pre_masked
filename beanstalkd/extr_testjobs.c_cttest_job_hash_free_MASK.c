
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int Job ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ,int,int ,int ,int) ;
 int FUNC_5 (char*) ;

void
FUNC_6()
{
    Job *VAR_1;
    uint64 VAR_2 = 83;

    FUNC_0(VAR_0, FUNC_5("default"));
    VAR_1 = FUNC_4(0, 0, 1, 0, VAR_0, VAR_2);
    FUNC_3(VAR_1);

    FUNC_1(!FUNC_2(VAR_2), "job should be missing");
}
