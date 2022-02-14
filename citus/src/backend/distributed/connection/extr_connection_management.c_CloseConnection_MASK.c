
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int database; int user; int port; int hostname; } ;
struct TYPE_8__ {int connectionNode; int database; int user; int port; int hostname; int * pgConn; } ;
typedef TYPE_1__ MultiConnection ;
typedef TYPE_2__ ConnectionHashKey ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,TYPE_2__*,int ,int*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ,int ) ;

void
FUNC_9(MultiConnection *VAR_5)
{
 ConnectionHashKey VAR_6;
 bool VAR_7;


 FUNC_2(VAR_5->pgConn);
 VAR_5->pgConn = ((void*)0);

 FUNC_8(VAR_6.hostname, VAR_5->hostname, VAR_3);
 VAR_6.port = VAR_5->port;
 FUNC_8(VAR_6.user, VAR_5->user, VAR_4);
 FUNC_8(VAR_6.database, VAR_5->database, VAR_4);

 FUNC_6(VAR_0, &VAR_6, VAR_2, &VAR_7);

 if (VAR_7)
 {

  FUNC_3(&VAR_5->connectionNode);


  FUNC_0(VAR_5);
  FUNC_1(VAR_5);


  FUNC_7(VAR_5);
 }
 else
 {
  FUNC_4(VAR_1, (FUNC_5("closing untracked connection")));
 }
}
