
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int filename ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int nb_inputs; scalar_t__ format; int filename; } ;
typedef int StreamContext ;
typedef TYPE_1__ SignatureContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,int,int ,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (TYPE_2__*,int *,char*) ;
 int FUNC_5 (TYPE_2__*,int *,char*) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_2, StreamContext *VAR_3, int VAR_4)
{
    SignatureContext* VAR_5 = VAR_2->priv;
    char VAR_6[1024];

    if (VAR_5->nb_inputs > 1) {

        FUNC_1(FUNC_2(VAR_6, sizeof(VAR_6), VAR_5->filename, VAR_4) == 0);
    } else {
        if (FUNC_3(VAR_6, VAR_5->filename, sizeof(VAR_6)) >= sizeof(VAR_6))
            return FUNC_0(VAR_0);
    }
    if (VAR_5->format == VAR_1) {
        return FUNC_5(VAR_2, VAR_3, VAR_6);
    } else {
        return FUNC_4(VAR_2, VAR_3, VAR_6);
    }
}
