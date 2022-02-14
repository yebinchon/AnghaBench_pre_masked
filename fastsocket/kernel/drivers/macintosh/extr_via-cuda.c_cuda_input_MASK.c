
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,int,unsigned char) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(unsigned char *VAR_0, int VAR_1)
{
    int VAR_2;

    switch (VAR_0[0]) {
    case 128:
 break;

    default:
 FUNC_1("data from cuda (%d bytes):", VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2)
     FUNC_1(" %.2x", VAR_0[VAR_2]);
 FUNC_1("\n");
    }
}
