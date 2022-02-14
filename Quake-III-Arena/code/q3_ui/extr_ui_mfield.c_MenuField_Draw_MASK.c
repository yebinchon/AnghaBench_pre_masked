
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_5__ {int x; int y; int flags; int name; scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; int parent; } ;
struct TYPE_6__ {int field; TYPE_1__ generic; } ;
typedef TYPE_2__ menufield_s ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int,int,float*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int,int,int,int,float*) ;
 int FUNC_3 (int,int,int ,int,float*) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 float* VAR_15 ;
 float* VAR_16 ;
 float* VAR_17 ;

void FUNC_5( menufield_s *VAR_18 )
{
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 qboolean VAR_24;
 float *VAR_25;

 VAR_19 = VAR_18->generic.x;
 VAR_20 = VAR_18->generic.y;

 if (VAR_18->generic.flags & VAR_3)
 {
  VAR_21 = VAR_5;
  VAR_22 = VAR_4;
  VAR_23 = VAR_11;
 }
 else
 {
  VAR_21 = VAR_1;
  VAR_22 = VAR_0;
  VAR_23 = VAR_6;
 }

 if (FUNC_1( VAR_18->generic.parent ) == VAR_18) {
  VAR_24 = VAR_14;
  VAR_23 |= VAR_9;
 }
 else {
  VAR_24 = VAR_13;
 }

 if (VAR_18->generic.flags & VAR_2)
  VAR_25 = VAR_15;
 else if (VAR_24)
  VAR_25 = VAR_16;
 else
  VAR_25 = VAR_17;

 if ( VAR_24 )
 {

  FUNC_4( VAR_18->generic.left, VAR_18->generic.top, VAR_18->generic.right-VAR_18->generic.left+1, VAR_18->generic.bottom-VAR_18->generic.top+1, VAR_12 );
  FUNC_2( VAR_19, VAR_20, 13, VAR_8|VAR_7|VAR_23, VAR_25);
 }

 if ( VAR_18->generic.name ) {
  FUNC_3( VAR_19 - VAR_21, VAR_20, VAR_18->generic.name, VAR_23|VAR_10, VAR_25 );
 }

 FUNC_0( &VAR_18->field, VAR_19 + VAR_21, VAR_20, VAR_23, VAR_25 );
}
