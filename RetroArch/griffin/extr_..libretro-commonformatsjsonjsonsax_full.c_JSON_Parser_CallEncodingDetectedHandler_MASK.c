
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* encodingDetectedHandler ) (TYPE_1__*) ;} ;
typedef int JSON_Status ;
typedef TYPE_1__* JSON_Parser ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static JSON_Status FUNC_2(JSON_Parser VAR_4)
{
   if (VAR_4->encodingDetectedHandler && VAR_4->encodingDetectedHandler(VAR_4) != VAR_2)
   {
      FUNC_0(VAR_4, VAR_0);
      return VAR_1;
   }
   return VAR_3;
}
