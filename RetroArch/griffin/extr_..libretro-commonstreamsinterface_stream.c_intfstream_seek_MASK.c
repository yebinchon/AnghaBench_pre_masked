
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fp; } ;
struct TYPE_8__ {int fp; } ;
struct TYPE_7__ {int fp; } ;
struct TYPE_9__ {int type; TYPE_1__ chd; TYPE_3__ memory; TYPE_2__ file; } ;
typedef TYPE_4__ intfstream_internal_t ;
typedef int int64_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int) ;

int64_t FUNC_3(intfstream_internal_t *VAR_3, int64_t VAR_4, int VAR_5)
{
   if (!VAR_3)
      return -1;

   switch (VAR_3->type)
   {
      case 132:
         {
            int VAR_6 = 0;
            switch (VAR_5)
            {
               case 128:
                  VAR_6 = VAR_2;
                  break;
               case 130:
                  VAR_6 = VAR_0;
                  break;
               case 129:
                  VAR_6 = VAR_1;
                  break;
            }
            return (int64_t)FUNC_1(VAR_3->file.fp, (int64_t)VAR_4,
                  VAR_6);
         }
      case 131:
         return (int64_t)FUNC_2(VAR_3->memory.fp, VAR_4, VAR_5);
      case 133:



         break;

   }

   return -1;
}
