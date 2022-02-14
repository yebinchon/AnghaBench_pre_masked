
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sqlite3_index_constraint {scalar_t__ usable; scalar_t__ op; scalar_t__ iColumn; } ;
typedef int sqlite3_vtab ;
struct TYPE_6__ {double estimatedCost; int nConstraint; int estimatedRows; TYPE_1__* aConstraintUsage; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_2__ sqlite3_index_info ;
struct TYPE_7__ {scalar_t__ nHidden; scalar_t__ iHidden; } ;
struct TYPE_5__ {int argvIndex; int omit; } ;
typedef TYPE_3__ PragmaVtab ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab *VAR_2, sqlite3_index_info *VAR_3){
  PragmaVtab *VAR_4 = (PragmaVtab*)VAR_2;
  const struct sqlite3_index_constraint *VAR_5;
  int VAR_6, VAR_7;
  int VAR_8[2];

  VAR_3->estimatedCost = (double)1;
  if( VAR_4->nHidden==0 ){ return VAR_1; }
  VAR_5 = VAR_3->aConstraint;
  VAR_8[0] = 0;
  VAR_8[1] = 0;
  for(VAR_6=0; VAR_6<VAR_3->nConstraint; VAR_6++, VAR_5++){
    if( VAR_5->usable==0 ) continue;
    if( VAR_5->op!=VAR_0 ) continue;
    if( VAR_5->iColumn < VAR_4->iHidden ) continue;
    VAR_7 = VAR_5->iColumn - VAR_4->iHidden;
    FUNC_0( VAR_7 < 2 );
    VAR_8[VAR_7] = VAR_6+1;
  }
  if( VAR_8[0]==0 ){
    VAR_3->estimatedCost = (double)2147483647;
    VAR_3->estimatedRows = 2147483647;
    return VAR_1;
  }
  VAR_7 = VAR_8[0]-1;
  VAR_3->aConstraintUsage[VAR_7].argvIndex = 1;
  VAR_3->aConstraintUsage[VAR_7].omit = 1;
  if( VAR_8[1]==0 ) return VAR_1;
  VAR_3->estimatedCost = (double)20;
  VAR_3->estimatedRows = 20;
  VAR_7 = VAR_8[1]-1;
  VAR_3->aConstraintUsage[VAR_7].argvIndex = 2;
  VAR_3->aConstraintUsage[VAR_7].omit = 1;
  return VAR_1;
}
