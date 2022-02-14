
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct edgeport_port {TYPE_2__* port; } ;
typedef int __u8 ;
struct TYPE_4__ {int number; TYPE_1__* serial; } ;
struct TYPE_3__ {int minor; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int ,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct edgeport_port *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = VAR_1->port->number - VAR_1->port->serial->minor;
 VAR_3 = !!VAR_3;
 return FUNC_0(VAR_1->port->serial->dev,
   VAR_2, (__u8)(VAR_0 + VAR_4),
   VAR_3, ((void*)0), 0);
}
