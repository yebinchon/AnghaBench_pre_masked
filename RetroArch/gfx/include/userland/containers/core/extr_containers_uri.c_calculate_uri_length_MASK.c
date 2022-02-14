
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ value; scalar_t__ name; } ;
typedef TYPE_1__ VC_URI_QUERY_T ;
struct TYPE_5__ {scalar_t__ fragment; TYPE_1__* queries; scalar_t__ num_queries; scalar_t__ path; scalar_t__ port; scalar_t__ userinfo; scalar_t__ host; scalar_t__ scheme; } ;
typedef TYPE_2__ VC_URI_PARTS_T ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static uint32_t FUNC_2(const VC_URI_PARTS_T *VAR_7)
{
   uint32_t VAR_8 = 0;
   uint32_t VAR_9;


   if (!VAR_7->scheme)
      return VAR_7->path ? FUNC_1(VAR_7->path) : 0;

   VAR_8 += FUNC_0(VAR_7->scheme, VAR_5);
   VAR_8++;

   if (VAR_7->host)
   {
      VAR_8 += FUNC_0(VAR_7->host, VAR_1) + 2;
      if (VAR_7->userinfo)
         VAR_8 += FUNC_0(VAR_7->userinfo, VAR_6) + 1;
      if (VAR_7->port)
         VAR_8 += FUNC_0(VAR_7->port, VAR_3) + 1;
   }

   if (VAR_7->path)
      VAR_8 += FUNC_0(VAR_7->path, VAR_2);

   VAR_9 = VAR_7->num_queries;
   if (VAR_9)
   {
      VC_URI_QUERY_T * VAR_10 = VAR_7->queries;

      while (VAR_9--)
      {

         VAR_8 += FUNC_0(VAR_10->name, VAR_4) + 1;


         if (VAR_10->value)
            VAR_8 += FUNC_0(VAR_10->value, VAR_4) + 1;
         VAR_10++;
      }
   }

   if (VAR_7->fragment)
      VAR_8 += FUNC_0(VAR_7->fragment, VAR_0) + 1;

   return VAR_8;
}
