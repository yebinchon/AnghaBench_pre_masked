
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,void const*,size_t) ;

__attribute__((used)) static int
FUNC_2(int VAR_0, const void * VAR_1, size_t VAR_2)
{
    int VAR_3 = 0;

    if (VAR_2 != (size_t)FUNC_1(VAR_0, VAR_1, VAR_2)) {
        VAR_3 = -1;
    }

    if (VAR_3 != 0) {
        FUNC_0("couldn't write output");
    }

    return VAR_3;
}
