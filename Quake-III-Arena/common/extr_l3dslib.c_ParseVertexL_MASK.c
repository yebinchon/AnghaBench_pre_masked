
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tshort ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (unsigned short*,int,int,int *) ;
 unsigned short** VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

int FUNC_4 (FILE *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned short VAR_10;

 if (VAR_4)
  FUNC_0 ("Error: Multiple vertex chunks");

 VAR_4 = 1;
 VAR_8 = VAR_1;

 if (FUNC_2(VAR_5))
  FUNC_0 ("Error: unexpected end of file");

 FUNC_3(&VAR_10, sizeof(VAR_10), 1, VAR_5);
 VAR_1 += sizeof(VAR_10);
 VAR_9 = (int)VAR_10;

 if (VAR_9 > VAR_0)
  FUNC_0 ("Error: Too many vertices");

 for (VAR_6=0 ; VAR_6<VAR_9 ; VAR_6++)
 {
  for (VAR_7=0 ; VAR_7<3 ; VAR_7++)
  {
   if (FUNC_2(VAR_5))
    FUNC_0 ("Error: unexpected end of file");

   FUNC_3(&VAR_2[VAR_6][VAR_7], sizeof(float), 1, VAR_5);
   VAR_1 += sizeof(float);
  }
 }

 if (VAR_4 && VAR_3)
  FUNC_1 ();

 return VAR_1 - VAR_8;
}
