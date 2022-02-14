
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ PC; scalar_t__ SR; scalar_t__* A; scalar_t__* D; } ;
typedef TYPE_1__ m68kregs_struct ;
typedef int YuiM68k ;
struct TYPE_5__ {int regListStore; } ;
typedef int GtkTreeIter ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ,char*,int,char*,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*,char*,int) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static void FUNC_6( YuiM68k *VAR_1, m68kregs_struct *VAR_2) {


  GtkTreeIter VAR_3;
  char VAR_4[32];
  char VAR_5[32];
  int VAR_6;

  for ( VAR_6 = 0 ; VAR_6 < 8 ; VAR_6++ ) {

    if ( VAR_6==0 ) FUNC_3( FUNC_1( VAR_0->regListStore ), &VAR_3 );
    else FUNC_4( FUNC_1( VAR_0->regListStore ), &VAR_3 );
    FUNC_5(VAR_4, "D%d", VAR_6 );
    FUNC_5(VAR_5, "%08x", (int)VAR_2->D[VAR_6]);
    FUNC_2( FUNC_0( VAR_0->regListStore ), &VAR_3, 0, VAR_4, 1, VAR_5, -1 );
  }
  for ( VAR_6 = 0 ; VAR_6 < 8 ; VAR_6++ ) {

    FUNC_4( FUNC_1( VAR_0->regListStore ), &VAR_3 );
    FUNC_5(VAR_4, "A%d", VAR_6 );
    FUNC_5(VAR_5, "%08x", (int)VAR_2->A[VAR_6]);
    FUNC_2( FUNC_0( VAR_0->regListStore ), &VAR_3, 0, VAR_4, 1, VAR_5, -1 );
  }

  FUNC_4( FUNC_1( VAR_0->regListStore ), &VAR_3 );
  FUNC_5(VAR_5, "%08x", (int)VAR_2->SR);
  FUNC_2( FUNC_0( VAR_0->regListStore ), &VAR_3, 0, "SR", 1, VAR_5, -1 );

  FUNC_4( FUNC_1( VAR_0->regListStore ), &VAR_3 );
  FUNC_5(VAR_5, "%08x", (int)VAR_2->PC);
  FUNC_2( FUNC_0( VAR_0->regListStore ), &VAR_3, 0, "PC", 1, VAR_5, -1 );
}
