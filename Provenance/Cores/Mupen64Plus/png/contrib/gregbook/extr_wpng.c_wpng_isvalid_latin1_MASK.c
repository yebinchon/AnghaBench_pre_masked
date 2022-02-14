
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uch ;



__attribute__((used)) static int FUNC_0(uch *VAR_0, int VAR_1)
{
    int VAR_2, VAR_3 = -1;

    for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
        if (VAR_0[VAR_2] == 10 || (VAR_0[VAR_2] > 31 && VAR_0[VAR_2] < 127) || VAR_0[VAR_2] > 160)
            continue;
        if (VAR_3 < 0 || (VAR_0[VAR_3] != 27 && VAR_0[VAR_2] == 27))
            VAR_3 = VAR_2;
    }

    return VAR_3;
}
