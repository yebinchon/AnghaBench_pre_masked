
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char**,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (void (*) ()) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_9(void)
{
  char *VAR_6[3] =
  {
    "View Credits",



    "Reset System",

    "Return to Loader",
  };


  int VAR_7 = 2;
  u32 *VAR_8 = (u32*)0x80001800;
  void (*VAR_9)() = (void(*)())0x80001800;




  if (VAR_8[0] == 0x7c6000a6)

  {
    VAR_7 = 3;
  }


  switch (FUNC_3(&VAR_3, VAR_4, VAR_6, VAR_7))
  {
    case 0:
      FUNC_0(&VAR_3);
      FUNC_7();
      FUNC_2(&VAR_3);
      break;

    case 1:



      FUNC_0(&VAR_3);
      FUNC_1();
      FUNC_8();



      FUNC_4(VAR_0,0,0);

      break;

    case 2:



      FUNC_0(&VAR_3);
      FUNC_1();
      FUNC_8();
      FUNC_4(VAR_2,0,0);
      FUNC_5(*VAR_9);
      break;

    default:
      break;
  }
}
