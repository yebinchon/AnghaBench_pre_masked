
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int network ;


 int VAR_0 ;
 long FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (char*,float) ;

void FUNC_3(char *VAR_1)
{
    VAR_0 = -1;
    network *VAR_2 = FUNC_1(VAR_1);
    long VAR_3 = FUNC_0(VAR_2);
    FUNC_2("Floating Point Operations: %ld\n", VAR_3);
    FUNC_2("Floating Point Operations: %.2f Bn\n", (float)VAR_3/1000000000.);
}
