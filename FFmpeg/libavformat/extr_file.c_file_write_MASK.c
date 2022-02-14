
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int fd; int blocksize; } ;
typedef TYPE_2__ FileContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_1, const unsigned char *VAR_2, int VAR_3)
{
    FileContext *VAR_4 = VAR_1->priv_data;
    int VAR_5;
    VAR_3 = FUNC_1(VAR_3, VAR_4->blocksize);
    VAR_5 = FUNC_2(VAR_4->fd, VAR_2, VAR_3);
    return (VAR_5 == -1) ? FUNC_0(VAR_0) : VAR_5;
}
