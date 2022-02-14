
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;
 int VAR_0 ;

int FUNC_2(void)
{
    unsigned VAR_1;

    for(VAR_1=0; VAR_1<65536; VAR_1++) {
        unsigned VAR_2 = VAR_1*VAR_1;
        unsigned VAR_3 = FUNC_0(VAR_2);
        unsigned VAR_4 = FUNC_0(VAR_2-1);
        if (VAR_2 && VAR_3 != VAR_1) {
            FUNC_1(VAR_0, "ff_sqrt failed at %u with %u\n", VAR_2, VAR_3);
            return 1;
        }
        if (VAR_1 && VAR_4 != VAR_1 - 1) {
            FUNC_1(VAR_0, "ff_sqrt failed at %u with %u\n", VAR_2, VAR_3);
            return 1;
        }
    }
    return 0;
}
