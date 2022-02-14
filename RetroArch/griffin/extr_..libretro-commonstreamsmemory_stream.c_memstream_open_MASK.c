
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int memstream_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *,scalar_t__,unsigned int) ;

memstream_t *FUNC_2(unsigned VAR_2)
{
   memstream_t *VAR_3;
   if (!VAR_0 || !VAR_1)
      return ((void*)0);

   VAR_3 = (memstream_t*)FUNC_0(1, sizeof(*VAR_3));
   FUNC_1(VAR_3, VAR_0, VAR_1, VAR_2);

   VAR_0 = ((void*)0);
   VAR_1 = 0;
   return VAR_3;
}
