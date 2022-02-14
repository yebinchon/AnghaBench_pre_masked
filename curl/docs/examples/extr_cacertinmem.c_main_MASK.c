
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,...) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 long* VAR_17 ;
 long VAR_18 ;
 long VAR_19 ;
 long* VAR_20 ;

int FUNC_7(void)
{
  CURL *VAR_21;
  CURLcode VAR_22;

  FUNC_5(VAR_16);
  VAR_21 = FUNC_1();
  FUNC_3(VAR_21, VAR_13, 0L);
  FUNC_3(VAR_21, VAR_4, 0L);
  FUNC_3(VAR_21, VAR_7, 1L);
  FUNC_3(VAR_21, VAR_8, 1L);
  FUNC_3(VAR_21, VAR_15, *VAR_20);
  FUNC_3(VAR_21, VAR_14, VAR_19);
  FUNC_3(VAR_21, VAR_6, *VAR_20);
  FUNC_3(VAR_21, VAR_5, VAR_18);
  FUNC_3(VAR_21, VAR_9, "PEM");
  FUNC_3(VAR_21, VAR_11, 1L);
  FUNC_3(VAR_21, VAR_12, "https://www.example.com/");





  FUNC_3(VAR_21, VAR_1, ((void*)0));
  FUNC_3(VAR_21, VAR_2, ((void*)0));




  VAR_22 = FUNC_2(VAR_21);
  if(VAR_22 == VAR_0)
    FUNC_6("*** transfer succeeded ***\n");
  else
    FUNC_6("*** transfer failed ***\n");
  FUNC_3(VAR_21, VAR_3, 1L);





  FUNC_3(VAR_21, VAR_10, *VAR_17);
  VAR_22 = FUNC_2(VAR_21);
  if(VAR_22 == VAR_0)
    FUNC_6("*** transfer succeeded ***\n");
  else
    FUNC_6("*** transfer failed ***\n");

  FUNC_0(VAR_21);
  FUNC_4();
  return VAR_22;
}
