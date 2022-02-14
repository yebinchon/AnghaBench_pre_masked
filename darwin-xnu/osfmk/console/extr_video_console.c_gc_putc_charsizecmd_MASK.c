
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int v_rows; unsigned int v_columns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,unsigned int,char,int ) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void
FUNC_1(unsigned char VAR_4)
{
 VAR_2 = VAR_1;

 switch (VAR_4) {
  case '3' :
  case '4' :
  case '5' :
  case '6' :
   break;
  case '8' :
   {
    unsigned int VAR_5, VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_3.v_rows; VAR_6++)
     for (VAR_5 = 0; VAR_5 < VAR_3.v_columns; VAR_5++)
      FUNC_0(VAR_5, VAR_6, 'E', VAR_0);
   }
   break;
 }

}
