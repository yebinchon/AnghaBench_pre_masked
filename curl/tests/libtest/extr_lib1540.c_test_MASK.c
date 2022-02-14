
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transfer_status {int * easy; } ;
typedef int st ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,...) ;
 int FUNC_5 (int ) ;
 long VAR_9 ;
 int FUNC_6 (struct transfer_status*,int ,int) ;
 long VAR_10 ;
 int FUNC_7 () ;
 long VAR_11 ;

int FUNC_8(char *VAR_12)
{
  CURL *VAR_13 = ((void*)0);
  int VAR_14 = 0;
  int VAR_15 = 0;
  struct transfer_status VAR_16;

  FUNC_7();

  FUNC_6(&VAR_16, 0, sizeof(VAR_16));

  FUNC_5(VAR_8);

  FUNC_3(VAR_13);
  VAR_16.easy = VAR_13;

  FUNC_4(VAR_13, VAR_3, VAR_12);
  FUNC_4(VAR_13, VAR_5, VAR_11);
  FUNC_4(VAR_13, VAR_4, &VAR_16);
  FUNC_4(VAR_13, VAR_1, VAR_9);
  FUNC_4(VAR_13, VAR_0, &VAR_16);

  FUNC_4(VAR_13, VAR_7, VAR_10);
  FUNC_4(VAR_13, VAR_6, &VAR_16);
  FUNC_4(VAR_13, VAR_2, 0L);

  VAR_15 = FUNC_1(VAR_13);

test_cleanup:

  FUNC_0(VAR_13);
  FUNC_2();

  if(VAR_15)
    VAR_14 = VAR_15;

  return VAR_14;
}
