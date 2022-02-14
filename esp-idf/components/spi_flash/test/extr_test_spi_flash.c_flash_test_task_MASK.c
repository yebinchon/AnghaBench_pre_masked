
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct flash_test_ctx {int offset; int fail; int done; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int const,int *,int) ;
 scalar_t__ FUNC_3 (int const,int const*,int) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_4)
{
    struct flash_test_ctx *VAR_5 = (struct flash_test_ctx *) VAR_4;
    FUNC_4(100 / VAR_2);
    const uint32_t VAR_6 = VAR_3 / VAR_1 + VAR_5->offset;
    FUNC_0("t%d\n", VAR_6);
    FUNC_0("es%d\n", VAR_6);
    if (FUNC_1(VAR_6) != VAR_0) {
        VAR_5->fail = 1;
        FUNC_0("Erase failed\r\n");
        FUNC_6(VAR_5->done);
        FUNC_5(((void*)0));
    }
    FUNC_0("ed%d\n", VAR_6);

    FUNC_4(0 / VAR_2);

    uint32_t VAR_7 = 0xabcd1234;
    for (uint32_t VAR_8 = 0; VAR_8 < VAR_1; VAR_8 += 4) {
        if (FUNC_3(VAR_6 * VAR_1 + VAR_8, (const uint8_t *) &VAR_7, 4) != VAR_0) {
            FUNC_0("Write failed at offset=%d\r\n", VAR_8);
            VAR_5->fail = 1;
            break;
        }
    }
    FUNC_0("wd%d\n", VAR_6);

    FUNC_4(0 / VAR_2);

    uint32_t VAR_9;
    for (uint32_t VAR_10 = 0; VAR_10 < VAR_1; VAR_10 += 4) {
        if (FUNC_2(VAR_6 * VAR_1 + VAR_10, (uint8_t *) &VAR_9, 4) != VAR_0) {
            FUNC_0("Read failed at offset=%d\r\n", VAR_10);
            VAR_5->fail = 1;
            break;
        }
        if (VAR_9 != VAR_7) {
            FUNC_0("Read invalid value=%08x at offset=%d\r\n", VAR_9, VAR_10);
            VAR_5->fail = 1;
            break;
        }
    }
    FUNC_0("td%d\n", VAR_6);
    FUNC_6(VAR_5->done);
    FUNC_5(((void*)0));
}
