
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct AVHashContext {int dummy; } ;
typedef int b64 ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (scalar_t__*,int,scalar_t__*,unsigned int) ;
 int FUNC_3 (struct AVHashContext*,scalar_t__*) ;
 unsigned int FUNC_4 (struct AVHashContext*) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int ) ;

void FUNC_6(struct AVHashContext *VAR_1, uint8_t *VAR_2, int VAR_3)
{
    uint8_t VAR_4[VAR_0], VAR_5[FUNC_0(VAR_0)];
    unsigned VAR_6 = FUNC_4(VAR_1), VAR_7;

    FUNC_3(VAR_1, VAR_4);
    FUNC_2(VAR_5, sizeof(VAR_5), VAR_4, VAR_6);
    VAR_7 = FUNC_0(VAR_6);
    FUNC_5(VAR_2, VAR_5, FUNC_1(VAR_7, VAR_3));
    if (VAR_3 < VAR_7)
        VAR_2[VAR_3 - 1] = 0;
}
