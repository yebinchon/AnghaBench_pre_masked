
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (char const*,char*,int const,scalar_t__*) ;
 int FUNC_1 (char const*,scalar_t__*,int const,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_5 (int ,scalar_t__*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_6(void *VAR_4)
{
    static const char *VAR_5 = "RX_TASK";
    FUNC_2(VAR_5, VAR_0);
    uint8_t* VAR_6 = (uint8_t*) FUNC_4(VAR_1+1);
    while (1) {
        const int VAR_7 = FUNC_5(VAR_2, VAR_6, VAR_1, 1000 / VAR_3);
        if (VAR_7 > 0) {
            VAR_6[VAR_7] = 0;
            FUNC_0(VAR_5, "Read %d bytes: '%s'", VAR_7, VAR_6);
            FUNC_1(VAR_5, VAR_6, VAR_7, VAR_0);
        }
    }
    FUNC_3(VAR_6);
}
