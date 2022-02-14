
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


union iwreq_data {int freq; } ;
struct net_device {unsigned int base_addr; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_3__ {int spinlock; } ;
typedef TYPE_1__ net_local ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4,
       struct iw_request_info *VAR_5,
       union iwreq_data *VAR_6,
       char *VAR_7)
{
 unsigned int VAR_8 = VAR_4->base_addr;
 net_local *VAR_9 = FUNC_2(VAR_4);
 unsigned long VAR_10;
 int VAR_11;


 FUNC_3(&VAR_9->spinlock, VAR_10);


 if (!(FUNC_0(VAR_8, FUNC_1(0, VAR_3)) &
       (VAR_2 | VAR_1)))
  VAR_11 = FUNC_5(VAR_8, &(VAR_6->freq));
 else
  VAR_11 = -VAR_0;


 FUNC_4(&VAR_9->spinlock, VAR_10);

 return VAR_11;
}
