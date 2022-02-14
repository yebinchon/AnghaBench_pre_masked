
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct net_device {unsigned int num_tx_queues; unsigned int real_num_tx_queues; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct net_device* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct nlattr*) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_3,
     struct nlattr *VAR_4[],
     unsigned int *VAR_5,
     unsigned int *VAR_6)
{
 struct net_device *VAR_7;

 if (!VAR_4[VAR_2])
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_3, FUNC_1(VAR_4[VAR_2]));
 if (!VAR_7)
  return -VAR_1;

 *VAR_5 = VAR_7->num_tx_queues;
 *VAR_6 = VAR_7->real_num_tx_queues;
 return 0;
}
