
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macvlan_dev {scalar_t__ minor; } ;


 int FUNC_0 (int *,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct macvlan_dev *VAR_2)
{
       FUNC_1(&VAR_1);
       if (VAR_2->minor) {
               FUNC_0(&VAR_0, VAR_2->minor);
               VAR_2->minor = 0;
       }
       FUNC_2(&VAR_1);
}
