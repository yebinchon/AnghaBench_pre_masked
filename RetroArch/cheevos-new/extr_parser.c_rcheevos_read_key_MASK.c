
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int in_cheevos; int in_lboards; int is_console_id; int format; int * field; int flags; int badge; int created; int modified; int author; int points; int desc; int title; int memaddr; int id; } ;
typedef TYPE_1__ rcheevos_readud_t ;
 int FUNC_0 (char const*,size_t) ;

__attribute__((used)) static int FUNC_1(void* VAR_0,
      const char* VAR_1, size_t VAR_2)
{
   rcheevos_readud_t* VAR_3 = (rcheevos_readud_t*)VAR_0;

   int VAR_4 = VAR_3->in_cheevos || VAR_3->in_lboards;
   uint32_t VAR_5 = FUNC_0(VAR_1, VAR_2);
   VAR_3->field = ((void*)0);

   switch (VAR_5)
   {
      case 142:
         VAR_3->in_cheevos = 1;
         break;
      case 133:
         VAR_3->in_lboards = 1;
         break;
      case 139:
         VAR_3->is_console_id = 1;
         break;
      case 134:
         if (VAR_4)
            VAR_3->field = &VAR_3->id;
         break;
      case 131:
         if (VAR_3->in_cheevos)
            VAR_3->field = &VAR_3->memaddr;
         break;
      case 132:
         if (VAR_3->in_lboards)
            VAR_3->field = &VAR_3->memaddr;
         break;
      case 128:
         if (VAR_4)
            VAR_3->field = &VAR_3->title;
         break;
      case 137:
         if (VAR_4)
            VAR_3->field = &VAR_3->desc;
         break;
      case 129:
         if (VAR_3->in_cheevos)
            VAR_3->field = &VAR_3->points;
         break;
      case 141:
         if (VAR_3->in_cheevos)
            VAR_3->field = &VAR_3->author;
         break;
      case 130:
         if (VAR_3->in_cheevos)
            VAR_3->field = &VAR_3->modified;
         break;
      case 138:
         if (VAR_3->in_cheevos)
            VAR_3->field = &VAR_3->created;
         break;
      case 140:
         if (VAR_3->in_cheevos)
            VAR_3->field = &VAR_3->badge;
         break;
      case 136:
         if (VAR_3->in_cheevos)
            VAR_3->field = &VAR_3->flags;
         break;
      case 135:
         if (VAR_3->in_lboards)
            VAR_3->field = &VAR_3->format;
         break;
      default:
         break;
   }

   return 0;
}
