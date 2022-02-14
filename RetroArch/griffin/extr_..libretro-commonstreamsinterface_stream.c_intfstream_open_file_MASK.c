
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int intfstream_t ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ intfstream_info_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,char const*,unsigned int,unsigned int) ;

intfstream_t* FUNC_4(const char *VAR_1,
      unsigned VAR_2, unsigned VAR_3)
{
   intfstream_info_t VAR_4;
   intfstream_t *VAR_5 = ((void*)0);

   VAR_4.type = VAR_0;
   VAR_5 = (intfstream_t*)FUNC_2(&VAR_4);

   if (!VAR_5)
      return ((void*)0);

   if (!FUNC_3(VAR_5, VAR_1, VAR_2, VAR_3))
      goto error;

   return VAR_5;

error:
   if (VAR_5)
   {
      FUNC_1(VAR_5);
      FUNC_0(VAR_5);
   }
   return ((void*)0);
}
