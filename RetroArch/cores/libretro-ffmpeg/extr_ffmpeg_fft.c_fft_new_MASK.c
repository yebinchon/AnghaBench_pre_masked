
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rglgen_proc_address_t ;
typedef int fft_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,unsigned int,int ,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char const*,char*,unsigned int*,unsigned int*) ;
 int FUNC_5 (char const*,char*) ;

fft_t *FUNC_6(unsigned VAR_2, rglgen_proc_address_t VAR_3)
{
   fft_t *VAR_4 = ((void*)0);
   const char *VAR_5 = (const char*)(FUNC_3(VAR_0));
   if (!VAR_5 || !FUNC_5(VAR_5, "ARB_ES3_compatibility"))
      return ((void*)0);

   VAR_4 = (fft_t*)FUNC_0(1, sizeof(*VAR_4));

   if (!VAR_4)
      return ((void*)0);

   if (!FUNC_1(VAR_4, VAR_2, VAR_3, 256))
      goto error;

   return VAR_4;

error:
   if (VAR_4)
      FUNC_2(VAR_4);
   return ((void*)0);
}
