
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double* VAR_0 ;
 int FUNC_0 (char*) ;

void FUNC_1 (void)
{
    int VAR_1;
    int VAR_2;

    double* VAR_3;
    union
    {
 double d;
 unsigned u[2];
    } VAR_4;

    FUNC_0 ("building exptable2...\n");
    VAR_3 = VAR_0;
    for (VAR_1=0 ; VAR_1<256 ; VAR_1++)
    {
 VAR_4.u[0] = VAR_1 | (VAR_1<<8) | (VAR_1<<16) | (VAR_1<<24);
 for (VAR_2=0 ; VAR_2<256 ; VAR_2++)
 {
     VAR_4.u[1] = VAR_2 | (VAR_2<<8) | (VAR_2<<16) | (VAR_2<<24);
     *VAR_3++ = VAR_4.d;
 }
    }
    FUNC_0 ("done.\n");
}
