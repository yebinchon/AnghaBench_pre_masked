
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct AVAESCTR {scalar_t__ block_offset; int counter; int aes; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int const*,int,int ) ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4(struct AVAESCTR *VAR_1, const uint8_t *VAR_2)
{
    VAR_1->aes = FUNC_1();
    if (!VAR_1->aes) {
        return FUNC_0(VAR_0);
    }

    FUNC_2(VAR_1->aes, VAR_2, 128, 0);

    FUNC_3(VAR_1->counter, 0, sizeof(VAR_1->counter));
    VAR_1->block_offset = 0;

    return 0;
}
