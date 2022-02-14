
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3 ;
struct TYPE_7__ {char* z; scalar_t__ n; } ;
struct TYPE_8__ {int op; TYPE_1__ target; } ;
typedef TYPE_2__ TriggerStep ;
struct TYPE_9__ {scalar_t__ n; int z; } ;
typedef TYPE_3__ Token ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 TYPE_2__* FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static TriggerStep *FUNC_2(
  sqlite3 *VAR_0,
  u8 VAR_1,
  Token *VAR_2
){
  TriggerStep *VAR_3;

  VAR_3 = FUNC_1(VAR_0, sizeof(TriggerStep) + VAR_2->n);
  if( VAR_3 ){
    char *VAR_4 = (char*)&VAR_3[1];
    FUNC_0(VAR_4, VAR_2->z, VAR_2->n);
    VAR_3->target.z = VAR_4;
    VAR_3->target.n = VAR_2->n;
    VAR_3->op = VAR_1;
  }
  return VAR_3;
}
