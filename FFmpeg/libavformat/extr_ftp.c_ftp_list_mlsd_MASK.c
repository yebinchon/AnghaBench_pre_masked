
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int listing_method; } ;
typedef TYPE_1__ FTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char const*,int const*,int *) ;

__attribute__((used)) static int FUNC_2(FTPContext *VAR_2)
{
    static const char *VAR_3 = "MLSD\r\n";
    static const int VAR_4[] = {150, 500, 0};

    if (FUNC_1(VAR_2, VAR_3, VAR_4, ((void*)0)) != 150)
        return FUNC_0(VAR_0);
    VAR_2->listing_method = VAR_1;
    return 0;
}
