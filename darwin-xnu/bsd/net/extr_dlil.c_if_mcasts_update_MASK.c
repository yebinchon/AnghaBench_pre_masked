
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_updatemcasts; } ;
typedef scalar_t__ errno_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct ifnet*) ;
 scalar_t__ FUNC_1 (struct ifnet*,int ,int ,int *) ;
 int FUNC_2 (char*,char*,char*,int,scalar_t__) ;

errno_t
FUNC_3(struct ifnet *VAR_2)
{
 errno_t VAR_3;

 VAR_3 = FUNC_1(VAR_2, 0, VAR_1, ((void*)0));
 if (VAR_3 == VAR_0)
  VAR_3 = 0;
 FUNC_2("%s: %s %d suspended link-layer multicast membership(s) "
     "(err=%d)\n", FUNC_0(VAR_2),
     (VAR_3 == 0 ? "successfully restored" : "failed to restore"),
     VAR_2->if_updatemcasts, VAR_3);


 return (0);
}
