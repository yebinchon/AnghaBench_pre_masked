
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tftphdr {int dummy; } ;
struct TYPE_3__ {struct tftphdr hdr; } ;
struct TYPE_4__ {TYPE_1__ buf; int counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static struct tftphdr *FUNC_0(int VAR_7)
{
  VAR_4 = 0;
  VAR_6 = -1;
  VAR_2[0].counter = VAR_0;
  VAR_3 = 0;
  VAR_2[1].counter = VAR_1;
  VAR_5 = VAR_7;
  return &VAR_2[0].buf.hdr;
}
