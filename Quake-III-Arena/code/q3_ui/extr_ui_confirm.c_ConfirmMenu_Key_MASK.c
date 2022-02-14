
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sfxHandle_t ;
struct TYPE_2__ {int menu; int yes; int no; } ;


 int FUNC_0 (int *,int ) ;




 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static sfxHandle_t FUNC_2( int VAR_3 ) {
 switch ( VAR_3 ) {
 case 131:
 case 129:
 case 130:
 case 128:
  VAR_3 = VAR_0;
  break;

 case 'n':
 case 'N':
  FUNC_0( &VAR_2.no, VAR_1 );
  break;

 case 'y':
 case 'Y':
  FUNC_0( &VAR_2.yes, VAR_1 );
  break;
 }

 return FUNC_1( &VAR_2.menu, VAR_3 );
}
