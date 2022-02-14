
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int URLContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,char*,char const*,...) ;
 int * FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_4, uint8_t **VAR_5, int *VAR_6,
                       uint8_t *VAR_7, int VAR_8,
                       const char *VAR_9)
{
    if (!*VAR_6) {
        if (!VAR_8) {
            FUNC_1(VAR_4, VAR_0, "%s not set\n", VAR_9);
            return FUNC_0(VAR_2);
        } else if (VAR_8 != VAR_1) {
            FUNC_1(VAR_4, VAR_0,
                   "invalid %s size (%d bytes, block size is %d)\n",
                   VAR_9, VAR_8, VAR_1);
            return FUNC_0(VAR_2);
        }
        *VAR_5 = FUNC_2(VAR_7, VAR_8);
        if (!*VAR_5)
            return FUNC_0(VAR_3);
        *VAR_6 = VAR_8;
    } else if (*VAR_6 != VAR_1) {
        FUNC_1(VAR_4, VAR_0,
               "invalid %s size (%d bytes, block size is %d)\n",
               VAR_9, *VAR_6, VAR_1);
        return FUNC_0(VAR_2);
    }
    return 0;
}
