
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int socklen_t ;
typedef int avail ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {scalar_t__ recv_buffer_size; int fd; } ;
typedef TYPE_2__ TCPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int ,int*,int*) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_3)
{
    TCPContext *VAR_4 = VAR_3->priv_data;
    int VAR_5;
    socklen_t VAR_6 = sizeof(VAR_5);
    if (FUNC_2(VAR_4->fd, VAR_1, VAR_2, &VAR_5, &VAR_6)) {
        return FUNC_1();
    }
    return VAR_5;
}
