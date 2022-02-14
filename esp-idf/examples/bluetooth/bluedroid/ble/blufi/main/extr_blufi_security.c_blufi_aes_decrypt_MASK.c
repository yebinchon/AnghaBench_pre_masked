
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int aes; int iv; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,int ,int,size_t*,int *,int *,int *) ;
 int FUNC_1 (int *,int ,int) ;

int FUNC_2(uint8_t VAR_2, uint8_t *VAR_3, int VAR_4)
{
    int VAR_5;
    size_t VAR_6 = 0;
    uint8_t VAR_7[16];

    FUNC_1(VAR_7, VAR_1->iv, sizeof(VAR_1->iv));
    VAR_7[0] = VAR_2;

    VAR_5 = FUNC_0(&VAR_1->aes, VAR_0, VAR_4, &VAR_6, VAR_7, VAR_3, VAR_3);
    if (VAR_5) {
        return -1;
    }

    return VAR_4;
}
