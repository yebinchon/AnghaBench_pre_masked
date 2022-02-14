
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; TYPE_1__* prot; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_5__ {int url_read; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,unsigned char*,int,int,int ) ;

int FUNC_2(URLContext *VAR_2, unsigned char *VAR_3, int VAR_4)
{
    if (!(VAR_2->flags & VAR_0))
        return FUNC_0(VAR_1);
    return FUNC_1(VAR_2, VAR_3, VAR_4, 1, VAR_2->prot->url_read);
}
