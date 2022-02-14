
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long*) ;
 int FUNC_1 (unsigned long*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_4 ;
 unsigned long* VAR_5 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(unsigned long *VAR_6)
{
        int VAR_7;
 unsigned long VAR_8;

        FUNC_3(&VAR_4, VAR_8);
        VAR_5[0] = 0;
        VAR_7 = FUNC_2(VAR_0, VAR_1, FUNC_0(VAR_5), 0);
        FUNC_1(VAR_5);
        if (VAR_7 == VAR_3) {
                *VAR_6 = VAR_5[0];
        } else {
                *VAR_6 = VAR_2;
        }
        FUNC_4(&VAR_4, VAR_8);

        return VAR_7;
}
