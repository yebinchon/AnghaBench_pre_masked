
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbuf_how_t ;
typedef int errno_t ;
typedef int * caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;

errno_t
FUNC_3(mbuf_how_t VAR_7, size_t *VAR_8, caddr_t *VAR_9)
{
 if (VAR_8 == ((void*)0) || *VAR_8 == 0 || VAR_9 == ((void*)0))
  return (VAR_0);

 *VAR_9 = ((void*)0);


 if (*VAR_8 > VAR_4 && VAR_6 == 0)
  return (VAR_2);

 if (*VAR_8 <= VAR_5 && (*VAR_9 = FUNC_2(VAR_7)) != ((void*)0))
  *VAR_8 = VAR_5;
 else if (*VAR_8 > VAR_5 && *VAR_8 <= VAR_4 &&
     (*VAR_9 = FUNC_1(VAR_7)) != ((void*)0))
  *VAR_8 = VAR_4;
 else if (*VAR_8 > VAR_4 && *VAR_8 <= VAR_3 &&
     (*VAR_9 = FUNC_0(VAR_7)) != ((void*)0))
  *VAR_8 = VAR_3;
 else
  *VAR_8 = 0;

 if (*VAR_9 == ((void*)0))
  return (VAR_1);

 return (0);
}
