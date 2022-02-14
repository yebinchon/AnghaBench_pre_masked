
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int URLContext ;
struct TYPE_8__ {int nb_invokes; } ;
struct TYPE_7__ {int * data; } ;
typedef TYPE_1__ RTMPPacket ;
typedef TYPE_2__ RTMPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int **,int ) ;
 int FUNC_2 (int **,char const*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_2, RTMPContext *VAR_3,
                                  const char *VAR_4)
{
    RTMPPacket VAR_5;
    uint8_t *VAR_6;
    int VAR_7;

    if ((VAR_7 = FUNC_3(&VAR_5, VAR_1, VAR_0,
                                     0, 27 + FUNC_5(VAR_4))) < 0)
        return VAR_7;

    VAR_6 = VAR_5.data;
    FUNC_2(&VAR_6, "FCSubscribe");
    FUNC_1(&VAR_6, ++VAR_3->nb_invokes);
    FUNC_0(&VAR_6);
    FUNC_2(&VAR_6, VAR_4);

    return FUNC_4(VAR_3, &VAR_5, 1);
}
