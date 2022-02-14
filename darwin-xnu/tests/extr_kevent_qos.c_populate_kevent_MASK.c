
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent_qos_s {unsigned long long ident; int flags; int fflags; int data; int filter; } ;


 int VAR_0 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kevent_qos_s*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct kevent_qos_s *VAR_11, unsigned long long VAR_12)
{

 FUNC_2(VAR_11, 0, sizeof(struct kevent_qos_s));
 VAR_11->ident = VAR_12;
 VAR_11->filter = VAR_0;
 VAR_11->flags = VAR_1 | VAR_3 | VAR_4 | VAR_2 | VAR_5;
 VAR_11->fflags = (VAR_9 | VAR_7 | VAR_8 |
  FUNC_0(VAR_10) |
  FUNC_1(VAR_6));
 VAR_11->data = 1;

}
