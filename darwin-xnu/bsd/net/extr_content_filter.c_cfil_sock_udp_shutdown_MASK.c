
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct socket {int so_flags; int so_state; int so_snd; int * so_cfil_db; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct socket*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct socket*,int,int ,int ) ;
 int FUNC_4 (struct socket*) ;

int
FUNC_5(struct socket *VAR_12, int *VAR_13)
{
 int VAR_14 = 0;

 if ((VAR_12->so_flags & VAR_9) == 0 || (VAR_12->so_cfil_db == ((void*)0)))
  goto done;

 FUNC_4(VAR_12);

 FUNC_0(VAR_5, "so %llx how %d",
    (uint64_t)FUNC_1(VAR_12), *VAR_13);




 if (*VAR_13 != VAR_8 && (VAR_12->so_state & VAR_10) != 0) {

  VAR_14 = VAR_4;
  goto done;
 }
 if (*VAR_13 != VAR_6 && (VAR_12->so_state & VAR_11) != 0) {

  VAR_14 = VAR_4;
  goto done;
 }




 if (*VAR_13 != VAR_8) {
  VAR_14 = FUNC_3(VAR_12, VAR_6, VAR_0, VAR_1);
  if (VAR_14 != 0)
   goto done;
 }



 if (*VAR_13 != VAR_6) {
  VAR_14 = FUNC_3(VAR_12, VAR_8, VAR_0, VAR_2);
  if (VAR_14 != 0)
   goto done;






  if (FUNC_2(&VAR_12->so_snd) != 0) {





   if (*VAR_13 == VAR_8) {
    VAR_14 = VAR_3;
   } else if (*VAR_13 == VAR_7) {
    *VAR_13 = VAR_6;
   }
  }
 }
done:
 return (VAR_14);
}
