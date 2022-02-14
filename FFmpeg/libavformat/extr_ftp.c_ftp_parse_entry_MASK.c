
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int listing_method; } ;
typedef TYPE_2__ FTPContext ;
typedef int AVIODirEntry ;





 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int *) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_0, char *VAR_1, AVIODirEntry *VAR_2)
{
    FTPContext *VAR_3 = VAR_0->priv_data;

    switch (VAR_3->listing_method) {
    case 130:
        return FUNC_0(VAR_1, VAR_2);
    case 129:
        return FUNC_1(VAR_1, VAR_2);
    case 128:
    default:
        return -1;
    }
}
