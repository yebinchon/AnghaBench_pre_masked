
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct G722Band {int scale_factor; int log_factor; } ;


 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (struct G722Band*,int) ;
 int* VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__* VAR_1 ;

void FUNC_3(struct G722Band *VAR_2, const int VAR_3)
{
    FUNC_1(VAR_2,
                           VAR_2->scale_factor * VAR_0[VAR_3] >> 10);


    VAR_2->log_factor = FUNC_0((VAR_2->log_factor * 127 >> 7) +
                                 VAR_1[VAR_3], 0, 18432);
    VAR_2->scale_factor = FUNC_2(VAR_2->log_factor - (8 << 11));
}
