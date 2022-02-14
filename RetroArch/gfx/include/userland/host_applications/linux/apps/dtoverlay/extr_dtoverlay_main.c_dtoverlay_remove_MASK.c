
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int count; TYPE_1__** namelist; } ;
struct TYPE_5__ {char* d_name; } ;
typedef TYPE_2__ STATE_T ;
typedef int DTBLOB_T ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,char*,int,char const**) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char const**) ;
 int FUNC_9 (char const*) ;
 char** FUNC_10 (int) ;
 scalar_t__ FUNC_11 (char const*,char const*,int) ;
 int FUNC_12 (char const*,char*) ;
 scalar_t__ FUNC_13 (char const*) ;
 void* FUNC_14 (char*,...) ;
 char* FUNC_15 (char const*,char) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char const*) ;
 char* FUNC_18 (char const*,char) ;
 int FUNC_19 (char const*,char**,int) ;
 int FUNC_20 (char const*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_21(STATE_T *VAR_2, const char *VAR_3, int VAR_4)
{
    const char *VAR_5;
    const char *VAR_6 = ((void*)0);
    char *VAR_7;
    int VAR_8;
    int VAR_9 = VAR_2->count;
    int VAR_10;
    int VAR_11;

    if (FUNC_1(VAR_1) != 0)
 FUNC_7("Failed to chdir to '%s'", VAR_1);

    if (VAR_3)
    {
 VAR_8 = FUNC_17(VAR_3);

 VAR_10 = FUNC_19(VAR_3, &VAR_7, 10);
 if (VAR_7 && (*VAR_7 == '\0'))
 {
     if (VAR_10 >= VAR_9)
  return FUNC_6("Overlay index (%d) too large", VAR_10);
     VAR_6 = VAR_2->namelist[VAR_10]->d_name;
 }

 else for (VAR_10 = VAR_9 - 1; VAR_10 >= 0; VAR_10--)
 {
     const char *VAR_12, *VAR_13;
     VAR_6 = VAR_2->namelist[VAR_10]->d_name;
     VAR_12 = FUNC_15(VAR_6, '_');
     if (!VAR_12)
  return FUNC_6("Internal error");
     VAR_12++;
     VAR_13 = FUNC_15(VAR_12, '.');
     if (!VAR_13)
  return FUNC_6("Internal error");
     if (((VAR_13 - VAR_12) == VAR_8) &&
  (FUNC_11(VAR_3, VAR_12, VAR_8) == 0))
  break;
     VAR_6 = ((void*)0);
 }

 if (VAR_10 < 0)
     return FUNC_6("Overlay '%s' is not loaded", VAR_3);
    }
    else
    {
 if (!VAR_9)
     return FUNC_6("No overlays loaded");
 VAR_10 = VAR_4 ? 0 : (VAR_9 - 1);
 VAR_6 = VAR_2->namelist[VAR_10]->d_name;
    }

    if (VAR_10 < VAR_9)
    {

 for (VAR_11 = VAR_9 - 1; VAR_11 >= VAR_10; VAR_11--)
 {
     const char *VAR_14, *VAR_15;
     VAR_14 = VAR_2->namelist[VAR_11]->d_name;
     VAR_15 = FUNC_18(VAR_14, '.');
     if (!VAR_15)
  return FUNC_6("Internal error");

     VAR_5 = FUNC_14("%s/%.*s", VAR_0,
          VAR_15 - VAR_14, VAR_14);
     if (FUNC_13(VAR_5) != 0)
  return FUNC_6("Failed to remove directory '%s'", VAR_5);

     FUNC_9(VAR_5);
 }



 for (VAR_11 = VAR_10, VAR_2->count = VAR_10; VAR_11 < VAR_9; VAR_11++)
 {
     const char *VAR_16, *VAR_17;
     const char *VAR_18 = VAR_2->namelist[VAR_11]->d_name;

     VAR_16 = FUNC_15(VAR_18, '_');
     if (!VAR_16)
  return FUNC_6("Internal error");
     VAR_16++;
     VAR_17 = FUNC_15(VAR_16, '.');
     if (!VAR_17)
  return FUNC_6("Internal error");

            if (VAR_4 || (VAR_11 == VAR_10))
            {

                FUNC_20(VAR_18);
            }
            else
            {

                int VAR_19 = VAR_17 - VAR_16;
                char *VAR_20 = FUNC_14("%d_%.*s", VAR_2->count,
          VAR_19, VAR_16);
  char *VAR_21 = FUNC_14("%s.dtbo", VAR_20);
  int VAR_22 = 0;

                if ((VAR_19 == 7) && (FUNC_11(VAR_16, "dtparam", 7) == 0))
  {



      DTBLOB_T *VAR_23;
      char *VAR_24;
      const char **VAR_25;
      int VAR_26;
      int VAR_27;
      char *VAR_28;


      VAR_23 = FUNC_5(VAR_18, 0);
      FUNC_20(VAR_18);

      if (!VAR_23)
      {
   FUNC_6("Failed to re-apply dtparam");
   continue;
      }

      VAR_24 = (char *)FUNC_3(VAR_23);
      if (!VAR_24)
      {
   FUNC_6("Failed to re-apply dtparam");
   FUNC_4(VAR_23);
   continue;
      }


      VAR_28 = VAR_24;
      VAR_26 = 0;
      while (*VAR_28)
      {
   int VAR_29;
   *(VAR_28++) = '\0';
   VAR_29 = FUNC_16(VAR_28, " ");
   VAR_26++;
   VAR_28 += VAR_29;
      }

      VAR_25 = FUNC_10((VAR_26 + 1) * sizeof(const char *));
      if (!VAR_25)
      {
   FUNC_6("out of memory re-applying dtparam");
   FUNC_4(VAR_23);
   continue;
      }

      for (VAR_27 = 0, VAR_28 = VAR_24 + 1; VAR_27 < VAR_26; VAR_27++)
      {
   VAR_25[VAR_27] = VAR_28;
   VAR_28 += FUNC_17(VAR_28) + 1;
      }
      VAR_25[VAR_27] = ((void*)0);


      VAR_22 = FUNC_2(VAR_2, "dtparam", VAR_26, VAR_25);
      FUNC_8(VAR_25);
      FUNC_4(VAR_23);
  }
  else
  {
      FUNC_12(VAR_18, VAR_21);
      VAR_22 = !FUNC_0(VAR_21, VAR_20);
  }
  if (VAR_22 != 0)
  {
      FUNC_6("Failed to re-apply dtparam");
      continue;
  }
  VAR_2->count++;
     }
 }
    }

    return 0;
}
