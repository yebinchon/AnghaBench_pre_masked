
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int permanent; int temp; } ;
struct TYPE_3__ {int permanent; int temp; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

int FUNC_0( void ) {
 int VAR_3, VAR_4;

 VAR_3 = VAR_1.permanent > VAR_1.temp ? VAR_1.permanent : VAR_1.temp;
 VAR_4 = VAR_0.permanent > VAR_0.temp ? VAR_0.permanent : VAR_0.temp;

 return VAR_2 - ( VAR_3 + VAR_4 );
}
