
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ offset; } ;
typedef TYPE_1__ rc_parse_state_t ;
struct TYPE_13__ {scalar_t__ memrefs; } ;
struct TYPE_14__ {scalar_t__ memrefs; } ;
struct TYPE_12__ {scalar_t__ submitted; scalar_t__ started; TYPE_3__* progress; TYPE_3__ value; TYPE_5__ submit; TYPE_5__ cancel; TYPE_5__ start; } ;
typedef TYPE_2__ rc_lboard_t ;


 TYPE_3__* FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (TYPE_5__*,char const**,TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,char const**,TYPE_1__*) ;
 int VAR_16 ;

void FUNC_3(rc_lboard_t* VAR_17, const char* VAR_18, rc_parse_state_t* VAR_19) {
  int VAR_20;

  VAR_17->progress = 0;
  VAR_20 = 0;

  for (;;)
  {
    if ((VAR_18[0] == 's' || VAR_18[0] == 'S') &&
        (VAR_18[1] == 't' || VAR_18[1] == 'T') &&
        (VAR_18[2] == 'a' || VAR_18[2] == 'A') && VAR_18[3] == ':') {
      if ((VAR_20 & VAR_9) != 0) {
        VAR_19->offset = VAR_2;
        return;
      }

      VAR_20 |= VAR_9;
      VAR_18 += 4;
      FUNC_1(&VAR_17->start, &VAR_18, VAR_19);
      VAR_17->start.memrefs = 0;

      if (VAR_19->offset < 0) {
        return;
      }
    }
    else if ((VAR_18[0] == 'c' || VAR_18[0] == 'C') &&
             (VAR_18[1] == 'a' || VAR_18[1] == 'A') &&
             (VAR_18[2] == 'n' || VAR_18[2] == 'N') && VAR_18[3] == ':') {
      if ((VAR_20 & VAR_6) != 0) {
        VAR_19->offset = VAR_0;
        return;
      }

      VAR_20 |= VAR_6;
      VAR_18 += 4;
      FUNC_1(&VAR_17->cancel, &VAR_18, VAR_19);
      VAR_17->cancel.memrefs = 0;

      if (VAR_19->offset < 0) {
        return;
      }
    }
    else if ((VAR_18[0] == 's' || VAR_18[0] == 'S') &&
             (VAR_18[1] == 'u' || VAR_18[1] == 'U') &&
             (VAR_18[2] == 'b' || VAR_18[2] == 'B') && VAR_18[3] == ':') {
      if ((VAR_20 & VAR_10) != 0) {
        VAR_19->offset = VAR_3;
        return;
      }

      VAR_20 |= VAR_10;
      VAR_18 += 4;
      FUNC_1(&VAR_17->submit, &VAR_18, VAR_19);
      VAR_17->submit.memrefs = 0;

      if (VAR_19->offset < 0) {
        return;
      }
    }
    else if ((VAR_18[0] == 'v' || VAR_18[0] == 'V') &&
             (VAR_18[1] == 'a' || VAR_18[1] == 'A') &&
             (VAR_18[2] == 'l' || VAR_18[2] == 'L') && VAR_18[3] == ':') {
      if ((VAR_20 & VAR_11) != 0) {
        VAR_19->offset = VAR_4;
        return;
      }

      VAR_20 |= VAR_11;
      VAR_18 += 4;
      FUNC_2(&VAR_17->value, &VAR_18, VAR_19);
      VAR_17->value.memrefs = 0;

      if (VAR_19->offset < 0) {
        return;
      }
    }
    else if ((VAR_18[0] == 'p' || VAR_18[0] == 'P') &&
             (VAR_18[1] == 'r' || VAR_18[1] == 'R') &&
             (VAR_18[2] == 'o' || VAR_18[2] == 'O') && VAR_18[3] == ':') {
      if ((VAR_20 & VAR_8) != 0) {
        VAR_19->offset = VAR_1;
        return;
      }

      VAR_20 |= VAR_8;
      VAR_18 += 4;

      VAR_17->progress = FUNC_0(VAR_16, VAR_19);
      FUNC_2(VAR_17->progress, &VAR_18, VAR_19);
      VAR_17->progress->memrefs = 0;

      if (VAR_19->offset < 0) {
        return;
      }
    }
    else {
      VAR_19->offset = VAR_5;
      return;
    }

    if (VAR_18[0] != ':' || VAR_18[1] != ':') {
      break;
    }

    VAR_18 += 2;
  }

  if ((VAR_20 & VAR_7) != VAR_7) {
    if ((VAR_20 & VAR_9) == 0) {
      VAR_19->offset = VAR_13;
    }
    else if ((VAR_20 & VAR_6) == 0) {
      VAR_19->offset = VAR_12;
    }
    else if ((VAR_20 & VAR_10) == 0) {
      VAR_19->offset = VAR_14;
    }
    else if ((VAR_20 & VAR_11) == 0) {
      VAR_19->offset = VAR_15;
    }

    return;
  }

  VAR_17->started = VAR_17->submitted = 0;
}
