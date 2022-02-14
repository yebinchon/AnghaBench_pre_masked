
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mach_header {int magic; } ;




 int FUNC_0 (void const*,void const*) ;
 int FUNC_1 (void const*,void const*) ;

bool
FUNC_2(const void *VAR_0, const void *VAR_1)
{
    const struct mach_header *VAR_2 = (const struct mach_header *) VAR_0;
    bool VAR_3 = 0;

    switch (VAR_2->magic) {
        case 129:
            VAR_3 = FUNC_0(VAR_0, VAR_1);
            break;

        case 128:
            VAR_3 = FUNC_1(VAR_0, VAR_1);
            break;

        default:
            VAR_3 = 0;
            break;
    }

    return VAR_3;
}
