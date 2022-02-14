
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IsdnCardState {int dummy; } ;
typedef int WORD ;
typedef int BYTE ;


 int FUNC_0 (struct IsdnCardState*,int) ;
 int FUNC_1 (struct IsdnCardState*,int,int) ;

__attribute__((used)) static WORD
FUNC_2(struct IsdnCardState *VAR_0, BYTE VAR_1)
{
        WORD VAR_2;

        if(VAR_1 < 8) {
         VAR_2 = FUNC_0(VAR_0, VAR_1);
                VAR_2 += 256*FUNC_0(VAR_0, VAR_1);
        }

        else {
                FUNC_1(VAR_0, 0x00, VAR_1);
         VAR_2 = FUNC_0(VAR_0, 0x01);
                VAR_2 += 256*FUNC_0(VAR_0, 0x01);
        }
 return (VAR_2);
}
