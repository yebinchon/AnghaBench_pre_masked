
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cursize; scalar_t__ data; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,char*,int) ;

void FUNC_3 (void)
{
 int VAR_3;
 char *VAR_4;
 char VAR_5[VAR_0];
 int VAR_6;

 while (VAR_1.cursize)
 {
  if ( VAR_2 ) {


   VAR_2--;
   break;
  }


  VAR_4 = (char *)VAR_1.data;

  VAR_6 = 0;
  for (VAR_3=0 ; VAR_3< VAR_1.cursize ; VAR_3++)
  {
   if (VAR_4[VAR_3] == '"')
    VAR_6++;
   if ( !(VAR_6&1) && VAR_4[VAR_3] == ';')
    break;
   if (VAR_4[VAR_3] == '\n' || VAR_4[VAR_3] == '\r' )
    break;
  }

  if( VAR_3 >= (VAR_0 - 1)) {
   VAR_3 = VAR_0 - 1;
  }

  FUNC_1 (VAR_5, VAR_4, VAR_3);
  VAR_5[VAR_3] = 0;





  if (VAR_3 == VAR_1.cursize)
   VAR_1.cursize = 0;
  else
  {
   VAR_3++;
   VAR_1.cursize -= VAR_3;
   FUNC_2 (VAR_4, VAR_4+VAR_3, VAR_1.cursize);
  }



  FUNC_0 (VAR_5);
 }
}
