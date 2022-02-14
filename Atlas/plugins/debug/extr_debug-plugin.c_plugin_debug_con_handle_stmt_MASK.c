
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_24__ {int client; } ;
typedef TYPE_2__ network_mysqld_con ;
typedef int lua_State ;
typedef size_t gsize ;
struct TYPE_25__ {TYPE_1__* sc; } ;
typedef TYPE_3__ chassis ;
struct TYPE_27__ {int* str; } ;
struct TYPE_26__ {size_t len; struct TYPE_26__** pdata; void* type; struct TYPE_26__* name; } ;
struct TYPE_23__ {int * L; } ;
typedef TYPE_4__ MYSQL_FIELD ;
typedef TYPE_5__ GString ;
typedef TYPE_4__ GPtrArray ;


 int FUNC_0 (char*) ;



 void* VAR_0 ;

 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_5 () ;
 TYPE_4__* FUNC_6 (char*) ;
 TYPE_4__* FUNC_7 (char*,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int ,int,int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,TYPE_4__*) ;
 int FUNC_17 (int *,int) ;
 char* FUNC_18 (int *,int,size_t*) ;
 int FUNC_19 (int *,int) ;
 char* FUNC_20 (int *,int) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int ,char const*,...) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_25 () ;
 int FUNC_26 (TYPE_4__*) ;
 TYPE_4__* FUNC_27 () ;

int FUNC_28(chassis *VAR_3, network_mysqld_con *VAR_4, GString *VAR_5) {
 gsize VAR_6, VAR_7;
 GPtrArray *VAR_8;
 GPtrArray *VAR_9;
 GPtrArray *VAR_10;

 switch(VAR_5->str[VAR_1]) {
 case 130:
  VAR_8 = ((void*)0);
  VAR_9 = ((void*)0);
  VAR_10 = ((void*)0);


  if (0 == FUNC_1(*(VAR_5->str + VAR_1 + 1), FUNC_0("select @@version_comment limit 1"))) {
   MYSQL_FIELD *VAR_11;

   VAR_8 = FUNC_27();

   VAR_11 = FUNC_25();
   VAR_11->name = FUNC_6("@@version_comment");
   VAR_11->type = VAR_0;
   FUNC_3(VAR_8, VAR_11);

   VAR_9 = FUNC_5();
   VAR_10 = FUNC_5();
   FUNC_3(VAR_10, FUNC_6("MySQL Enterprise Agent"));
   FUNC_3(VAR_9, VAR_10);

   FUNC_24(VAR_4->client, VAR_8, VAR_9);

  } else if (0 == FUNC_1(*(VAR_5->str + VAR_1 + 1), FUNC_0("select USER()"))) {
   MYSQL_FIELD *VAR_12;

   VAR_8 = FUNC_27();
   VAR_12 = FUNC_25();
   VAR_12->name = FUNC_6("USER()");
   VAR_12->type = VAR_0;
   FUNC_3(VAR_8, VAR_12);

   VAR_9 = FUNC_5();
   VAR_10 = FUNC_5();
   FUNC_3(VAR_10, FUNC_6("root"));
   FUNC_3(VAR_9, VAR_10);

   FUNC_24(VAR_4->client, VAR_8, VAR_9);
  } else {
   MYSQL_FIELD *VAR_13 = ((void*)0);
   lua_State *VAR_14 = VAR_3->sc->L;

   if (0 == FUNC_8(VAR_14, *(VAR_5->str + VAR_1 + 1)) &&
       0 == FUNC_13(VAR_14, 0, 1, 0)) {
    switch (FUNC_21(VAR_14, -1)) {
    case 128:

     VAR_8 = FUNC_27();

     FUNC_15(VAR_14);
     while (FUNC_12(VAR_14, -2) != 0) {
      if (FUNC_11(VAR_14, -1)) {






       FUNC_15(VAR_14);
       while (FUNC_12(VAR_14, -2) != 0) {
        if (!VAR_9) {

         FUNC_16(VAR_14, VAR_8);
        }

        if (!VAR_10) VAR_10 = FUNC_5();
        if (FUNC_9(VAR_14, -1)) {
         FUNC_3(VAR_10, FUNC_6(FUNC_17(VAR_14, -1) ? "TRUE" : "FALSE"));
        } else if (FUNC_10(VAR_14, -1)) {
         FUNC_3(VAR_10, FUNC_7("%.0f", FUNC_19(VAR_14, -1)));
        } else {
         FUNC_3(VAR_10, FUNC_6(FUNC_20(VAR_14, -1)));
        }

        FUNC_14(VAR_14, 1);
       }

       if (!VAR_9) VAR_9 = FUNC_5();
       FUNC_3(VAR_9, VAR_10);

       VAR_10 = ((void*)0);
      } else {

       FUNC_16(VAR_14, VAR_8);

       if (!VAR_10) VAR_10 = FUNC_5();
       if (FUNC_9(VAR_14, -1)) {
        FUNC_3(VAR_10, FUNC_6(FUNC_17(VAR_14, -1) ? "TRUE" : "FALSE"));
       } else if (FUNC_10(VAR_14, -1)) {
        FUNC_3(VAR_10, FUNC_7("%.0f", FUNC_19(VAR_14, -1)));
       } else {
        FUNC_3(VAR_10, FUNC_6(FUNC_20(VAR_14, -1)));
       }
      }

      FUNC_14(VAR_14, 1);
     }

     if (VAR_10) {


      if (!VAR_9) VAR_9 = FUNC_5();
      FUNC_3(VAR_9, VAR_10);
     }

     break;
    default:

     VAR_8 = FUNC_27();
     VAR_13 = FUNC_25();
     VAR_13->name = FUNC_6("lua");
     VAR_13->type = VAR_0;
     FUNC_3(VAR_8, VAR_13);

     VAR_9 = FUNC_5();
     VAR_10 = FUNC_5();
     FUNC_3(VAR_10, FUNC_6(FUNC_20(VAR_14, -1)));
     FUNC_3(VAR_9, VAR_10);

     break;
    }

    FUNC_14(VAR_14, 1);

    FUNC_24(VAR_4->client, VAR_8, VAR_9);
   }



   if (!VAR_8) {
    size_t VAR_15 = 0;
    const char *VAR_16;

    VAR_16 = FUNC_18(VAR_14, -1, &VAR_15);

    FUNC_22(VAR_4->client, VAR_16, VAR_15);

    FUNC_14(VAR_14, 1);
   }
  }


  if (VAR_8) {
   FUNC_26(VAR_8);
   VAR_8 = ((void*)0);
  }

  if (VAR_9) {
   for (VAR_6 = 0; VAR_6 < VAR_9->len; VAR_6++) {
    VAR_10 = VAR_9->pdata[VAR_6];

    for (VAR_7 = 0; VAR_7 < VAR_10->len; VAR_7++) {
     FUNC_2(VAR_10->pdata[VAR_7]);
    }

    FUNC_4(VAR_10, VAR_2);
   }
   FUNC_4(VAR_9, VAR_2);
   VAR_9 = ((void*)0);
  }

  break;
 case 129:
  break;
 case 131:
  FUNC_23(VAR_4->client);
  break;
 default:
  FUNC_22(VAR_4->client, FUNC_0("unknown COM_*"));
  break;
 }

 return 0;
}
