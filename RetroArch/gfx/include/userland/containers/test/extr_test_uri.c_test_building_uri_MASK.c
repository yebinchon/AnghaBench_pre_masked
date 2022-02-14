
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VC_URI_PARTS_T ;
struct TYPE_3__ {char** queries; int expected_uri; int fragment; int path; int port; int host; int userinfo; int scheme; } ;
typedef TYPE_1__ BUILD_URI_T ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*,char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(VC_URI_PARTS_T *VAR_0, BUILD_URI_T *VAR_1)
{
   const char **VAR_2;
   const char *VAR_3, *VAR_4;

   FUNC_1(((void*)0), "Building URI <%s>", VAR_1->expected_uri);

   FUNC_5(VAR_0);

   if (!FUNC_10(VAR_0, VAR_1->scheme))
   {
      FUNC_0(((void*)0), "*** Failed to set scheme");
      return 1;
   }

   if (!FUNC_11(VAR_0, VAR_1->userinfo))
   {
      FUNC_0(((void*)0), "*** Failed to set userinfo");
      return 1;
   }

   if (!FUNC_7(VAR_0, VAR_1->host))
   {
      FUNC_0(((void*)0), "*** Failed to set host");
      return 1;
   }

   if (!FUNC_9(VAR_0, VAR_1->port))
   {
      FUNC_0(((void*)0), "*** Failed to set port");
      return 1;
   }

   if (!FUNC_8(VAR_0, VAR_1->path))
   {
      FUNC_0(((void*)0), "*** Failed to set path");
      return 1;
   }

   if (!FUNC_6(VAR_0, VAR_1->fragment))
   {
      FUNC_0(((void*)0), "*** Failed to set fragment");
      return 1;
   }

   VAR_2 = VAR_1->queries;
   VAR_3 = *VAR_2++;

   while (VAR_3)
   {
      VAR_4 = *VAR_2++;
      if (!FUNC_4(VAR_0, VAR_3, VAR_4))
      {
         FUNC_0(((void*)0), "*** Failed to add query");
         return 1;
      }
      VAR_3 = *VAR_2++;
   }

   FUNC_3(VAR_0);

   return FUNC_2(VAR_0, VAR_1->expected_uri);
}
