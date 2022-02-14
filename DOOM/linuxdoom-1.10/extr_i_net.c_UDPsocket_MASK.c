
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3 (void)
{
    int VAR_4;


    VAR_4 = FUNC_1 (VAR_1, VAR_2, VAR_0);
    if (VAR_4<0)
 FUNC_0 ("can't create socket: %s",FUNC_2(VAR_3));

    return VAR_4;
}
