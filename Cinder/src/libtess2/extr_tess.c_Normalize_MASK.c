
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TESSreal ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2( TESSreal VAR_0[3] )
{
 TESSreal VAR_1 = VAR_0[0]*VAR_0[0] + VAR_0[1]*VAR_0[1] + VAR_0[2]*VAR_0[2];

 FUNC_0( VAR_1 > 0 );
 VAR_1 = FUNC_1( VAR_1 );
 VAR_0[0] /= VAR_1;
 VAR_0[1] /= VAR_1;
 VAR_0[2] /= VAR_1;
}
