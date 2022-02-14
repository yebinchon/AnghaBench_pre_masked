
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int MpegEncContext ;
typedef int GetBitContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(MpegEncContext *VAR_3, GetBitContext *VAR_4, int VAR_5)
{
    uint32_t VAR_6;
    uint8_t VAR_7;

    VAR_6 = FUNC_2(VAR_4, 32);
    if (VAR_6 == VAR_2 || VAR_6 == VAR_0) {

        if ((VAR_5 == 2 || VAR_5 == 4) && VAR_6 == VAR_0) {
            FUNC_3(VAR_4, 32);
            VAR_7 = FUNC_0(VAR_4, 4);
            if (VAR_7 == VAR_1)
                FUNC_1(VAR_3, VAR_4);
        }
    }
}
