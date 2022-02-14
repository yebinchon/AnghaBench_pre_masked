
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* priv_data; int interrupt_callback; int flags; int filename; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_9__ {int fd; int listen_timeout; int listen; } ;
typedef TYPE_2__ TCPContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__**,int ,int ,int *) ;
 int FUNC_3 (TYPE_1__**) ;

__attribute__((used)) static int FUNC_4(URLContext *VAR_0, URLContext **VAR_1)
{
    TCPContext *VAR_2 = VAR_0->priv_data;
    TCPContext *VAR_3;
    int VAR_4;
    FUNC_0(VAR_2->listen);
    if ((VAR_4 = FUNC_2(VAR_1, VAR_0->filename, VAR_0->flags, &VAR_0->interrupt_callback)) < 0)
        return VAR_4;
    VAR_3 = (*VAR_1)->priv_data;
    VAR_4 = FUNC_1(VAR_2->fd, VAR_2->listen_timeout, VAR_0);
    if (VAR_4 < 0) {
        FUNC_3(VAR_1);
        return VAR_4;
    }
    VAR_3->fd = VAR_4;
    return 0;
}
