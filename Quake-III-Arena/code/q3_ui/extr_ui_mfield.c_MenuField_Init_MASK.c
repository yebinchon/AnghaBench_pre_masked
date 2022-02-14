
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; scalar_t__ y; scalar_t__ bottom; scalar_t__ x; scalar_t__ right; scalar_t__ top; scalar_t__ left; scalar_t__ name; } ;
struct TYPE_7__ {int widthInChars; } ;
struct TYPE_6__ {TYPE_1__ generic; TYPE_4__ field; } ;
typedef TYPE_2__ menufield_s ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2( menufield_s* VAR_5 ) {
 int VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_0( &VAR_5->field );

 if (VAR_5->generic.flags & VAR_2)
 {
  VAR_7 = VAR_4;
  VAR_8 = VAR_3;
 }
 else
 {
  VAR_7 = VAR_1;
  VAR_8 = VAR_0;
 }

 if (VAR_5->generic.name) {
  VAR_6 = (FUNC_1( VAR_5->generic.name )+1) * VAR_7;
 }
 else {
  VAR_6 = 0;
 }

 VAR_5->generic.left = VAR_5->generic.x - VAR_6;
 VAR_5->generic.top = VAR_5->generic.y;
 VAR_5->generic.right = VAR_5->generic.x + VAR_7 + VAR_5->field.widthInChars*VAR_7;
 VAR_5->generic.bottom = VAR_5->generic.y + VAR_8;
}
