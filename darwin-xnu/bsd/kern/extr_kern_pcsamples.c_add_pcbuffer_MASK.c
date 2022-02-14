
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 unsigned int* VAR_0 ;
 unsigned int* VAR_1 ;
 unsigned int* VAR_2 ;
 unsigned int* VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_1 (scalar_t__*) ;

void
FUNC_2(void)
{
 int VAR_8;
 unsigned int VAR_9;

 if (!VAR_6)
   return;

 for (VAR_8=0; VAR_8 < VAR_4; VAR_8++)
   {
     VAR_9 = VAR_3[VAR_8];

     if ((VAR_5 <= VAR_9) && (VAR_9 < VAR_7))
       {
  if (VAR_2 > VAR_0)
    {
      if ( (*(VAR_2-1)) == VAR_9 )
        continue;
    }


  *VAR_2 = VAR_9;
  VAR_2++;
       }
   }


 if ((VAR_2 + VAR_4) >= VAR_1)
   {
     VAR_6 = 0;
     (void)FUNC_0();
     FUNC_1(&VAR_6);
   }
 return;
}
