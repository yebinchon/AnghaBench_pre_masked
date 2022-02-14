
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet_stats_param {int dummy; } ;
typedef int ifnet_t ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ifnet_stats_param*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,struct ifnet_stats_param*) ;

__attribute__((used)) static errno_t
FUNC_5(ifnet_t VAR_4)
{

 FUNC_3(VAR_4, 1500);
 FUNC_2(VAR_4, VAR_3 | VAR_1 | VAR_2, 0xffff);




 FUNC_1(VAR_4, VAR_0, VAR_0);



 struct ifnet_stats_param VAR_5;
 FUNC_0(&VAR_5, sizeof(struct ifnet_stats_param));
 FUNC_4(VAR_4, &VAR_5);


 return (0);
}
