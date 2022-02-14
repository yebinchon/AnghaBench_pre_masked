
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (void*,int ,int) ;
 int VAR_2 ;

void FUNC_4 (char** VAR_3)
{
    int VAR_4;


    VAR_2 = 0;


    VAR_1 = FUNC_2(1);

    for ( ; *VAR_3 ; VAR_3++)
 FUNC_1 (*VAR_3);

    if (!VAR_2)
 FUNC_0 ("W_InitFiles: no files found");


    VAR_4 = VAR_2 * sizeof(*VAR_0);
    VAR_0 = FUNC_2 (VAR_4);

    if (!VAR_0)
 FUNC_0 ("Couldn't allocate lumpcache");

    FUNC_3 (VAR_0,0, VAR_4);
}
