
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef scalar_t__ u16_t ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (int *,int *,int *,int,scalar_t__,int) ;
 int * FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,scalar_t__) ;

zbuf_t *FUNC_6(zdev_t *VAR_0, zbuf_t *VAR_1, u16_t *VAR_2)
{
 u16_t VAR_3;
 u16_t VAR_4 = FUNC_3(VAR_0, VAR_1);
 zbuf_t *VAR_5;

 FUNC_0(VAR_0, VAR_1, VAR_4);


 if (VAR_4 < (*VAR_2 + 14))
  return ((void*)0);


 VAR_3 = (FUNC_5(VAR_0, VAR_1, *VAR_2 + 12) << 8) +
  FUNC_5(VAR_0, VAR_1, *VAR_2 + 13);

 if (VAR_3 == 0)
  return ((void*)0);


 if ((*VAR_2+14+VAR_3) <= VAR_4) {

  VAR_5 = FUNC_2(VAR_0, 24+2+VAR_3);
  if (VAR_5 != ((void*)0)) {
   FUNC_1(VAR_0, VAR_5, VAR_1, 0, *VAR_2,
     14+VAR_3);
   FUNC_4(VAR_0, VAR_5, 14+VAR_3);


   *VAR_2 += (((14+VAR_3)+3) & 0xfffc);


   return VAR_5;
  }
 }
 return ((void*)0);
}
