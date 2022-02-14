
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_event {int val; int in6_address; int in6_ifp; int in6_event_code; } ;


 int FUNC_0 (int *,int ,int ,int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(void *VAR_2)
{
 struct in6_event *VAR_3 = (struct in6_event *)VAR_2;

 FUNC_0(&VAR_1, VAR_0,
     VAR_3->in6_event_code, VAR_3->in6_ifp,
     &VAR_3->in6_address, VAR_3->val);
}
