
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int pgConn; } ;
struct TYPE_17__ {char* data; } ;
typedef TYPE_1__* StringInfo ;
typedef TYPE_2__ MultiConnection ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 long VAR_2 ;
 int FUNC_5 (TYPE_2__*,char*) ;
 TYPE_2__* FUNC_6 (int,char*,int) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char*,char*,int) ;
 TYPE_2__** FUNC_9 (int) ;
 int FUNC_10 (TYPE_2__**) ;
 int FUNC_11 (long) ;

__attribute__((used)) static void
FUNC_12(StringInfo *VAR_3, int *VAR_4,
           StringInfo *VAR_5,
           bool *VAR_6, StringInfo *VAR_7,
           int VAR_8)
{
 int VAR_9 = 0;
 MultiConnection **VAR_10 =
  FUNC_9(VAR_8 * sizeof(MultiConnection *));
 int VAR_11 = 0;


 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
 {
  char *VAR_12 = VAR_3[VAR_9]->data;
  int VAR_13 = VAR_4[VAR_9];
  int VAR_14 = VAR_1;
  VAR_10[VAR_9] =
   FUNC_6(VAR_14, VAR_12, VAR_13);
 }


 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
 {
  MultiConnection *VAR_15 = VAR_10[VAR_9];
  StringInfo VAR_16 = VAR_7[VAR_9];
  char *VAR_17 = VAR_3[VAR_9]->data;
  int VAR_18 = VAR_4[VAR_9];

  FUNC_2(VAR_15);

  if (FUNC_4(VAR_15->pgConn) != VAR_0)
  {
   FUNC_8(VAR_16, "failed to connect to %s:%d", VAR_17,
        (int) VAR_18);
   VAR_6[VAR_9] = 0;
   VAR_10[VAR_9] = ((void*)0);
   VAR_11++;
  }
  else
  {
   VAR_6[VAR_9] = 1;
  }
 }


 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
 {
  int VAR_19 = 0;
  MultiConnection *VAR_20 = VAR_10[VAR_9];
  char *VAR_21 = VAR_5[VAR_9]->data;
  StringInfo VAR_22 = VAR_7[VAR_9];





  if (VAR_20 == ((void*)0))
  {
   continue;
  }

  VAR_19 = FUNC_5(VAR_20, VAR_21);
  if (VAR_19 == 0)
  {
   FUNC_7(VAR_20, VAR_22);
   VAR_6[VAR_9] = 0;
   FUNC_1(VAR_20);
   VAR_10[VAR_9] = ((void*)0);
   VAR_11++;
  }
 }


 while (VAR_11 < VAR_8)
 {
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  {
   MultiConnection *VAR_23 = VAR_10[VAR_9];
   StringInfo VAR_24 = VAR_7[VAR_9];
   bool VAR_25 = 0;
   bool VAR_26 = 0;

   if (VAR_23 == ((void*)0))
   {
    continue;
   }

   VAR_26 = FUNC_3(VAR_23, &VAR_25,
               VAR_24);

   if (VAR_26)
   {
    VAR_11++;
    VAR_6[VAR_9] = VAR_25;
    VAR_10[VAR_9] = ((void*)0);
    FUNC_1(VAR_23);
   }
  }

  FUNC_0();

  if (VAR_11 < VAR_8)
  {
   long VAR_27 = VAR_2 * 1000L;
   FUNC_11(VAR_27);
  }
 }

 FUNC_10(VAR_10);
}
