
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* isInserted ) () ;} ;


 int FUNC_0 () ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,TYPE_1__*) ;
 int FUNC_4 (char*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(void)
{
  FUNC_1("Information", "Mounting DVD ...",1);


  if (VAR_1)
  {

    FUNC_4("dvd:");
    VAR_1 = 0;
  }


  if(!VAR_0->isInserted())
  {
    FUNC_2("Error","No Disc inserted !");
    return 0;
  }


  if(!FUNC_3("dvd",VAR_0))
  {
    FUNC_2("Error","Disc can not be read !");
    return 0;
  }


  VAR_1 = 1;

  FUNC_0();
  return 1;
}
