
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct AVHashContext {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (struct AVHashContext*,int*) ;
 unsigned int FUNC_2 (struct AVHashContext*) ;
 int FUNC_3 (int*,int,char*,int) ;

void FUNC_4(struct AVHashContext *VAR_1, uint8_t *VAR_2, int VAR_3)
{
    uint8_t VAR_4[VAR_0];
    unsigned VAR_5 = FUNC_2(VAR_1), VAR_6;

    FUNC_1(VAR_1, VAR_4);
    for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5, VAR_3 / 2); VAR_6++)
        FUNC_3(VAR_2 + VAR_6 * 2, VAR_3 - VAR_6 * 2, "%02x", VAR_4[VAR_6]);
}
