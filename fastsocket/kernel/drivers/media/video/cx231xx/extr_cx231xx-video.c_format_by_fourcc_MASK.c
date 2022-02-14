
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx231xx_fmt {unsigned int fourcc; } ;


 unsigned int FUNC_0 (struct cx231xx_fmt*) ;
 struct cx231xx_fmt* VAR_0 ;

__attribute__((used)) static struct cx231xx_fmt *FUNC_1(unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2].fourcc == VAR_1)
   return &VAR_0[VAR_2];

 return ((void*)0);
}
