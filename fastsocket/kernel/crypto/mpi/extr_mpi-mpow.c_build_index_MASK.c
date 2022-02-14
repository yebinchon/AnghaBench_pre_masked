
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MPI ;


 scalar_t__ FUNC_0 (int const,int) ;

__attribute__((used)) static int
FUNC_1(const MPI *VAR_0, int VAR_1, int VAR_2, int VAR_3 )
{
    int VAR_4, VAR_5;
    int VAR_6 = 0;

    VAR_5 = VAR_3-VAR_2;
    for(VAR_4=VAR_1-1; VAR_4 >= 0; VAR_4-- ) {
 VAR_6 <<= 1;
 if( FUNC_0( VAR_0[VAR_4], VAR_5 ) )
     VAR_6 |= 1;
    }
    return VAR_6;
}
