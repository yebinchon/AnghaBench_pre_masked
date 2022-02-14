
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
typedef int netchan_t ;
struct TYPE_5__ {scalar_t__ cursize; } ;
typedef TYPE_1__ msg_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_2( netchan_t *VAR_3, msg_t *VAR_4 ) {
 int VAR_5;

 VAR_5 = FUNC_1( VAR_3, VAR_4 );
 if (!VAR_5)
  return VAR_1;
 FUNC_0( VAR_4 );
 VAR_0 += VAR_4->cursize;
 return VAR_2;
}
