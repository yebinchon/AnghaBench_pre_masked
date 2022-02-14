
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int rc_peek_t ;
struct TYPE_5__ {scalar_t__ requirement; scalar_t__ alternative; } ;
struct TYPE_4__ {int submitted; int started; int value; int * progress; TYPE_2__ start; TYPE_2__ submit; TYPE_2__ cancel; int memrefs; } ;
typedef TYPE_1__ rc_lboard_t ;
typedef int lua_State ;







 unsigned int FUNC_0 (int *,int ,void*,int *) ;
 int FUNC_1 (TYPE_2__*,int ,void*,int *) ;
 int FUNC_2 (int ,int ,void*) ;

int FUNC_3(rc_lboard_t* VAR_0, unsigned* VAR_1, rc_peek_t VAR_2, void* VAR_3, lua_State* VAR_4) {
  int VAR_5, VAR_6, VAR_7;
  int VAR_8 = -1;

  FUNC_2(VAR_0->memrefs, VAR_2, VAR_3);


  VAR_5 = FUNC_1(&VAR_0->start, VAR_2, VAR_3, VAR_4);
  VAR_6 = FUNC_1(&VAR_0->cancel, VAR_2, VAR_3, VAR_4);
  VAR_7 = FUNC_1(&VAR_0->submit, VAR_2, VAR_3, VAR_4);

  if (VAR_0->submitted) {

    if (!VAR_5) {
      VAR_0->submitted = 0;
    }
  }
  else if (!VAR_0->started) {

    if (VAR_5 && !VAR_6) {
      if (VAR_7) {

        VAR_8 = 128;

        VAR_0->submitted = 1;
      }
      else if (VAR_0->start.requirement != 0 || VAR_0->start.alternative != 0) {
        VAR_0->started = 1;
        VAR_8 = 129;
      }
    }
  }
  else {

    if (VAR_6) {

      VAR_0->started = 0;
      VAR_8 = 131;

      VAR_0->submitted = 1;
    }
    else if (VAR_7) {

      VAR_0->started = 0;
      VAR_8 = 128;
      VAR_0->submitted = 1;
    }
  }

  if (VAR_8 == -1) {
    VAR_8 = VAR_0->started ? 132 : 130;
  }


  switch (VAR_8) {
    case 132:
    case 129:
      *VAR_1 = FUNC_0(VAR_0->progress != 0 ? VAR_0->progress : &VAR_0->value, VAR_2, VAR_3, VAR_4);
      break;

    case 128:
      *VAR_1 = FUNC_0(&VAR_0->value, VAR_2, VAR_3, VAR_4);
      break;

    case 130:
    case 131:
      *VAR_1 = 0;
      break;
  }

  return VAR_8;
}
