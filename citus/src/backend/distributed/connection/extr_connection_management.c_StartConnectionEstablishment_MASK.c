
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int isValid; scalar_t__ values; scalar_t__ keywords; int runtimeParamStart; } ;
struct TYPE_13__ {int user; int database; int port; int hostname; } ;
struct TYPE_12__ {int pgConn; int connectionStart; int user; int database; int port; int hostname; } ;
typedef TYPE_1__ MultiConnection ;
typedef TYPE_2__ ConnectionHashKey ;
typedef TYPE_3__ ConnParamsHashEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,scalar_t__*,scalar_t__*,int *,int ) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_3 (int ,int) ;
 int VAR_4 ;
 int FUNC_4 (char const**,char const**,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_3__* FUNC_7 (int ,TYPE_2__*,int ,int*) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static MultiConnection *
FUNC_9(ConnectionHashKey *VAR_5)
{
 bool VAR_6 = 0;
 MultiConnection *VAR_7 = ((void*)0);
 ConnParamsHashEntry *VAR_8 = ((void*)0);


 VAR_8 = FUNC_7(VAR_0, VAR_5, VAR_2, &VAR_6);
 if (!VAR_6 || !VAR_8->isValid)
 {

  if (VAR_6 && !VAR_8->isValid)
  {
   FUNC_0(VAR_8);
  }


  FUNC_1(VAR_5, &VAR_8->keywords, &VAR_8->values, &VAR_8->runtimeParamStart,
       VAR_1);

  VAR_8->isValid = 1;
 }

 VAR_7 = FUNC_3(VAR_1, sizeof(MultiConnection));

 FUNC_8(VAR_7->hostname, VAR_5->hostname, VAR_3);
 VAR_7->port = VAR_5->port;
 FUNC_8(VAR_7->database, VAR_5->database, VAR_4);
 FUNC_8(VAR_7->user, VAR_5->user, VAR_4);


 VAR_7->pgConn = FUNC_4((const char **) VAR_8->keywords,
             (const char **) VAR_8->values,
             0);
 VAR_7->connectionStart = FUNC_2();






 FUNC_5(VAR_7->pgConn, 1);

 FUNC_6(VAR_7);

 return VAR_7;
}
