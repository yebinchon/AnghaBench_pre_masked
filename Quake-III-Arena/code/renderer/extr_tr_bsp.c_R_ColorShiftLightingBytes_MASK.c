
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int byte ;
struct TYPE_4__ {int integer; } ;
struct TYPE_3__ {int overbrightBits; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_0( byte VAR_2[4], byte VAR_3[4] ) {
 int VAR_4, VAR_5, VAR_6, VAR_7;


 VAR_4 = VAR_0->integer - VAR_1.overbrightBits;


 VAR_5 = VAR_2[0] << VAR_4;
 VAR_6 = VAR_2[1] << VAR_4;
 VAR_7 = VAR_2[2] << VAR_4;


 if ( ( VAR_5 | VAR_6 | VAR_7 ) > 255 ) {
  int VAR_8;

  VAR_8 = VAR_5 > VAR_6 ? VAR_5 : VAR_6;
  VAR_8 = VAR_8 > VAR_7 ? VAR_8 : VAR_7;
  VAR_5 = VAR_5 * 255 / VAR_8;
  VAR_6 = VAR_6 * 255 / VAR_8;
  VAR_7 = VAR_7 * 255 / VAR_8;
 }

 VAR_3[0] = VAR_5;
 VAR_3[1] = VAR_6;
 VAR_3[2] = VAR_7;
 VAR_3[3] = VAR_2[3];
}
