
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,...) ;
 int FUNC_6 (int ) ;

int FUNC_7(char *VAR_9)
{
  long VAR_10;
  CURL *VAR_11 = ((void*)0);
  int VAR_12 = 0;

  FUNC_6(VAR_5);

  FUNC_4(VAR_11);

  FUNC_5(VAR_11, VAR_4, VAR_9);
  FUNC_5(VAR_11, VAR_1, 1L);
  FUNC_5(VAR_11, VAR_2, (long)VAR_6);


  FUNC_5(VAR_11, VAR_3, 1566210680L);

  VAR_12 = FUNC_2(VAR_11);
  if(VAR_12)
    goto test_cleanup;

  FUNC_1(VAR_11, VAR_0, &VAR_10);
  if(VAR_10 != 1L) {
    VAR_12 = VAR_7;
    goto test_cleanup;
  }


  FUNC_5(VAR_11, VAR_3, 1L);

  VAR_12 = FUNC_2(VAR_11);
  if(VAR_12)
    goto test_cleanup;

  FUNC_1(VAR_11, VAR_0, &VAR_10);
  if(VAR_10 != 0L) {
    VAR_12 = VAR_7;
    goto test_cleanup;
  }

  VAR_12 = VAR_8;

test_cleanup:


  FUNC_0(VAR_11);
  FUNC_3();

  return VAR_12;
}
