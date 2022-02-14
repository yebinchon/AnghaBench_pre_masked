
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gether {int out_ep; int in_ep; } ;
struct eth_dev {int req_lock; int rx_reqs; int tx_reqs; } ;


 int FUNC_0 (struct eth_dev*,char*) ;
 int FUNC_1 (int *,int ,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct eth_dev *VAR_0, struct gether *VAR_1, unsigned VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_0->req_lock);
 VAR_3 = FUNC_1(&VAR_0->tx_reqs, VAR_1->in_ep, VAR_2);
 if (VAR_3 < 0)
  goto fail;
 VAR_3 = FUNC_1(&VAR_0->rx_reqs, VAR_1->out_ep, VAR_2);
 if (VAR_3 < 0)
  goto fail;
 goto done;
fail:
 FUNC_0(VAR_0, "can't alloc requests\n");
done:
 FUNC_3(&VAR_0->req_lock);
 return VAR_3;
}
