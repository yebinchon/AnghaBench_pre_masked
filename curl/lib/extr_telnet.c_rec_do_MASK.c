
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {TYPE_2__* data; } ;
struct TELNET {int* us; int* us_preferred; int* subnegotiation; int* usq; int* himq; } ;
struct TYPE_3__ {scalar_t__ protop; } ;
struct TYPE_4__ {TYPE_1__ req; } ;







 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct connectdata*,int ,int) ;
 int FUNC_1 (struct connectdata*,int) ;

__attribute__((used)) static
void FUNC_2(struct connectdata *VAR_2, int VAR_3)
{
  struct TELNET *VAR_4 = (struct TELNET *)VAR_2->data->req.protop;
  switch(VAR_4->us[VAR_3]) {
  case 132:
    if(VAR_4->us_preferred[VAR_3] == 128) {
      VAR_4->us[VAR_3] = 128;
      FUNC_0(VAR_2, VAR_0, VAR_3);
      if(VAR_4->subnegotiation[VAR_3] == 128)

        FUNC_1(VAR_2, VAR_3);
    }
    else if(VAR_4->subnegotiation[VAR_3] == 128) {

      VAR_4->us[VAR_3] = 128;
      FUNC_0(VAR_2, VAR_0, VAR_3);
      FUNC_1(VAR_2, VAR_3);
    }
    else
      FUNC_0(VAR_2, VAR_1, VAR_3);
    break;

  case 128:

    break;

  case 130:
    switch(VAR_4->usq[VAR_3]) {
    case 133:

      VAR_4->us[VAR_3] = 132;
      break;
    case 131:

      VAR_4->us[VAR_3] = 128;
      VAR_4->usq[VAR_3] = 133;
      break;
    }
    break;

  case 129:
    switch(VAR_4->usq[VAR_3]) {
    case 133:
      VAR_4->us[VAR_3] = 128;
      if(VAR_4->subnegotiation[VAR_3] == 128) {

        FUNC_1(VAR_2, VAR_3);
      }
      break;
    case 131:
      VAR_4->us[VAR_3] = 130;
      VAR_4->himq[VAR_3] = 133;
      FUNC_0(VAR_2, VAR_1, VAR_3);
      break;
    }
    break;
  }
}
