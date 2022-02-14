
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

int FUNC_2 (char* VAR_0)
{
    int VAR_1;

    VAR_1 = FUNC_1 (VAR_0);

    if (VAR_1==-1)
    {
 FUNC_0 ("R_TextureNumForName: %s not found",
   VAR_0);
    }
    return VAR_1;
}
