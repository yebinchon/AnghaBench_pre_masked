
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ viewCount; int fogIndex; int shader; int data; } ;
typedef TYPE_1__ msurface_t ;
struct TYPE_6__ {scalar_t__ viewCount; } ;


 int FUNC_0 (int ,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_3( msurface_t *VAR_1, int VAR_2 ) {
 if ( VAR_1->viewCount == VAR_0.viewCount ) {
  return;
 }

 VAR_1->viewCount = VAR_0.viewCount;



 if ( FUNC_1( VAR_1->data, VAR_1->shader ) ) {
  return;
 }


 if ( VAR_2 ) {
  VAR_2 = FUNC_2( VAR_1, VAR_2 );
  VAR_2 = ( VAR_2 != 0 );
 }

 FUNC_0( VAR_1->data, VAR_1->shader, VAR_1->fogIndex, VAR_2 );
}
