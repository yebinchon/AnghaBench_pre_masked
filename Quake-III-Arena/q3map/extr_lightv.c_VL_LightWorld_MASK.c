
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ numvolumes; } ;
struct TYPE_3__ {scalar_t__ insolid; } ;


 float FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,float,int ) ;
 int FUNC_7 (char*,int) ;
 int * VAR_1 ;
 int VAR_2 ;
 TYPE_2__** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__** VAR_9 ;

void FUNC_8(void)
{
 int VAR_10, VAR_11, VAR_12;
 float VAR_13;


 FUNC_1( &VAR_1[0], "_color", VAR_2 );
 VAR_13 = FUNC_0( &VAR_1[0], "ambient" );
 FUNC_6( VAR_2, VAR_13, VAR_2 );
 FUNC_7("%7i lights\n", VAR_5);
 FUNC_2( VAR_5, VAR_6, VAR_0 );

 VAR_11 = 0;
 for ( VAR_10 = 0 ; VAR_10 < VAR_4 ; VAR_10++ ) {
  if (VAR_3[VAR_10])
   VAR_11 += VAR_3[VAR_10]->numvolumes;
 }
 FUNC_7("%7i light volumes casted\n", VAR_11);
 VAR_12 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
 {
  if (VAR_9[VAR_10]->insolid)
   VAR_12++;
 }
 FUNC_7("%7i lights in solid\n", VAR_12);

 VAR_8 = 1;
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  FUNC_4();
  VAR_8 <<= 1;
 }

 FUNC_5();

 FUNC_3();
}
