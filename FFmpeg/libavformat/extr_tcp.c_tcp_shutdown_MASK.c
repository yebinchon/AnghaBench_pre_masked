
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int fd; } ;
typedef TYPE_2__ TCPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(URLContext *VAR_5, int VAR_6)
{
    TCPContext *VAR_7 = VAR_5->priv_data;
    int VAR_8;

    if (VAR_6 & VAR_1 && VAR_6 & VAR_0) {
        VAR_8 = VAR_3;
    } else if (VAR_6 & VAR_1) {
        VAR_8 = VAR_4;
    } else {
        VAR_8 = VAR_2;
    }

    return FUNC_0(VAR_7->fd, VAR_8);
}
