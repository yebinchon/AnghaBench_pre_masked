
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int log_level; } ;
struct TYPE_10__ {char* ip_addr; int port; } ;
struct TYPE_9__ {int server_count; int server_index; scalar_t__ servers; } ;
typedef int ConnectionInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int *,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (scalar_t__,int *) ;
 TYPE_8__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 char* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 TYPE_2__* VAR_9 ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (char*,char*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_2__*,int) ;
 int FUNC_18 (TYPE_1__*,char*) ;
 int FUNC_19 (TYPE_1__*,char*,char*) ;
 TYPE_2__* FUNC_20 () ;
 int FUNC_21 (TYPE_1__*,char*,char*,char*) ;
 int FUNC_22 (char**) ;

int FUNC_23(int VAR_10, char *VAR_11[])
{
 char *VAR_12;
 int VAR_13;
 char *VAR_14;
 char *VAR_15;
 int VAR_16;
 char *VAR_17;

 if (VAR_10 < 2)
 {
  FUNC_22(VAR_11);
  return 1;
 }

 VAR_15 = ((void*)0);
 VAR_12 = VAR_11[1];
 VAR_16 = 2;

 if (VAR_16 >= VAR_10)
 {
  VAR_14 = "list";
 }
 else
 {
  int VAR_18;

  VAR_18 = FUNC_14(VAR_11[VAR_16]);
  if (VAR_18 >= 2 && FUNC_15(VAR_11[VAR_16], "-h", 2) == 0)
  {
   if (VAR_18 == 2)
   {
    VAR_16++;
    if (VAR_16 >= VAR_10)
    {
     FUNC_22(VAR_11);
     return 1;
    }

    VAR_15 = VAR_11[VAR_16++];
   }
   else
   {
    VAR_15 = VAR_11[VAR_16] + 2;
    VAR_16++;
   }

   if (VAR_16 < VAR_10)
   {
    VAR_14 = VAR_11[VAR_16++];
   }
   else
   {
    VAR_14 = "list";
   }
  }
  else
  {
   VAR_14 = VAR_11[VAR_16++];
  }
 }

 FUNC_9();
 VAR_6.log_level = VAR_3;
 FUNC_6();

 if ((VAR_13=FUNC_3(VAR_12)) != 0)
 {
  return VAR_13;
 }
 FUNC_8(VAR_12);

 if (VAR_15 == ((void*)0))
 {
  if (VAR_7.server_count > 1)
  {
   FUNC_12(FUNC_16(((void*)0)));
   FUNC_11();
   VAR_7.server_index = (int)( (VAR_7.server_count * (double)FUNC_11()) / (double)VAR_4);


  }
 }
 else
 {
  int VAR_19;
        ConnectionInfo VAR_20;

        if ((VAR_13=FUNC_1(VAR_15, &VAR_20,
                        VAR_2)) != 0)
  {
   FUNC_10("resolve ip address of tracker server: %s "
    "fail!, error info: %s\n", VAR_15, FUNC_5(VAR_8));
   return VAR_13;
  }

  for (VAR_19=0; VAR_19<VAR_7.server_count; VAR_19++)
  {
   if (FUNC_4(VAR_7.servers + VAR_19,
     &VAR_20) == 0)
   {
    VAR_7.server_index = VAR_19;
    break;
   }
  }

  if (VAR_19 == VAR_7.server_count)
  {
   FUNC_10("tracker server: %s not exists!\n", VAR_15);
   return 2;
  }
 }

 FUNC_10("server_count=%d, server_index=%d\n",
            VAR_7.server_count, VAR_7.server_index);

 VAR_9 = FUNC_20();
 if (VAR_9 == ((void*)0))
 {
  FUNC_2();
  return VAR_5 != 0 ? VAR_5 : VAR_0;
 }
 FUNC_10("\ntracker server is %s:%d\n\n", VAR_9->ip_addr, VAR_9->port);

 if (VAR_16 < VAR_10)
 {
  VAR_17 = VAR_11[VAR_16++];
 }
 else
 {
  VAR_17 = ((void*)0);
 }

 if (FUNC_13(VAR_14, "list") == 0)
 {
  if (VAR_17 == ((void*)0))
  {
   VAR_13 = FUNC_7(((void*)0));
  }
  else
  {
   VAR_13 = FUNC_7(VAR_17);
  }
 }
 else if (FUNC_13(VAR_14, "delete") == 0)
 {
  if (VAR_16 >= VAR_10)
  {
  if ((VAR_13=FUNC_18(&VAR_7, VAR_17)) == 0)

  {
   FUNC_10("delete group: %s success\n", VAR_17);

  }
  else
  {
   FUNC_10("delete group: %s fail, " "error no: %d, error info: %s\n", VAR_17, VAR_13, FUNC_0(VAR_13));


  }
  }
        else
        {
  char *VAR_21;

  VAR_21 = VAR_11[VAR_16++];
  if ((VAR_13=FUNC_19(&VAR_7, VAR_17, VAR_21)) == 0)

  {
   FUNC_10("delete storage server %s::%s success\n", VAR_17, VAR_21);

  }
  else
  {
   FUNC_10("delete storage server %s::%s fail, " "error no: %d, error info: %s\n", VAR_17, VAR_21, VAR_13, FUNC_0(VAR_13));



  }
        }
 }
 else if (FUNC_13(VAR_14, "set_trunk_server") == 0)
 {
  char *VAR_22;
  char VAR_23[VAR_1];

  if (VAR_17 == ((void*)0))
  {
   FUNC_22(VAR_11);
   return 1;
  }
  if (VAR_16 >= VAR_10)
  {
   VAR_22 = "";
  }
  else
  {
   VAR_22 = VAR_11[VAR_16++];
  }

  if ((VAR_13=FUNC_21(&VAR_7, VAR_17, VAR_22, VAR_23)) == 0)

  {
   FUNC_10("set trunk server %s::%s success, " "new trunk server: %s\n", VAR_17, VAR_22, VAR_23);


  }
  else
  {
   FUNC_10("set trunk server %s::%s fail, " "error no: %d, error info: %s\n", VAR_17, VAR_22, VAR_13, FUNC_0(VAR_13));



  }
 }
 else
 {
  FUNC_10("Invalid command %s\n\n", VAR_14);
  FUNC_22(VAR_11);
 }

 FUNC_17(VAR_9, 1);
 FUNC_2();
 return 0;
}
