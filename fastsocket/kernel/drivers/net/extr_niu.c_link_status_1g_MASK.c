
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_link_config {int active_advertising; int supported; } ;
struct niu {int lock; struct niu_link_config link_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct niu*,int*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct niu *VAR_2, int *VAR_3)
{
 struct niu_link_config *VAR_4 = &VAR_2->link_config;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_1(&VAR_2->lock, VAR_5);

 VAR_6 = FUNC_0(VAR_2, VAR_3);
 VAR_4->supported |= VAR_1;
 VAR_4->active_advertising |= VAR_0;

 FUNC_2(&VAR_2->lock, VAR_5);
 return VAR_6;
}
