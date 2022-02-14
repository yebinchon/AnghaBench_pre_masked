
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {TYPE_1__* data; } ;
struct TELNET {void** subnegotiation; void** him_preferred; void** us_preferred; int telrcv_state; } ;
struct TYPE_4__ {struct TELNET* protop; } ;
struct TYPE_3__ {TYPE_2__ req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct TELNET*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 struct TELNET* FUNC_1 (int,int) ;

__attribute__((used)) static
CURLcode FUNC_2(struct connectdata *VAR_8)
{
  struct TELNET *VAR_9;

  VAR_9 = FUNC_1(1, sizeof(struct TELNET));
  if(!VAR_9)
    return VAR_1;

  VAR_8->data->req.protop = VAR_9;

  VAR_9->telrcv_state = VAR_6;


  FUNC_0(VAR_9);


  VAR_9->us_preferred[VAR_5] = VAR_7;
  VAR_9->him_preferred[VAR_5] = VAR_7;






  VAR_9->us_preferred[VAR_2] = VAR_7;
  VAR_9->him_preferred[VAR_2] = VAR_7;







  VAR_9->him_preferred[VAR_3] = VAR_7;
  VAR_9->subnegotiation[VAR_4] = VAR_7;
  return VAR_0;
}
