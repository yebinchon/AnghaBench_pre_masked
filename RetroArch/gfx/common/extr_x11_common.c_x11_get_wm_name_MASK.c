
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Window ;
typedef int Display ;
typedef int Atom ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ,int,int ,int ,int *,int*,unsigned long*,unsigned long*,unsigned char**) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_3 ;
 char* FUNC_4 (char*) ;

char *FUNC_5(Display *VAR_4)
{
   Atom VAR_5;
   int VAR_6;
   Window VAR_7;
   Atom VAR_8 = FUNC_3(VAR_3, "_NET_SUPPORTING_WM_CHECK", VAR_0);
   Atom VAR_9 = FUNC_3(VAR_3, "_NET_WM_NAME", VAR_0);
   Atom VAR_10 = FUNC_3(VAR_3, "UTF8_STRING", VAR_0);
   unsigned long VAR_11 = 0;
   unsigned long VAR_12 = 0;
   char *VAR_13 = ((void*)0);
   unsigned char *VAR_14 = ((void*)0);

   if (!VAR_8 || !VAR_9)
      return ((void*)0);

   if (!(FUNC_2(VAR_4,
                               FUNC_0(VAR_4),
                               VAR_8,
                               0,
                               1,
                               VAR_0,
                               VAR_2,
                               &VAR_5,
                               &VAR_6,
                               &VAR_11,
                               &VAR_12,
                               &VAR_14) == VAR_1 &&
     VAR_14))
    return ((void*)0);

   VAR_7 = ((Window *) VAR_14)[0];

   FUNC_1(VAR_14);

   if (!(FUNC_2(VAR_4,
                               VAR_7,
                               VAR_9,
                               0,
                               8192,
                               VAR_0,
                               VAR_10,
                               &VAR_5,
                               &VAR_6,
                               &VAR_11,
                               &VAR_12,
                               &VAR_14) == VAR_1
     && VAR_14))
    return ((void*)0);

   VAR_13 = FUNC_4((char *) VAR_14);
   FUNC_1(VAR_14);

   return VAR_13;
}
