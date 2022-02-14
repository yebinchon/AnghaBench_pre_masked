
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int* data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct adb_request* VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_8 ;
 int * VAR_9 ;

__attribute__((used)) static void
FUNC_2(void)
{
    struct adb_request *VAR_10;



    VAR_10 = VAR_7;
    if (VAR_10 == 0)
 return;
    if ((FUNC_0(&VAR_9[VAR_1]) & VAR_5) == 0)
 return;


    FUNC_1(&VAR_9[VAR_0], FUNC_0(&VAR_9[VAR_0]) | VAR_3);
    FUNC_1(&VAR_9[VAR_2], VAR_10->data[0]);
    FUNC_1(&VAR_9[VAR_1], FUNC_0(&VAR_9[VAR_1]) & ~VAR_4);
    VAR_6 = VAR_8;
}
