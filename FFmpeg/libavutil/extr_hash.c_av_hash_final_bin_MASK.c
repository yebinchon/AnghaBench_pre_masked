
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct AVHashContext {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (struct AVHashContext*,int *) ;
 unsigned int FUNC_2 (struct AVHashContext*) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int ,int) ;

void FUNC_5(struct AVHashContext *VAR_1, uint8_t *VAR_2, int VAR_3)
{
    uint8_t VAR_4[VAR_0];
    unsigned VAR_5 = FUNC_2(VAR_1);

    FUNC_1(VAR_1, VAR_4);
    FUNC_3(VAR_2, VAR_4, FUNC_0(VAR_3, VAR_5));
    if (VAR_3 > VAR_5)
        FUNC_4(VAR_2 + VAR_5, 0, VAR_3 - VAR_5);
}
