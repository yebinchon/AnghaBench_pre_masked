
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct G722Band {int log_factor; int scale_factor; } ;


 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (struct G722Band*,int const) ;
 scalar_t__* VAR_0 ;
 int FUNC_2 (int) ;

void FUNC_3(struct G722Band *VAR_1, const int VAR_2,
                                  const int VAR_3)
{
    FUNC_1(VAR_1, VAR_2);


    VAR_1->log_factor = FUNC_0((VAR_1->log_factor * 127 >> 7) +
                                 VAR_0[VAR_3&1], 0, 22528);
    VAR_1->scale_factor = FUNC_2(VAR_1->log_factor - (10 << 11));
}
