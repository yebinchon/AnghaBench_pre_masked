
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hdlc_device {int dummy; } ;
struct TYPE_2__ {void* priv; } ;


 struct net_device* FUNC_0 (int,char*,int ) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int VAR_0 ;

struct net_device *FUNC_2(void *VAR_1)
{
 struct net_device *VAR_2;
 VAR_2 = FUNC_0(sizeof(struct hdlc_device), "hdlc%d", VAR_0);
 if (VAR_2)
  FUNC_1(VAR_2)->priv = VAR_1;
 return VAR_2;
}
