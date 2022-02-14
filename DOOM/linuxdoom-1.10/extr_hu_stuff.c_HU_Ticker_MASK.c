
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {char chatchar; } ;
struct TYPE_12__ {TYPE_2__ cmd; } ;
struct TYPE_11__ {scalar_t__ message; } ;
struct TYPE_8__ {scalar_t__ l; scalar_t__ len; } ;
struct TYPE_10__ {TYPE_1__ l; } ;


 char VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,char) ;
 int FUNC_2 (TYPE_3__*) ;
 char VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 TYPE_5__* VAR_15 ;
 TYPE_4__* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__* VAR_19 ;
 scalar_t__ VAR_20 ;
 TYPE_3__* VAR_21 ;
 int VAR_22 ;

void FUNC_4(void)
{

    int VAR_23, VAR_24;
    char VAR_25;


    if (VAR_8 && !--VAR_8)
    {
 VAR_11 = 0;
 VAR_10 = 0;
    }

    if (VAR_20 || VAR_9)
    {


 if ((VAR_16->message && !VAR_10)
     || (VAR_16->message && VAR_9))
 {
     FUNC_0(&VAR_22, 0, VAR_16->message);
     VAR_16->message = 0;
     VAR_11 = 1;
     VAR_8 = VAR_1;
     VAR_10 = VAR_9;
     VAR_9 = 0;
 }

    }


    if (VAR_12)
    {
 for (VAR_23=0 ; VAR_23<VAR_3; VAR_23++)
 {
     if (!VAR_14[VAR_23])
  continue;
     if (VAR_23 != VAR_6
  && (VAR_25 = VAR_15[VAR_23].cmd.chatchar))
     {
  if (VAR_25 <= VAR_0)
      VAR_4[VAR_23] = VAR_25;
  else
  {
      if (VAR_25 >= 'a' && VAR_25 <= 'z')
   VAR_25 = (char) VAR_19[(unsigned char) VAR_25];
      VAR_24 = FUNC_1(&VAR_21[VAR_23], VAR_25);
      if (VAR_24 && VAR_25 == VAR_2)
      {
   if (VAR_21[VAR_23].l.len
       && (VAR_4[VAR_23] == VAR_6+1
    || VAR_4[VAR_23] == VAR_0))
   {
       FUNC_0(&VAR_22,
          VAR_13[VAR_23],
          VAR_21[VAR_23].l.l);

       VAR_10 = 1;
       VAR_11 = 1;
       VAR_8 = VAR_1;
       if ( VAR_7 == VAR_5 )
         FUNC_3(0, VAR_17);
       else
         FUNC_3(0, VAR_18);
   }
   FUNC_2(&VAR_21[VAR_23]);
      }
  }
  VAR_15[VAR_23].cmd.chatchar = 0;
     }
 }
    }

}
