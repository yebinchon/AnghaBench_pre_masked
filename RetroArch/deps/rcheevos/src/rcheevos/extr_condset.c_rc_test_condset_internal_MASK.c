
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int rc_peek_t ;
struct TYPE_5__ {TYPE_2__* conditions; } ;
typedef TYPE_1__ rc_condset_t ;
struct TYPE_6__ {int pause; int type; scalar_t__ required_hits; scalar_t__ current_hits; int operand1; struct TYPE_6__* next; } ;
typedef TYPE_2__ rc_condition_t ;
typedef int lua_State ;
 unsigned int FUNC_0 (int *,int ,void*,int *) ;
 int FUNC_1 (TYPE_2__*,unsigned int,int ,void*,int *) ;

__attribute__((used)) static int FUNC_2(rc_condset_t* VAR_0, int VAR_1, int* VAR_2, rc_peek_t VAR_3, void* VAR_4, lua_State* VAR_5) {
  rc_condition_t* VAR_6;
  int VAR_7, VAR_8, VAR_9;
  unsigned VAR_10, VAR_11;

  VAR_7 = 1;
  VAR_9 = 1;
  VAR_10 = VAR_11 = 0;

  for (VAR_6 = VAR_0->conditions; VAR_6 != 0; VAR_6 = VAR_6->next) {
    if (VAR_6->pause != VAR_1) {
      continue;
    }

    switch (VAR_6->type) {
      case 132:
        VAR_10 += FUNC_0(&VAR_6->operand1, VAR_3, VAR_4, VAR_5);
        continue;

      case 128:
        VAR_10 -= FUNC_0(&VAR_6->operand1, VAR_3, VAR_4, VAR_5);
        continue;

      case 133:
        if (FUNC_1(VAR_6, VAR_10, VAR_3, VAR_4, VAR_5)) {
          if (VAR_6->required_hits == 0 || VAR_6->current_hits < VAR_6->required_hits) {
            VAR_6->current_hits++;
          }
        }

        VAR_10 = 0;
        VAR_11 += VAR_6->current_hits;
        continue;

      case 131:
        VAR_9 &= FUNC_1(VAR_6, VAR_10, VAR_3, VAR_4, VAR_5);
        VAR_10 = 0;
        continue;
    }


    VAR_8 = FUNC_1(VAR_6, VAR_10, VAR_3, VAR_4, VAR_5);


    VAR_8 &= VAR_9;
    VAR_9 = 1;


    if (VAR_6->required_hits != 0 && (VAR_6->current_hits + VAR_11) >= VAR_6->required_hits) {
      VAR_8 = 1;
    }
    else if (VAR_8) {
      VAR_6->current_hits++;

      if (VAR_6->required_hits == 0) {

      }
      else if ((VAR_6->current_hits + VAR_11) < VAR_6->required_hits) {

        VAR_8 = 0;
      }
    }


    VAR_10 = VAR_11 = 0;

    switch (VAR_6->type) {
      case 130:

        if (VAR_8) {
          return 1;
        }



        VAR_7 = 0;

        if (VAR_6->required_hits == 0) {

          VAR_6->current_hits = 0;
        }
        else {

        }

        break;

      case 129:
        if (VAR_8) {
          *VAR_2 = 1;
          VAR_7 = 0;
        }

        break;

      default:
        VAR_7 &= VAR_8;
        break;
    }
  }

  return VAR_7;
}
