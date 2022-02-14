
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int URLContext ;
struct TYPE_8__ {char* playpath; int nb_invokes; } ;
struct TYPE_7__ {int * data; } ;
typedef TYPE_1__ RTMPPacket ;
typedef TYPE_2__ RTMPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int **,int ) ;
 int FUNC_2 (int **,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_2, RTMPContext *VAR_3)
{
    RTMPPacket VAR_4;
    uint8_t *VAR_5;
    int VAR_6;

    if ((VAR_6 = FUNC_3(&VAR_4, VAR_1, VAR_0,
                                     0, 31 + FUNC_5(VAR_3->playpath))) < 0)
        return VAR_6;

    VAR_5 = VAR_4.data;
    FUNC_2(&VAR_5, "getStreamLength");
    FUNC_1(&VAR_5, ++VAR_3->nb_invokes);
    FUNC_0(&VAR_5);
    FUNC_2(&VAR_5, VAR_3->playpath);

    return FUNC_4(VAR_3, &VAR_4, 1);
}
