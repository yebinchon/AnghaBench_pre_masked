
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ type; int fd; } ;
typedef TYPE_1__ UnixContext ;
struct TYPE_5__ {int flags; TYPE_1__* priv_data; } ;
typedef TYPE_2__ URLContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_3, uint8_t *VAR_4, int VAR_5)
{
    UnixContext *VAR_6 = VAR_3->priv_data;
    int VAR_7;

    if (!(VAR_3->flags & VAR_1)) {
        VAR_7 = FUNC_1(VAR_6->fd, 0);
        if (VAR_7 < 0)
            return VAR_7;
    }
    VAR_7 = FUNC_2(VAR_6->fd, VAR_4, VAR_5, 0);
    if (!VAR_7 && VAR_6->type == VAR_2)
        return VAR_0;
    return VAR_7 < 0 ? FUNC_0() : VAR_7;
}
