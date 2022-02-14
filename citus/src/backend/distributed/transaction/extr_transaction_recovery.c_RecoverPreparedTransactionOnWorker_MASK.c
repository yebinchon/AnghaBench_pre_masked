
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int port; int hostname; } ;
struct TYPE_8__ {int data; } ;
typedef TYPE_1__* StringInfo ;
typedef int PGresult ;
typedef TYPE_2__ MultiConnection ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int **) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 (char*) ;

__attribute__((used)) static bool
FUNC_9(MultiConnection *VAR_3, char *VAR_4,
           bool VAR_5)
{
 StringInfo VAR_6 = FUNC_7();
 PGresult *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 bool VAR_9 = 0;

 if (VAR_5)
 {

  FUNC_3(VAR_6, "COMMIT PREPARED %s",
       FUNC_8(VAR_4));
 }
 else
 {

  FUNC_3(VAR_6, "ROLLBACK PREPARED %s",
       FUNC_8(VAR_4));
 }

 VAR_8 = FUNC_1(VAR_3, VAR_6->data, &VAR_7);
 if (VAR_8 == VAR_1)
 {
  return 0;
 }
 if (VAR_8 == VAR_2)
 {
  return 0;
 }

 FUNC_2(VAR_7);
 FUNC_0(VAR_3, VAR_9);

 FUNC_4(VAR_0, (FUNC_6("recovered a prepared transaction on %s:%d",
       VAR_3->hostname, VAR_3->port),
      FUNC_5("%s", VAR_6->data)));

 return 1;
}
