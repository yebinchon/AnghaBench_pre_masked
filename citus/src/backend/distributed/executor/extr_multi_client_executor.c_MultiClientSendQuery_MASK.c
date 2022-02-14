
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t int32 ;
struct TYPE_4__ {int pgConn; } ;
typedef TYPE_1__ MultiConnection ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 TYPE_1__** VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;
 char* FUNC_7 (int ) ;

bool
FUNC_8(int32 VAR_3, const char *VAR_4)
{
 MultiConnection *VAR_5 = ((void*)0);
 bool VAR_6 = 1;
 int VAR_7 = 0;

 FUNC_1(VAR_3 != VAR_1);
 VAR_5 = VAR_0[VAR_3];
 FUNC_1(VAR_5 != ((void*)0));

 VAR_7 = FUNC_3(VAR_5, VAR_4);
 if (VAR_7 == 0)
 {
  char *VAR_8 = FUNC_7(FUNC_2(VAR_5->pgConn));







  FUNC_4(VAR_2, (FUNC_6("could not send remote query \"%s\"",
         FUNC_0(VAR_4)),
        FUNC_5("Client error: %s",
         FUNC_0(VAR_8))));

  VAR_6 = 0;
 }

 return VAR_6;
}
