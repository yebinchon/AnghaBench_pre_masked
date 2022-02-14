
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cas {int rx_inuse_lock; int rx_inuse_list; TYPE_1__*** rx_pages; } ;
struct TYPE_4__ {int list; int buffer; } ;
typedef TYPE_1__ cas_page_t ;


 TYPE_1__* FUNC_0 (struct cas*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline cas_page_t *FUNC_5(struct cas *VAR_0, const int VAR_1)
{
 cas_page_t *VAR_2 = VAR_0->rx_pages[1][VAR_1];
 cas_page_t *VAR_3;

 if (FUNC_2(VAR_2->buffer) == 1)
  return VAR_2;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3) {
  FUNC_3(&VAR_0->rx_inuse_lock);
  FUNC_1(&VAR_2->list, &VAR_0->rx_inuse_list);
  FUNC_4(&VAR_0->rx_inuse_lock);
 }
 return VAR_3;
}
