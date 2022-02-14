
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int byte ;
struct TYPE_5__ {scalar_t__ (* outputHandler ) (TYPE_1__*,char const*,size_t) ;} ;
typedef TYPE_1__* JSON_Writer ;
typedef int JSON_Status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char const*,size_t) ;

__attribute__((used)) static JSON_Status FUNC_2(JSON_Writer VAR_4, const byte* VAR_5, size_t VAR_6)
{
   if (VAR_4->outputHandler && VAR_6)
   {
      if (VAR_4->outputHandler(VAR_4, (const char*)VAR_5, VAR_6) != VAR_3)
      {
         FUNC_0(VAR_4, VAR_0);
         return VAR_1;
      }
   }
   return VAR_2;
}
