
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct whc_qset {TYPE_2__* ep; } ;
struct whc {int dummy; } ;
struct TYPE_3__ {int bInterval; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;



__attribute__((used)) static int FUNC_0(struct whc *VAR_0, struct whc_qset *VAR_1)
{
 uint8_t VAR_2 = VAR_1->ep->desc.bInterval;

 if (VAR_2 < 6)
  VAR_2 = 6;
 if (VAR_2 > 10)
  VAR_2 = 10;
 return VAR_2 - 6;
}
