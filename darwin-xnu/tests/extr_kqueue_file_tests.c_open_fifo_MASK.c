
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (char const*,int) ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,int ,void*) ;
 int FUNC_4 (int ,void**) ;
 int FUNC_5 (int ) ;

int
FUNC_6(const char *VAR_6, int *VAR_7, int *VAR_8)
{
 pthread_t VAR_9;
 int VAR_10;
 int VAR_11;
 int *VAR_12, VAR_13;

 VAR_4 = -1;
 VAR_11 = FUNC_3(&VAR_9, 0, VAR_5, (void*)VAR_6);
 if (VAR_11 == 0) {
  if ((VAR_13 = FUNC_2(VAR_6, VAR_2)) == -1) {
   FUNC_0("open(%s, O_WRONLY) failed: %d (%s)\n", VAR_6, VAR_3, FUNC_5(VAR_3));
   return (-1);
  }
  VAR_10 = FUNC_4(VAR_9, (void**) &VAR_12);

  FUNC_1(VAR_13, VAR_0, VAR_2 | VAR_1);

  if ((VAR_10 == 0) && (VAR_13 >= 0) && (*VAR_12 >= 0)) {
   *VAR_7 = *VAR_12;
   *VAR_8 = VAR_13;
  } else {
   VAR_11 = -1;
  }
 }

 return VAR_11;
}
