
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {int e; int m; } ;
struct hostap_interface {TYPE_2__* local; } ;
struct TYPE_4__ {int channel_mask; int channel; TYPE_1__* func; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_3__ {scalar_t__ (* reset_port ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 scalar_t__ FUNC_0 (struct net_device*,int ,int) ;
 struct hostap_interface* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4,
    struct iw_request_info *VAR_5,
    struct iw_freq *VAR_6, char *VAR_7)
{
 struct hostap_interface *VAR_8;
 local_info_t *VAR_9;

 VAR_8 = FUNC_1(VAR_4);
 VAR_9 = VAR_8->local;


 if (VAR_6->e == 1 &&
     VAR_6->m / 100000 >= VAR_3[0] &&
     VAR_6->m / 100000 <= VAR_3[VAR_1 - 1]) {
  int VAR_10;
  int VAR_11 = VAR_6->m / 100000;
  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
   if (VAR_11 == VAR_3[VAR_10]) {
    VAR_6->e = 0;
    VAR_6->m = VAR_10 + 1;
    break;
   }
  }
 }

 if (VAR_6->e != 0 || VAR_6->m < 1 || VAR_6->m > VAR_1 ||
     !(VAR_9->channel_mask & (1 << (VAR_6->m - 1))))
  return -VAR_0;

 VAR_9->channel = VAR_6->m;
 if (FUNC_0(VAR_4, VAR_2, VAR_9->channel) ||
     VAR_9->func->reset_port(VAR_4))
  return -VAR_0;

 return 0;
}
