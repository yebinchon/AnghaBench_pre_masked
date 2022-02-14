
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_3__ {int data; } ;
typedef TYPE_1__* StringInfo ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ,struct stat*) ;

bool
FUNC_6(StringInfo VAR_3)
{
 bool VAR_4 = 1;
 struct stat VAR_5;

 int VAR_6 = FUNC_5(VAR_3->data, &VAR_5);
 if (VAR_6 == 0)
 {

  FUNC_0(FUNC_1(VAR_5.st_mode));
 }
 else
 {
  if (VAR_2 == VAR_0)
  {
   VAR_4 = 0;
  }
  else
  {
   FUNC_2(VAR_1, (FUNC_3(),
       FUNC_4("could not stat directory \"%s\": %m",
           VAR_3->data)));
  }
 }

 return VAR_4;
}
