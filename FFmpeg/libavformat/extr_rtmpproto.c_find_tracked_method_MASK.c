
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* priv_data; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_11__ {int nb_tracked_methods; TYPE_1__* tracked_methods; } ;
struct TYPE_10__ {scalar_t__ size; scalar_t__ data; } ;
struct TYPE_8__ {double id; char* name; } ;
typedef TYPE_3__ RTMPPacket ;
typedef TYPE_4__ RTMPContext ;
typedef int GetByteContext ;


 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (int *,double*) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_0, RTMPPacket *VAR_1, int VAR_2,
                               char **VAR_3)
{
    RTMPContext *VAR_4 = VAR_0->priv_data;
    GetByteContext VAR_5;
    double VAR_6;
    int VAR_7;
    int VAR_8;

    FUNC_0(&VAR_5, VAR_1->data + VAR_2, VAR_1->size - VAR_2);
    if ((VAR_7 = FUNC_2(&VAR_5, &VAR_6)) < 0)
        return VAR_7;

    for (VAR_8 = 0; VAR_8 < VAR_4->nb_tracked_methods; VAR_8++) {
        if (VAR_4->tracked_methods[VAR_8].id != VAR_6)
            continue;

        *VAR_3 = VAR_4->tracked_methods[VAR_8].name;
        FUNC_1(VAR_4, VAR_8);
        break;
    }

    return 0;
}
