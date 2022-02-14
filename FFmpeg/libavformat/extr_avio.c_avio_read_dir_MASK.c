
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* prot; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_8__ {TYPE_2__* url_context; } ;
struct TYPE_6__ {int (* url_read_dir ) (TYPE_2__*,int **) ;} ;
typedef int AVIODirEntry ;
typedef TYPE_3__ AVIODirContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (TYPE_2__*,int **) ;

int FUNC_3(AVIODirContext *VAR_1, AVIODirEntry **VAR_2)
{
    URLContext *VAR_3;
    int VAR_4;

    if (!VAR_1 || !VAR_1->url_context)
        return FUNC_0(VAR_0);
    VAR_3 = VAR_1->url_context;
    if ((VAR_4 = VAR_3->prot->url_read_dir(VAR_3, VAR_2)) < 0)
        FUNC_1(VAR_2);
    return VAR_4;
}
