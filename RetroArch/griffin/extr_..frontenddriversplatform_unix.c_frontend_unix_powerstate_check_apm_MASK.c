
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef enum frontend_powerstate { ____Placeholder_frontend_powerstate } frontend_powerstate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void**,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int*) ;
 int FUNC_4 (char**,char**) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static bool FUNC_7(
      enum frontend_powerstate *VAR_6,
      int *VAR_7, int *VAR_8)
{
   size_t VAR_9 = 0;
   int VAR_10 = 0;
   int VAR_11 = 0;
   int VAR_12 = 0;
   int VAR_13 = 0;
   int VAR_14 = 0;
   int64_t VAR_15 = 0;
   char *VAR_16 = ((void*)0);
   char *VAR_17 = ((void*)0);
   char *VAR_18 = ((void*)0);

   if (!FUNC_0(VAR_5))
      goto error;

   if (FUNC_1(VAR_5, (void**)&VAR_17, &VAR_15) != 1)
      goto error;

   VAR_16 = &VAR_17[0];

   if (!FUNC_4(&VAR_16, &VAR_18))
      goto error;
   if (!FUNC_4(&VAR_16, &VAR_18))
      goto error;
   if (!FUNC_4(&VAR_16, &VAR_18))
      goto error;

   if (!FUNC_4(&VAR_16, &VAR_18))
      goto error;
   else if (!FUNC_3(VAR_18, &VAR_10))
      goto error;

   if (!FUNC_4(&VAR_16, &VAR_18))
      goto error;
   else if (!FUNC_3(VAR_18, &VAR_11))
      goto error;

   if (!FUNC_4(&VAR_16, &VAR_18))
      goto error;
   else if (!FUNC_3(VAR_18, &VAR_12))
      goto error;
   if (!FUNC_4(&VAR_16, &VAR_18))
      goto error;
   VAR_9 = FUNC_6(VAR_18) - 1;
   if (VAR_18[VAR_9] == '%')
      VAR_18[VAR_9] = '\0';
   if (!FUNC_3(VAR_18, &VAR_13))
      goto error;

   if (!FUNC_4(&VAR_16, &VAR_18))
      goto error;
   else if (!FUNC_3(VAR_18, &VAR_14))
      goto error;

   if (!FUNC_4(&VAR_16, &VAR_18))
      goto error;
   else if (FUNC_5(VAR_18, "min"))
      VAR_14 *= 60;

   if (VAR_12 == 0xFF)
      *VAR_6 = VAR_2;
   else if (VAR_12 & (1 << 7))
      *VAR_6 = VAR_3;
   else if (VAR_12 & (1 << 3))
      *VAR_6 = VAR_1;
   else if (VAR_10 == 1)
      *VAR_6 = VAR_0;
   else
      *VAR_6 = VAR_4;

   if (VAR_13 >= 0)
      *VAR_8 = (VAR_13 > 100) ? 100 : VAR_13;
   if (VAR_14 >= 0)
      *VAR_7 = VAR_14;

   if (VAR_17)
      FUNC_2(VAR_17);
   VAR_17 = ((void*)0);

   return 1;

error:
   if (VAR_17)
      FUNC_2(VAR_17);
   VAR_17 = ((void*)0);

   return 0;
}
