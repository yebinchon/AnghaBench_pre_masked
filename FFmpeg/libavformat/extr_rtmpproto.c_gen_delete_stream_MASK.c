
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int URLContext ;
struct TYPE_8__ {int stream_id; int nb_invokes; } ;
struct TYPE_7__ {int * data; } ;
typedef TYPE_1__ RTMPPacket ;
typedef TYPE_2__ RTMPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,int ) ;
 int FUNC_3 (int **,char*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ,int) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_3, RTMPContext *VAR_4)
{
    RTMPPacket VAR_5;
    uint8_t *VAR_6;
    int VAR_7;

    FUNC_0(VAR_3, VAR_0, "Deleting stream...\n");

    if ((VAR_7 = FUNC_4(&VAR_5, VAR_2, VAR_1,
                                     0, 34)) < 0)
        return VAR_7;

    VAR_6 = VAR_5.data;
    FUNC_3(&VAR_6, "deleteStream");
    FUNC_2(&VAR_6, ++VAR_4->nb_invokes);
    FUNC_1(&VAR_6);
    FUNC_2(&VAR_6, VAR_4->stream_id);

    return FUNC_5(VAR_4, &VAR_5, 0);
}
