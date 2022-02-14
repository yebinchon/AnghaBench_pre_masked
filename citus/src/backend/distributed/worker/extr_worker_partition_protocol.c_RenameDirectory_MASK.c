
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__* StringInfo ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(StringInfo VAR_1, StringInfo VAR_2)
{
 int VAR_3 = FUNC_3(VAR_1->data, VAR_2->data);
 if (VAR_3 != 0)
 {
  FUNC_0(VAR_0, (FUNC_1(),
      FUNC_2("could not rename directory \"%s\" to \"%s\": %m",
          VAR_1->data, VAR_2->data)));
 }
}
