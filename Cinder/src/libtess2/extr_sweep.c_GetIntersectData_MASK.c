
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__* coords; } ;
typedef TYPE_1__ TESSvertex ;
typedef int TESStesselator ;
typedef int TESSreal ;


 int FUNC_0 (int *,TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_2( TESStesselator *VAR_1, TESSvertex *VAR_2,
        TESSvertex *VAR_3, TESSvertex *VAR_4,
        TESSvertex *VAR_5, TESSvertex *VAR_6 )





{
 TESSreal VAR_7[4];

 VAR_2->coords[0] = VAR_2->coords[1] = VAR_2->coords[2] = 0;
 FUNC_1( VAR_2, VAR_3, VAR_4, &VAR_7[0] );
 FUNC_1( VAR_2, VAR_5, VAR_6, &VAR_7[2] );

 FUNC_0( VAR_1, VAR_2, VAR_7, VAR_0 );
}
