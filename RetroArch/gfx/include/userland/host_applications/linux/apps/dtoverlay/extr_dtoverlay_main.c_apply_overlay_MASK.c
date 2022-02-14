
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DTBLOB_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,int ) ;
 scalar_t__ FUNC_3 (int *,char const*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,int ) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*) ;
 char* FUNC_9 (char*,char const*,...) ;

__attribute__((used)) static int FUNC_10(const char *VAR_2, const char *VAR_3)
{
    const char *VAR_4 = FUNC_9("%s/%s", VAR_1, VAR_3);
    int VAR_5 = 0;
    if (FUNC_0(VAR_4))
    {
 FUNC_4("Overlay '%s' is already loaded", VAR_3);
    }
    else if (FUNC_6(VAR_4, VAR_0) == 0)
    {
 DTBLOB_T *VAR_6 = FUNC_2(VAR_2, 0);
 if (!VAR_6)
 {
     FUNC_4("Failed to apply overlay '%s' (load)", VAR_3);
 }
 else
 {
     const char *VAR_7 = FUNC_9("%s/dtbo", VAR_4);


     if (FUNC_3(VAR_6, VAR_7) != 0)
  FUNC_4("Failed to apply overlay '%s' (save)", VAR_3);
     else if (!FUNC_7(VAR_4))
  FUNC_4("Failed to apply overlay '%s' (kernel)", VAR_3);
     else
  VAR_5 = 1;

     FUNC_5(VAR_7);
     FUNC_1(VAR_6);
 }

 if (!VAR_5)
  FUNC_8(VAR_4);
    }
    else
    {
 FUNC_4("Failed to create overlay directory");
    }

    return VAR_5;
}
