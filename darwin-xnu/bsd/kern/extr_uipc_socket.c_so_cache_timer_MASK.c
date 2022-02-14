
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ cache_timestamp; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 struct socket* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int ,struct socket*) ;

boolean_t
FUNC_8(void)
{
 struct socket *VAR_12;
 int VAR_13 = 0;
 boolean_t VAR_14 = VAR_0;

 FUNC_4(VAR_8);
 VAR_10++;
 VAR_9 = FUNC_6();

 while (!FUNC_0(&VAR_6)) {
  FUNC_3(VAR_4 > 0);
  VAR_12 = FUNC_1(&VAR_6);
  if ((VAR_9 - VAR_12->cache_timestamp) <
   VAR_2)
   break;

  FUNC_2(&VAR_6, VAR_5);
  --VAR_4;

  FUNC_7(VAR_11, VAR_12);

  if (++VAR_13 >= VAR_1) {
   VAR_7++;
   break;
  }
 }


 if (!FUNC_0(&VAR_6))
  VAR_14 = VAR_3;

 FUNC_5(VAR_8);
 return (VAR_14);
}
