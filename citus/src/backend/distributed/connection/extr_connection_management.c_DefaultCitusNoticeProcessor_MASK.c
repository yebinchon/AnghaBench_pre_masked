
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {char* hostname; int port; } ;
typedef TYPE_1__ MultiConnection ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char*,char*,int ) ;
 int FUNC_4 (char*,int ) ;
 char* FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1, const char *VAR_2)
{
 MultiConnection *VAR_3 = (MultiConnection *) VAR_1;
 char *VAR_4 = VAR_3->hostname;
 uint32 VAR_5 = VAR_3->port;
 char *VAR_6 = FUNC_1(VAR_2);
 char *VAR_7 = FUNC_5((char *) VAR_2, ":");

 FUNC_2(VAR_0,
   (FUNC_4("%s", FUNC_0(VAR_6)),
    FUNC_3("%s from %s:%d", VAR_7, VAR_4, VAR_5)));
}
