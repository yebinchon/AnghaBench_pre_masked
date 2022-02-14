
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hso_net {int dummy; } ;
struct TYPE_2__ {struct hso_net* dev_net; } ;
struct hso_device {TYPE_1__ port_data; } ;



__attribute__((used)) static inline struct hso_net *FUNC_0(struct hso_device *VAR_0)
{
 return VAR_0->port_data.dev_net;
}
