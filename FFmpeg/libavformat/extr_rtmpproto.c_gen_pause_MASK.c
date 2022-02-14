
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int URLContext ;
struct TYPE_8__ {int stream_id; } ;
struct TYPE_7__ {int * data; int extra; } ;
typedef TYPE_1__ RTMPPacket ;
typedef TYPE_2__ RTMPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 int FUNC_1 (int **,int) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int **,int ) ;
 int FUNC_4 (int **,char*) ;
 int FUNC_5 (TYPE_1__*,int,int ,int ,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_7(URLContext *VAR_2, RTMPContext *VAR_3, int VAR_4, uint32_t VAR_5)
{
    RTMPPacket VAR_6;
    uint8_t *VAR_7;
    int VAR_8;

    FUNC_0(VAR_2, VAR_0, "Sending pause command for timestamp %d\n",
           VAR_5);

    if ((VAR_8 = FUNC_5(&VAR_6, 3, VAR_1, 0, 29)) < 0)
        return VAR_8;

    VAR_6.extra = VAR_3->stream_id;

    VAR_7 = VAR_6.data;
    FUNC_4(&VAR_7, "pause");
    FUNC_3(&VAR_7, 0);
    FUNC_2(&VAR_7);
    FUNC_1(&VAR_7, VAR_4);
    FUNC_3(&VAR_7, VAR_5);

    return FUNC_6(VAR_3, &VAR_6, 1);
}
