
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int bits_left; } ;
typedef TYPE_1__ GetBitContext ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 unsigned int FUNC_3 (int ,TYPE_1__*,int) ;
 unsigned int FUNC_4 (int) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int) ;
 unsigned int FUNC_7 (TYPE_1__*,int,int) ;
 int VAR_0 ;
 int FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static inline unsigned int FUNC_9(GetBitContext *VAR_1, int VAR_2)
{
    register unsigned int VAR_3;
    FUNC_2(VAR_0, VAR_1);
    FUNC_6(VAR_2>0 && VAR_2<=25);
    FUNC_5(VAR_0, VAR_1);
    VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
    FUNC_1(VAR_0, VAR_1, VAR_2);
    FUNC_0(VAR_0, VAR_1);

    FUNC_6(VAR_3 < FUNC_4(1) << VAR_2);
    return VAR_3;
}
