
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int svFlags; int maxs; int mins; scalar_t__ bmodel; } ;
struct TYPE_5__ {int modelindex; } ;
struct TYPE_7__ {TYPE_2__ r; TYPE_1__ s; } ;
typedef TYPE_3__ sharedEntity_t ;
typedef int clipHandle_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

clipHandle_t FUNC_2( const sharedEntity_t *VAR_3 ) {
 if ( VAR_3->r.bmodel ) {

  return FUNC_0( VAR_3->s.modelindex );
 }
 if ( VAR_3->r.svFlags & VAR_0 ) {

  return FUNC_1( VAR_3->r.mins, VAR_3->r.maxs, VAR_2 );
 }


 return FUNC_1( VAR_3->r.mins, VAR_3->r.maxs, VAR_1 );
}
