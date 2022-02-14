
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int * VAR_3 ;
 size_t VAR_4 ;

BOOL FUNC_2(CHAR* VAR_5)
{
    FUNC_1(VAR_5 != ((void*)0));
    FUNC_0((VAR_4 < VAR_1),
            VAR_0, "mb stack serial get byte failure.");
    *VAR_5 = VAR_3[VAR_4];
    VAR_4++;
    return VAR_2;
}
