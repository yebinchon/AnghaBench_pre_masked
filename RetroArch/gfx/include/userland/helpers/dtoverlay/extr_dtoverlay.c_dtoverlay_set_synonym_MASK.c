
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DTBLOB_T ;


 int FUNC_0 (int *,char*,char const*,char const*) ;

int FUNC_1(DTBLOB_T *VAR_0, const char *VAR_1, const char *VAR_2)
{




   int VAR_3;

   VAR_3 = FUNC_0(VAR_0, "/aliases", VAR_1, VAR_2);
   if (VAR_3 == 0)
      VAR_3 = FUNC_0(VAR_0, "/__symbols__", VAR_1, VAR_2);
   if (VAR_3 == 0)
      FUNC_0(VAR_0, "/__overrides__", VAR_1, VAR_2);
   return VAR_3;
}
