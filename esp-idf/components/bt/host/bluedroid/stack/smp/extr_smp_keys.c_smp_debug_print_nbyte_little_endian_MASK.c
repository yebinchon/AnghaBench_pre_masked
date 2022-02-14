
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int p_buf ;
typedef int UINT8 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int*,int ,int) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

void FUNC_3(UINT8 *VAR_0, const UINT8 *VAR_1, UINT8 VAR_2)
{

    int VAR_3, VAR_4;
    int VAR_5 = 32;
    int VAR_6;
    UINT8 VAR_7[512];

    FUNC_0("%s(LSB ~ MSB):\n", VAR_1);
    FUNC_1(VAR_7, 0, sizeof(VAR_7));
    VAR_6 = VAR_2 % VAR_5 ? VAR_2 / VAR_5 + 1 : VAR_2 / VAR_5;

    VAR_3 = 0;
    for (int VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        for (int VAR_9 = 0, VAR_10 = 0; (VAR_3 < VAR_2) && (VAR_9 < VAR_5); VAR_9++, VAR_3++) {
            VAR_10 += FUNC_2((char *)&VAR_7[VAR_10], "%02x ", VAR_0[VAR_3]);
        }
        FUNC_0("  [%03d]: %s", VAR_8 * VAR_5, VAR_7);
    }

}
