
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {TYPE_2__* data; } ;
struct TELNET {int* us; int* usq; } ;
struct TYPE_3__ {scalar_t__ protop; } ;
struct TYPE_4__ {TYPE_1__ req; } ;







 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct connectdata*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct connectdata *VAR_2, int VAR_3, int VAR_4)
{
  struct TELNET *VAR_5 = (struct TELNET *)VAR_2->data->req.protop;
  if(VAR_4 == 128) {
    switch(VAR_5->us[VAR_3]) {
    case 132:
      VAR_5->us[VAR_3] = 129;
      FUNC_0(VAR_2, VAR_0, VAR_3);
      break;

    case 128:

      break;

    case 130:
      switch(VAR_5->usq[VAR_3]) {
      case 133:

        VAR_5->usq[VAR_3] = 131;
        break;
      case 131:

        break;
      }
      break;

    case 129:
      switch(VAR_5->usq[VAR_3]) {
      case 133:

        break;
      case 131:
        VAR_5->usq[VAR_3] = 133;
        break;
      }
      break;
    }
  }
  else {
    switch(VAR_5->us[VAR_3]) {
    case 132:

      break;

    case 128:
      VAR_5->us[VAR_3] = 130;
      FUNC_0(VAR_2, VAR_1, VAR_3);
      break;

    case 130:
      switch(VAR_5->usq[VAR_3]) {
      case 133:

        break;
      case 131:
        VAR_5->usq[VAR_3] = 133;
        break;
      }
      break;

    case 129:
      switch(VAR_5->usq[VAR_3]) {
      case 133:
        VAR_5->usq[VAR_3] = 131;
        break;
      case 131:
        break;
      }
      break;
    }
  }
}
