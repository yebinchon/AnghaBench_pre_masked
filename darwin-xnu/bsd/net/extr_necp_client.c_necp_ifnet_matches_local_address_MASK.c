
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr {int dummy; } ;
struct ifnet {int if_index; } ;
struct ifaddr {int dummy; } ;
struct TYPE_4__ {scalar_t__ sin_port; } ;
struct TYPE_3__ {scalar_t__ sin6_scope_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct sockaddr_storage*) ;
 TYPE_1__* FUNC_1 (struct sockaddr_storage*) ;
 struct ifaddr* FUNC_2 (struct sockaddr*,int ) ;
 int FUNC_3 (struct ifaddr*) ;
 int FUNC_4 (struct sockaddr*,struct sockaddr_storage*,int *) ;

__attribute__((used)) static bool
FUNC_5(struct ifnet *VAR_3, struct sockaddr *VAR_4)
{
 struct ifaddr *VAR_5 = ((void*)0);
 bool VAR_6 = VAR_1;



 struct sockaddr_storage VAR_7;
 u_int VAR_8 = VAR_2;
 (void)FUNC_4(VAR_4, &VAR_7, &VAR_8);
 FUNC_0(&VAR_7)->sin_port = 0;
 if (VAR_7.ss_family == VAR_0) {
  FUNC_1(&VAR_7)->sin6_scope_id = 0;
 }

 VAR_5 = FUNC_2((struct sockaddr *)&VAR_7, VAR_3->if_index);
 VAR_6 = (VAR_5 != ((void*)0));

 if (VAR_5) {
  FUNC_3(VAR_5);
 }

 return (VAR_6);
}
