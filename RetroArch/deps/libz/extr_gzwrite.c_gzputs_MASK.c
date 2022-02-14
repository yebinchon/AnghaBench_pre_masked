
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gzFile ;


 int FUNC_0 (int ,char const*,unsigned int) ;
 scalar_t__ FUNC_1 (char const*) ;

int FUNC_2(gzFile VAR_0, const char *VAR_1)
{
    int VAR_2;
    unsigned VAR_3;


    VAR_3 = (unsigned)FUNC_1(VAR_1);
    VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_3);
    return VAR_2 == 0 && VAR_3 != 0 ? -1 : VAR_2;
}
