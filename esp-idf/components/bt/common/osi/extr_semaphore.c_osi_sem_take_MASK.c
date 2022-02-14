
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int osi_sem_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int) ;

int
FUNC_1(osi_sem_t *VAR_4, uint32_t VAR_5)
{
    int VAR_6 = 0;

    if (VAR_5 == VAR_0) {
        if (FUNC_0(*VAR_4, VAR_2) != VAR_1) {
            VAR_6 = -1;
        }
    } else {
        if (FUNC_0(*VAR_4, VAR_5 / VAR_3) != VAR_1) {
            VAR_6 = -2;
        }
    }

    return VAR_6;
}
