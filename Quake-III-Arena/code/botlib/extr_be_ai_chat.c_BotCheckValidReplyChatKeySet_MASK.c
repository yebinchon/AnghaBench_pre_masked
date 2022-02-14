
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int source_t ;
struct TYPE_5__ {int flags; int string; TYPE_3__* match; struct TYPE_5__* next; } ;
typedef TYPE_1__ bot_replychatkey_t ;
struct TYPE_6__ {int string; struct TYPE_6__* next; } ;
typedef TYPE_2__ bot_matchstring_t ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__* firststring; struct TYPE_7__* next; } ;
typedef TYPE_3__ bot_matchpiece_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_2(source_t *VAR_8, bot_replychatkey_t *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 bot_matchpiece_t *VAR_13;
 bot_matchstring_t *VAR_14;
 bot_replychatkey_t *VAR_15, *VAR_16;


 VAR_10 = VAR_7;
 VAR_11 = VAR_12 = VAR_6;
 for (VAR_15 = VAR_9; VAR_15; VAR_15 = VAR_15->next)
 {
  if (!(VAR_15->flags & (VAR_2|VAR_3)))
  {
   VAR_10 = VAR_6;
   if (VAR_15->flags & VAR_5)
   {
    for (VAR_13 = VAR_15->match; VAR_13; VAR_13 = VAR_13->next)
    {
     if (VAR_13->type == VAR_1) VAR_11 = VAR_7;
    }
   }
   else if (VAR_15->flags & VAR_4)
   {
    VAR_12 = VAR_7;
   }
  }
  else if ((VAR_15->flags & VAR_2) && (VAR_15->flags & VAR_4))
  {
   for (VAR_16 = VAR_9; VAR_16; VAR_16 = VAR_16->next)
   {
    if (VAR_16 == VAR_15) continue;
    if (VAR_16->flags & VAR_3) continue;
    if (VAR_16->flags & VAR_5)
    {
     for (VAR_13 = VAR_16->match; VAR_13; VAR_13 = VAR_13->next)
     {
      if (VAR_13->type == VAR_0)
      {
       for (VAR_14 = VAR_13->firststring; VAR_14; VAR_14 = VAR_14->next)
       {
        if (FUNC_1(VAR_14->string, VAR_15->string, VAR_6) != -1)
        {
         break;
        }
       }
       if (VAR_14) break;
      }
      else if (VAR_13->type == VAR_1)
      {
       break;
      }
     }
     if (!VAR_13)
     {
      FUNC_0(VAR_8, "one of the match templates does not "
          "leave space for the key %s with the & prefix", VAR_15->string);
     }
    }
   }
  }
  if ((VAR_15->flags & VAR_3) && (VAR_15->flags & VAR_4))
  {
   for (VAR_16 = VAR_9; VAR_16; VAR_16 = VAR_16->next)
   {
    if (VAR_16 == VAR_15) continue;
    if (VAR_16->flags & VAR_3) continue;
    if (VAR_16->flags & VAR_4)
    {
     if (FUNC_1(VAR_16->string, VAR_15->string, VAR_6) != -1)
     {
      FUNC_0(VAR_8, "the key %s with prefix ! is inside the key %s", VAR_15->string, VAR_16->string);
     }
    }
    else if (VAR_16->flags & VAR_5)
    {
     for (VAR_13 = VAR_16->match; VAR_13; VAR_13 = VAR_13->next)
     {
      if (VAR_13->type == VAR_0)
      {
       for (VAR_14 = VAR_13->firststring; VAR_14; VAR_14 = VAR_14->next)
       {
        if (FUNC_1(VAR_14->string, VAR_15->string, VAR_6) != -1)
        {
         FUNC_0(VAR_8, "the key %s with prefix ! is inside "
            "the match template string %s", VAR_15->string, VAR_14->string);
        }
       }
      }
     }
    }
   }
  }
 }
 if (VAR_10) FUNC_0(VAR_8, "all keys have a & or ! prefix");
 if (VAR_11 && VAR_12)
 {
  FUNC_0(VAR_8, "variables from the match template(s) could be "
        "invalid when outputting one of the chat messages");
 }
}
