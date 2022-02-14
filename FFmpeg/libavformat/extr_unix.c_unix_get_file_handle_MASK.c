
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; } ;
typedef TYPE_1__ UnixContext ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ URLContext ;



__attribute__((used)) static int FUNC_0(URLContext *VAR_0)
{
    UnixContext *VAR_1 = VAR_0->priv_data;
    return VAR_1->fd;
}
