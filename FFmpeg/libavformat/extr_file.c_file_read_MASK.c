
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {scalar_t__ follow; int fd; int blocksize; } ;
typedef TYPE_2__ FileContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_3, unsigned char *VAR_4, int VAR_5)
{
    FileContext *VAR_6 = VAR_3->priv_data;
    int VAR_7;
    VAR_5 = FUNC_1(VAR_5, VAR_6->blocksize);
    VAR_7 = FUNC_2(VAR_6->fd, VAR_4, VAR_5);
    if (VAR_7 == 0 && VAR_6->follow)
        return FUNC_0(VAR_1);
    if (VAR_7 == 0)
        return VAR_0;
    return (VAR_7 == -1) ? FUNC_0(VAR_2) : VAR_7;
}
