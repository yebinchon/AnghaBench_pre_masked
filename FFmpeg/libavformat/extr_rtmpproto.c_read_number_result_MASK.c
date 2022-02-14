
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int strbuffer ;
struct TYPE_3__ {int size; int data; } ;
typedef TYPE_1__ RTMPPacket ;
typedef int GetByteContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,double*) ;
 scalar_t__ FUNC_3 (int *,int *,int,int*) ;
 scalar_t__ FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5(RTMPPacket *VAR_1, double *VAR_2)
{

    uint8_t VAR_3[8];
    int VAR_4;
    double VAR_5;
    GetByteContext VAR_6;

    FUNC_0(&VAR_6, VAR_1->data, VAR_1->size);


    if (FUNC_3(&VAR_6, VAR_3, sizeof(VAR_3), &VAR_4))
        return VAR_0;
    if (FUNC_4(VAR_3, "_result"))
        return VAR_0;

    if (FUNC_2(&VAR_6, &VAR_5))
        return VAR_0;

    if (FUNC_1(&VAR_6))
        return VAR_0;

    if (FUNC_2(&VAR_6, &VAR_5))
        return VAR_0;
    else
        *VAR_2 = VAR_5;

    return 0;
}
