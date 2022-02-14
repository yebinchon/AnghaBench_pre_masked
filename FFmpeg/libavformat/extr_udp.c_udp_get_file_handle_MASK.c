
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int udp_fd; } ;
typedef TYPE_2__ UDPContext ;



__attribute__((used)) static int FUNC_0(URLContext *VAR_0)
{
    UDPContext *VAR_1 = VAR_0->priv_data;
    return VAR_1->udp_fd;
}
