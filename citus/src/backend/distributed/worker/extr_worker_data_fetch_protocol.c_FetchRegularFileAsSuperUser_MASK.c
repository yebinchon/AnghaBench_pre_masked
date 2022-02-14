
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_8__ {int data; } ;
typedef TYPE_1__* StringInfo ;


 int VAR_0 ;
 char* FUNC_0 () ;
 char* FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char const*,int ,char*,TYPE_1__*,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,char*,int ,int ,...) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ,char const*,...) ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void
FUNC_11(const char *VAR_4, uint32 VAR_5,
       StringInfo VAR_6, StringInfo VAR_7)
{
 char *VAR_8 = ((void*)0);
 StringInfo VAR_9 = ((void*)0);
 StringInfo VAR_10 = ((void*)0);
 char *VAR_11 = FUNC_1();
 uint32 VAR_12 = (uint32) FUNC_9();
 bool VAR_13 = 0;
 int VAR_14 = 0;






 VAR_9 = FUNC_7();
 FUNC_3(VAR_9, "%s_%0*u%s", VAR_7->data,
      VAR_2, VAR_12, VAR_0);

 VAR_10 = FUNC_7();
 FUNC_3(VAR_10, VAR_3, VAR_6->data,
      FUNC_8(VAR_11));


 VAR_8 = FUNC_0();

 VAR_13 = FUNC_2(VAR_4, VAR_5, VAR_8, VAR_10,
          VAR_9);
 if (!VAR_13)
 {
  FUNC_4(VAR_1, (FUNC_6("could not receive file \"%s\" from %s:%u",
          VAR_6->data, VAR_4, VAR_5)));
 }


 VAR_14 = FUNC_10(VAR_9->data, VAR_7->data);
 if (VAR_14 != 0)
 {
  FUNC_4(VAR_1, (FUNC_5(),
      FUNC_6("could not rename file \"%s\" to \"%s\": %m",
          VAR_9->data, VAR_7->data)));
 }
}
