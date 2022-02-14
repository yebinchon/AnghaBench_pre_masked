
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int chdstream_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

char *FUNC_1(chdstream_t *VAR_1, char *VAR_2, size_t VAR_3)
{
   int VAR_4;

   size_t VAR_5 = 0;

   while (VAR_5 < VAR_3 && (VAR_4 = FUNC_0(VAR_1)) != VAR_0)
      VAR_2[VAR_5++] = VAR_4;

   if (VAR_5 < VAR_3)
      VAR_2[VAR_5] = '\0';

   return VAR_2;
}
