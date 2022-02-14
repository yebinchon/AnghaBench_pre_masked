
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int member_1; int member_0; } ;
struct kevent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kevent*,int,int,int,int ,int ,int *) ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (int,char*,int,int) ;
 int FUNC_3 (char*,char*) ;
 int VAR_3 ;
 int FUNC_4 (int,struct kevent*,int,int *,int ,struct timespec*) ;

void
FUNC_5(int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 struct timespec VAR_8 = {0, 0};
 struct kevent VAR_9[1];

 VAR_3;
 FUNC_1(VAR_4, 0, "ensure kq is valid");
 FUNC_3("kevent doing ONESHOT %s", VAR_6 == VAR_0 ? "read" : "write");

 FUNC_0(VAR_9, VAR_5, VAR_6, VAR_1 | VAR_2, 0, 0, ((void*)0));
 VAR_7 = FUNC_4(VAR_4, VAR_9, 1, ((void*)0), 0, &VAR_8);
 VAR_3;
 FUNC_2(VAR_7, "ONESHOT kevent for fd %d, filter %d", VAR_5, VAR_6);
}
