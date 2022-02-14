
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw_rx_queue {scalar_t__ free_count; scalar_t__ write; scalar_t__ read; int rx_used; TYPE_1__* pool; int rx_free; int lock; } ;
struct ipw_priv {int dummy; } ;
struct TYPE_2__ {int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ipw_rx_queue* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct ipw_rx_queue *FUNC_6(struct ipw_priv *VAR_3)
{
 struct ipw_rx_queue *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (FUNC_5(!VAR_4)) {
  FUNC_1("memory allocation failed\n");
  return ((void*)0);
 }
 FUNC_4(&VAR_4->lock);
 FUNC_0(&VAR_4->rx_free);
 FUNC_0(&VAR_4->rx_used);


 for (VAR_5 = 0; VAR_5 < VAR_1 + VAR_2; VAR_5++)
  FUNC_3(&VAR_4->pool[VAR_5].list, &VAR_4->rx_used);



 VAR_4->read = VAR_4->write = 0;
 VAR_4->free_count = 0;

 return VAR_4;
}
