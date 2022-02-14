
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ menuPosition; int x; int y; TYPE_1__* parent; int name; } ;
struct TYPE_7__ {TYPE_2__ generic; } ;
typedef TYPE_3__ menuaction_s ;
struct TYPE_5__ {scalar_t__ cursor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int,int,int,float*) ;
 int FUNC_1 (int,int,int ,int,float*) ;
 int VAR_6 ;
 int VAR_7 ;
 float* VAR_8 ;
 float* VAR_9 ;
 float* VAR_10 ;

__attribute__((used)) static void FUNC_2( menuaction_s *VAR_11 )
{
 int VAR_12, VAR_13;
 int VAR_14;
 float* VAR_15;

 VAR_14 = 0;
 VAR_15 = VAR_8;
 if ( VAR_11->generic.flags & VAR_2 )
 {
  VAR_15 = VAR_9;
 }
 else if (( VAR_11->generic.flags & VAR_4 ) && ( VAR_11->generic.parent->cursor == VAR_11->generic.menuPosition ))
 {
  VAR_15 = VAR_10;
  VAR_14 = VAR_7;
 }
 else if (( VAR_11->generic.flags & VAR_3 ) && ( VAR_11->generic.parent->cursor == VAR_11->generic.menuPosition ))
 {
  VAR_15 = VAR_10;
 }
 else if ( VAR_11->generic.flags & VAR_1 )
 {
  VAR_14 = VAR_5;
  VAR_15 = VAR_10;
 }

 VAR_12 = VAR_11->generic.x;
 VAR_13 = VAR_11->generic.y;

 FUNC_1( VAR_12, VAR_13, VAR_11->generic.name, VAR_6|VAR_14, VAR_15 );

 if ( VAR_11->generic.parent->cursor == VAR_11->generic.menuPosition )
 {

  FUNC_0( VAR_12 - VAR_0, VAR_13, 13, VAR_6|VAR_5, VAR_15);
 }
}
