
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int fd; } ;
typedef TYPE_1__ UnixContext ;
struct TYPE_5__ {int flags; TYPE_1__* priv_data; } ;
typedef TYPE_2__ URLContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int const*,int,int ) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
    UnixContext *VAR_5 = VAR_2->priv_data;
    int VAR_6;

    if (!(VAR_2->flags & VAR_0)) {
        VAR_6 = FUNC_1(VAR_5->fd, 1);
        if (VAR_6 < 0)
            return VAR_6;
    }
    VAR_6 = FUNC_2(VAR_5->fd, VAR_3, VAR_4, VAR_1);
    return VAR_6 < 0 ? FUNC_0() : VAR_6;
}
