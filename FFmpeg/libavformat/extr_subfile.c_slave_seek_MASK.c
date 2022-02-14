
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {scalar_t__ pos; int h; } ;
typedef TYPE_2__ SubfileContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_3)
{
    SubfileContext *VAR_4 = VAR_3->priv_data;
    int64_t VAR_5;

    if ((VAR_5 = FUNC_2(VAR_4->h, VAR_4->pos, VAR_2)) != VAR_4->pos) {
        if (VAR_5 >= 0)
            VAR_5 = VAR_0;
        FUNC_1(VAR_3, VAR_1, "Impossible to seek in file: %s\n",
               FUNC_0(VAR_5));
        return VAR_5;
    }
    return 0;
}
