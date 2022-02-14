
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* first_display; int memrefs; } ;
typedef TYPE_1__ rc_richpresence_t ;
struct TYPE_7__ {unsigned int value; char* label; struct TYPE_7__* next_item; } ;
typedef TYPE_2__ rc_richpresence_lookup_item_t ;
struct TYPE_8__ {struct TYPE_8__* next; TYPE_4__* display; int trigger; } ;
typedef TYPE_3__ rc_richpresence_display_t ;
struct TYPE_9__ {int display_type; char* text; struct TYPE_9__* next; int value; TYPE_2__* first_lookup_item; } ;
typedef TYPE_4__ rc_richpresence_display_part_t ;
typedef int rc_peek_t ;
typedef int lua_State ;




 unsigned int FUNC_0 (int *,int ,void*,int *) ;
 int FUNC_1 (char*,unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_2 (int *,int ,void*,int *) ;
 int FUNC_3 (int ,int ,void*) ;
 int FUNC_4 (char*,unsigned int,char*,char*) ;

int FUNC_5(rc_richpresence_t* VAR_0, char* VAR_1, unsigned VAR_2, rc_peek_t VAR_3, void* VAR_4, lua_State* VAR_5) {
  rc_richpresence_display_t* VAR_6;
  rc_richpresence_display_part_t* VAR_7;
  rc_richpresence_lookup_item_t* VAR_8;
  char* VAR_9;
  int VAR_10;
  unsigned VAR_11;

  FUNC_3(VAR_0->memrefs, VAR_3, VAR_4);

  VAR_9 = VAR_1;
  VAR_6 = VAR_0->first_display;
  while (VAR_6) {
    if (!VAR_6->next || FUNC_2(&VAR_6->trigger, VAR_3, VAR_4, VAR_5)) {
      VAR_7 = VAR_6->display;
      while (VAR_7) {
        switch (VAR_7->display_type) {
          case 128:
            VAR_10 = FUNC_4(VAR_9, VAR_2, "%s", VAR_7->text);
            break;

          case 129:
            VAR_11 = FUNC_0(&VAR_7->value, VAR_3, VAR_4, VAR_5);
            VAR_8 = VAR_7->first_lookup_item;
            if (!VAR_8) {
              VAR_10 = 0;
            } else {
              while (VAR_8->next_item && VAR_8->value != VAR_11)
                VAR_8 = VAR_8->next_item;

              VAR_10 = FUNC_4(VAR_9, VAR_2, "%s", VAR_8->label);
            }
            break;

          default:
            VAR_11 = FUNC_0(&VAR_7->value, VAR_3, VAR_4, VAR_5);
            VAR_10 = FUNC_1(VAR_9, VAR_2, VAR_11, VAR_7->display_type);
            break;
        }

        if (VAR_10 > 0) {
          VAR_9 += VAR_10;
          VAR_2 -= VAR_10;
        }

        VAR_7 = VAR_7->next;
      }

      return (int)(VAR_9 - VAR_1);
    }

    VAR_6 = VAR_6->next;
  }

  VAR_1[0] = '\0';
  return 0;
}
