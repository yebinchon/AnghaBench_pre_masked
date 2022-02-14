
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {TYPE_2__* data; } ;
struct TELNET {scalar_t__* us_preferred; scalar_t__* him_preferred; } ;
struct TYPE_3__ {scalar_t__ protop; } ;
struct TYPE_4__ {TYPE_1__ req; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct connectdata*,int,scalar_t__) ;
 int FUNC_1 (struct connectdata*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct connectdata *VAR_3)
{
  int VAR_4;
  struct TELNET *VAR_5 = (struct TELNET *) VAR_3->data->req.protop;

  for(VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
    if(VAR_4 == VAR_1)
      continue;

    if(VAR_5->us_preferred[VAR_4] == VAR_2)
      FUNC_0(VAR_3, VAR_4, VAR_2);

    if(VAR_5->him_preferred[VAR_4] == VAR_2)
      FUNC_1(VAR_3, VAR_4, VAR_2);
  }
}
