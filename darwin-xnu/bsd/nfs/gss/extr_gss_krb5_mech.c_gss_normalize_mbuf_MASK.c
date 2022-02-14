
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * mbuf_t ;
typedef scalar_t__ errno_t ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int *,int ) ;
 size_t FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,size_t,int **,int) ;

errno_t
FUNC_5(mbuf_t VAR_0, size_t VAR_1, size_t *VAR_2, mbuf_t *VAR_3, mbuf_t *VAR_4, int VAR_5)
{
 size_t VAR_6 = *VAR_2 ? *VAR_2 : ~0;
 size_t VAR_7;
 mbuf_t VAR_8, VAR_9;
 errno_t VAR_10;

 if (VAR_4 == ((void*)0))
  VAR_4 = &VAR_9;
 *VAR_4 = ((void*)0);
 *VAR_3 = ((void*)0);

 for (VAR_7 = VAR_1, VAR_8 = VAR_0; VAR_8 && VAR_7 > FUNC_2(VAR_8); VAR_8 = FUNC_3(VAR_8))
   VAR_7 -= FUNC_2(VAR_8);


 if (VAR_8 == ((void*)0))
  return (0);

 VAR_10 = FUNC_4(VAR_8, VAR_7, VAR_3, VAR_5);
 if (VAR_10)
  return (VAR_10);

 FUNC_0(VAR_3 != ((void*)0) && *VAR_3 != ((void*)0));
 FUNC_0(VAR_1 == 0 ? VAR_8 == *VAR_3 : 1);

 VAR_7 = FUNC_1(*VAR_3, 0);
 VAR_6 = (VAR_6 > VAR_7) ? VAR_7 : VAR_6;
 *VAR_2 = VAR_6;

 for (VAR_7 = VAR_6, VAR_8 = *VAR_3; VAR_8 && VAR_7 > FUNC_2(VAR_8); VAR_8 = FUNC_3(VAR_8))
  VAR_7 -= FUNC_2(VAR_8);

 VAR_10 = FUNC_4(VAR_8, VAR_7, VAR_4, VAR_5);

 return (VAR_10);
}
