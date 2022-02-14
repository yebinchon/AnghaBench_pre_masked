
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {scalar_t__ sin_family; TYPE_1__ sin_addr; } ;
struct in_ifaddr {int ia_ifa; TYPE_2__ ia_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct in_ifaddr*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,struct in_ifaddr*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (char*,struct in_ifaddr*) ;

__attribute__((used)) static void
FUNC_7(struct in_ifaddr *VAR_4)
{
 FUNC_4(VAR_3, VAR_1);
 FUNC_2(&VAR_4->ia_ifa);

 if (VAR_4->ia_addr.sin_family != VAR_0) {
  FUNC_6("attempt to insert wrong ia %p into hash table\n", VAR_4);

 } else if (FUNC_0(VAR_4)) {
  FUNC_6("attempt to double-insert ia %p into hash table\n", VAR_4);

 }
 FUNC_5(FUNC_3(VAR_4->ia_addr.sin_addr.s_addr),
     VAR_4, VAR_2);
 FUNC_1(&VAR_4->ia_ifa);
}
