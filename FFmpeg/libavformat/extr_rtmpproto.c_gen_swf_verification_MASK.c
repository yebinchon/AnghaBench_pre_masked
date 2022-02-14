
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int URLContext ;
struct TYPE_8__ {int swfverification; } ;
struct TYPE_7__ {int * data; } ;
typedef TYPE_1__ RTMPPacket ;
typedef TYPE_2__ RTMPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int **,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(URLContext *VAR_3, RTMPContext *VAR_4)
{
    RTMPPacket VAR_5;
    uint8_t *VAR_6;
    int VAR_7;

    FUNC_0(VAR_3, VAR_0, "Sending SWF verification...\n");
    if ((VAR_7 = FUNC_2(&VAR_5, VAR_1, VAR_2,
                                     0, 44)) < 0)
        return VAR_7;

    VAR_6 = VAR_5.data;
    FUNC_1(&VAR_6, 27);
    FUNC_3(VAR_6, VAR_4->swfverification, 42);

    return FUNC_4(VAR_4, &VAR_5, 0);
}
