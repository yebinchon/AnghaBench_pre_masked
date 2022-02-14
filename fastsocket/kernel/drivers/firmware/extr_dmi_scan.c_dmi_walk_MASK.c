
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,void (*) (struct dmi_header const*,void*),void*) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(void (*VAR_4)(const struct dmi_header *, void *),
      void *VAR_5)
{
 u8 *VAR_6;

 if (!VAR_0)
  return -1;

 VAR_6 = FUNC_1(VAR_1, VAR_2);
 if (VAR_6 == ((void*)0))
  return -1;

 FUNC_0(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_2(VAR_6);
 return 0;
}
