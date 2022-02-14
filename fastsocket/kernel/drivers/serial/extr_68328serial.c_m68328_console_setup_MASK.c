
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int *,int ) ;

int FUNC_2(struct console *VAR_6, char *VAR_7)
{
 int VAR_8, VAR_9 = VAR_2;

 if (!VAR_6)
  return(-1);

 if (VAR_7)
  VAR_9 = FUNC_1(VAR_7,((void*)0),0);

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  if (VAR_3[VAR_8] == VAR_9)
   break;
 if (VAR_8 < VAR_0) {
  VAR_4 = VAR_9;
  VAR_5 = 0;
  if (VAR_8 > 15) {
   VAR_5 |= VAR_1;
   VAR_8 -= 15;
  }
  VAR_5 |= VAR_8;
 }

 FUNC_0();
 return(0);
}
