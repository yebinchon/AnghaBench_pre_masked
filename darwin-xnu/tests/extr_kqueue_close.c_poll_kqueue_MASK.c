
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int data; int flags; int filter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int,struct kevent*,int,struct kevent*,int,int *) ;
 int VAR_5 ;

__attribute__((used)) static void *
FUNC_3(void *VAR_6)
{
 int VAR_7 = (int)VAR_6;

 struct kevent VAR_8 = {
  .filter = VAR_1,
  .flags = VAR_2,
  .data = VAR_5,
 };

 int VAR_9 = FUNC_2(VAR_7, &VAR_8, 1, ((void*)0), 0, ((void*)0));

 if (VAR_9 == -1 && VAR_4 == VAR_0) {

  FUNC_1("kqueue already closed?");
  return ((void*)0);
 } else {
  VAR_3; FUNC_0(VAR_9, "kevent");
 }

 while ((VAR_9 = FUNC_2(VAR_7, ((void*)0), 0, &VAR_8, 1, ((void*)0))) == 1) {
  FUNC_1("poll\n");
 }

 if (VAR_9 != -1 || VAR_4 != VAR_0) {
  FUNC_0(VAR_9, "fd should be closed");
 }

 return ((void*)0);
}
