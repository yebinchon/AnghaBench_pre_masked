
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int dummy; } ;
typedef int passwd_myos ;


 struct passwd VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ) ;

struct passwd* FUNC_2( uid_t VAR_1 ) {

 passwd_myos* VAR_2=FUNC_1(VAR_1);
 if (VAR_2==((void*)0))
  return ((void*)0);

 FUNC_0();
 return &VAR_0;
}
