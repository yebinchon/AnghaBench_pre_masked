
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bufpos; int flags; scalar_t__ buf; int reply; } ;
typedef TYPE_1__ client ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,char const*,size_t) ;

int FUNC_2(client *VAR_3, const char *VAR_4, size_t VAR_5) {
    size_t VAR_6 = sizeof(VAR_3->buf)-VAR_3->bufpos;

    if (VAR_3->flags & VAR_0) return VAR_2;



    if (FUNC_0(VAR_3->reply) > 0) return VAR_1;


    if (VAR_5 > VAR_6) return VAR_1;

    FUNC_1(VAR_3->buf+VAR_3->bufpos,VAR_4,VAR_5);
    VAR_3->bufpos+=VAR_5;
    return VAR_2;
}
