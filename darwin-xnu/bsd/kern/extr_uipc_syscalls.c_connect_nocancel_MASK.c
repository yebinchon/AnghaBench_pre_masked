
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ so_type; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct connect_nocancel_args {int s; int namelen; int name; } ;
typedef int ss ;
typedef int proc_t ;
typedef int int32_t ;
typedef int boolean_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sockaddr*,int ) ;
 int VAR_3 ;
 struct sockaddr* FUNC_2 (struct sockaddr_storage*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct socket*,struct sockaddr*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,struct socket**) ;
 int FUNC_6 (struct socket*,struct sockaddr**,int ,int,int) ;
 int FUNC_7 (struct socket*,struct sockaddr_storage*,int ,int,int) ;

int
FUNC_8(proc_t VAR_5, struct connect_nocancel_args *VAR_6, int32_t *VAR_7)
{
#pragma unused(p, retval)
 struct socket *VAR_8;
 struct sockaddr_storage VAR_9;
 struct sockaddr *VAR_10 = ((void*)0);
 int VAR_11;
 int VAR_12 = VAR_6->s;
 boolean_t VAR_13;

 FUNC_0(VAR_12, VAR_6->s);
 VAR_11 = FUNC_5(VAR_12, &VAR_8);
 if (VAR_11 != 0)
  return (VAR_11);
 if (VAR_8 == ((void*)0)) {
  VAR_11 = VAR_0;
  goto out;
 }





 VAR_13 = (VAR_8->so_type == VAR_4);


 if (VAR_6->namelen > sizeof (VAR_9)) {
  VAR_11 = FUNC_6(VAR_8, &VAR_10, VAR_6->name, VAR_6->namelen, !VAR_13);
 } else {
  VAR_11 = FUNC_7(VAR_8, &VAR_9, VAR_6->name, VAR_6->namelen, !VAR_13);
  if (VAR_11 == 0)
   VAR_10 = (struct sockaddr *)&VAR_9;
 }
 if (VAR_11 != 0)
  goto out;

 VAR_11 = FUNC_3(VAR_8, VAR_10);

 if (VAR_10 != ((void*)0) && VAR_10 != FUNC_2(&VAR_9))
  FUNC_1(VAR_10, VAR_3);
 if (VAR_11 == VAR_2)
  VAR_11 = VAR_1;
out:
 FUNC_4(VAR_12);
 return (VAR_11);
}
