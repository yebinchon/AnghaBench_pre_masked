
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct bdx_priv {TYPE_1__* nic; } ;
struct TYPE_2__ {int port_num; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct bdx_priv *VAR_2, u32 VAR_3)
{
 return (VAR_3 > (u32) (VAR_0 / VAR_2->nic->port_num)) ?
  -VAR_1 : 0;
}
