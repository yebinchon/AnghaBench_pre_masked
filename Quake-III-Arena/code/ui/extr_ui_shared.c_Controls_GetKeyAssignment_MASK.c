
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* getBindingBuf ) (int,char*,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static void FUNC_2 (char *VAR_1, int *VAR_2)
{
 int VAR_3;
 int VAR_4;
 char VAR_5[256];

 VAR_2[0] = VAR_2[1] = -1;
 VAR_3 = 0;

 for ( VAR_4 = 0; VAR_4 < 256; VAR_4++ )
 {
  VAR_0->getBindingBuf( VAR_4, VAR_5, 256 );
  if ( *VAR_5 == 0 ) {
   continue;
  }
  if ( !FUNC_0( VAR_5, VAR_1 ) ) {
   VAR_2[VAR_3] = VAR_4;
   VAR_3++;
   if (VAR_3 == 2) {
    break;
   }
  }
 }
}
