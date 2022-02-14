
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int* coords; } ;
typedef TYPE_1__ TESSvertex ;
typedef int TESSreal ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1( TESSvertex *VAR_0, TESSvertex *VAR_1, TESSvertex *VAR_2,
        TESSreal *VAR_3 )







{
 TESSreal VAR_4 = FUNC_0( VAR_1, VAR_0 );
 TESSreal VAR_5 = FUNC_0( VAR_2, VAR_0 );

 VAR_3[0] = (TESSreal)0.5 * VAR_5 / (VAR_4 + VAR_5);
 VAR_3[1] = (TESSreal)0.5 * VAR_4 / (VAR_4 + VAR_5);
 VAR_0->coords[0] += VAR_3[0]*VAR_1->coords[0] + VAR_3[1]*VAR_2->coords[0];
 VAR_0->coords[1] += VAR_3[0]*VAR_1->coords[1] + VAR_3[1]*VAR_2->coords[1];
 VAR_0->coords[2] += VAR_3[0]*VAR_1->coords[2] + VAR_3[1]*VAR_2->coords[2];
}
