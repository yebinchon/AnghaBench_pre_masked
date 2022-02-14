
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sysEvent_t ;
typedef int byte ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int,char**) ;
 int * VAR_5 ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 char* FUNC_10 (int) ;
 int FUNC_11 (int *,int ,int) ;
 int VAR_6 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (char*) ;
 int * VAR_7 ;

int FUNC_15 ( int VAR_8, char* VAR_9[] )
{

  int VAR_10, VAR_11;
  char *VAR_12;
  void FUNC_0(const char *VAR_13);


  VAR_6 = FUNC_8();
  FUNC_12(FUNC_9());

  FUNC_6( VAR_8, VAR_9 );

  FUNC_0(VAR_9[0]);


  for (VAR_10 = 1, VAR_11 = 1; VAR_11 < VAR_8; VAR_11++)
    VAR_10 += FUNC_14(VAR_9[VAR_11]) + 1;
  VAR_12 = FUNC_10(VAR_10);
  *VAR_12 = 0;
  for (VAR_11 = 1; VAR_11 < VAR_8; VAR_11++)
  {
    if (VAR_11 > 1)
      FUNC_13(VAR_12, " ");
    FUNC_13(VAR_12, VAR_9[VAR_11]);
  }


  FUNC_11( &VAR_5[0], 0, VAR_4*sizeof(sysEvent_t) );
  FUNC_11( &VAR_7[0], 0, VAR_3*sizeof(byte) );

  FUNC_1(VAR_12);
  FUNC_3();

  FUNC_5();

  FUNC_7(0, VAR_2, FUNC_7 (0, VAR_1, 0) | VAR_0);






  while (1)
  {

    FUNC_4();

    FUNC_0 ();
  }
}
