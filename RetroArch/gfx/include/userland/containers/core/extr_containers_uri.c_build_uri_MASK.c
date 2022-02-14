
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ value; scalar_t__ name; } ;
typedef TYPE_1__ VC_URI_QUERY_T ;
struct TYPE_5__ {scalar_t__ fragment; TYPE_1__* queries; scalar_t__ num_queries; scalar_t__ path; scalar_t__ port; scalar_t__ host; scalar_t__ userinfo; scalar_t__ scheme; } ;
typedef TYPE_2__ VC_URI_PARTS_T ;


 int FUNC_0 (scalar_t__,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,scalar_t__,size_t) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_2(const VC_URI_PARTS_T *VAR_7, char *VAR_8, size_t VAR_9)
{
   uint32_t VAR_10;


   if (!VAR_7->scheme)
   {
      if (VAR_7->path)
         FUNC_1(VAR_8, VAR_7->path, VAR_9);
      else
         VAR_8[0] = '\0';
      return;
   }

   VAR_8 += FUNC_0(VAR_7->scheme, VAR_8, VAR_5);
   *VAR_8++ = ':';

   if (VAR_7->host)
   {
      *VAR_8++ = '/';
      *VAR_8++ = '/';
      if (VAR_7->userinfo)
      {
         VAR_8 += FUNC_0(VAR_7->userinfo, VAR_8, VAR_6);
         *VAR_8++ = '@';
      }
      VAR_8 += FUNC_0(VAR_7->host, VAR_8, VAR_1);
      if (VAR_7->port)
      {
         *VAR_8++ = ':';
         VAR_8 += FUNC_0(VAR_7->port, VAR_8, VAR_3);
      }
   }

   if (VAR_7->path)
      VAR_8 += FUNC_0(VAR_7->path, VAR_8, VAR_2);

   VAR_10 = VAR_7->num_queries;
   if (VAR_10)
   {
      VC_URI_QUERY_T * VAR_11 = VAR_7->queries;

      *VAR_8++ = '?';
      while (VAR_10--)
      {
         VAR_8 += FUNC_0(VAR_11->name, VAR_8, VAR_4);

         if (VAR_11->value)
         {
            *VAR_8++ = '=';
            VAR_8 += FUNC_0(VAR_11->value, VAR_8, VAR_4);
         }


         if (VAR_10)
            *VAR_8++ = '&';

         VAR_11++;
      }
   }

   if (VAR_7->fragment)
   {
      *VAR_8++ = '#';
      VAR_8 += FUNC_0(VAR_7->fragment, VAR_8, VAR_0);
   }

   *VAR_8 = '\0';
}
