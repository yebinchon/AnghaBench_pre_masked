
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cas {int rx_spare_lock; int rx_spares_needed; int rx_spare_list; int rx_inuse_lock; int rx_inuse_list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cas *VAR_1)
{
   FUNC_1(&VAR_1->rx_inuse_lock);
 FUNC_0(&VAR_1->rx_inuse_list);
 FUNC_2(&VAR_1->rx_inuse_lock);

 FUNC_1(&VAR_1->rx_spare_lock);
 FUNC_0(&VAR_1->rx_spare_list);
 VAR_1->rx_spares_needed = VAR_0;
 FUNC_2(&VAR_1->rx_spare_lock);
}
