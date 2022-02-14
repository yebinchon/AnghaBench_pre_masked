
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int URLContext ;
struct TYPE_5__ {int size; int * data; scalar_t__ timestamp; } ;
typedef TYPE_1__ RTMPPacket ;
typedef int RTMPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (int **,int) ;
 int FUNC_3 (int **,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ,scalar_t__,int) ;
 int FUNC_5 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_4, RTMPContext *VAR_5, RTMPPacket *VAR_6)
{
    RTMPPacket VAR_7;
    uint8_t *VAR_8;
    int VAR_9;

    if (VAR_6->size < 6) {
        FUNC_1(VAR_4, VAR_1, "Too short ping packet (%d)\n",
               VAR_6->size);
        return VAR_0;
    }

    if ((VAR_9 = FUNC_4(&VAR_7, VAR_2,VAR_3,
                                     VAR_6->timestamp + 1, 6)) < 0)
        return VAR_9;

    VAR_8 = VAR_7.data;
    FUNC_2(&VAR_8, 7);
    FUNC_3(&VAR_8, FUNC_0(VAR_6->data+2));

    return FUNC_5(VAR_5, &VAR_7, 0);
}
