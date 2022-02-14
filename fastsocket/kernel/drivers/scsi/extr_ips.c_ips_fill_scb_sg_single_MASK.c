
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* std_list; TYPE_1__* enh_list; } ;
struct TYPE_12__ {scalar_t__ data_len; int breakup; int sg_len; TYPE_3__ sg_list; scalar_t__ sg_break; } ;
typedef TYPE_4__ ips_scb_t ;
struct TYPE_13__ {scalar_t__ max_xfer; } ;
typedef TYPE_5__ ips_ha_t ;
typedef int dma_addr_t ;
struct TYPE_10__ {void* length; void* address; } ;
struct TYPE_9__ {void* length; void* address_hi; void* address_lo; } ;


 scalar_t__ FUNC_0 (TYPE_5__*) ;
 void* FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(ips_ha_t * VAR_0, dma_addr_t VAR_1,
         ips_scb_t * VAR_2, int VAR_3, unsigned int VAR_4)
{

 int VAR_5 = 0;

 if ((VAR_2->data_len + VAR_4) > VAR_0->max_xfer) {
  VAR_4 = VAR_0->max_xfer - VAR_2->data_len;
  VAR_2->breakup = VAR_3;
  ++VAR_2->sg_break;
  VAR_5 = -1;
 } else {
  VAR_2->breakup = 0;
  VAR_2->sg_break = 0;
 }
 if (FUNC_0(VAR_0)) {
  VAR_2->sg_list.enh_list[VAR_3].address_lo =
      FUNC_1(FUNC_3(VAR_1));
  VAR_2->sg_list.enh_list[VAR_3].address_hi =
      FUNC_1(FUNC_2(VAR_1));
  VAR_2->sg_list.enh_list[VAR_3].length = FUNC_1(VAR_4);
 } else {
  VAR_2->sg_list.std_list[VAR_3].address =
      FUNC_1(FUNC_3(VAR_1));
  VAR_2->sg_list.std_list[VAR_3].length = FUNC_1(VAR_4);
 }

 ++VAR_2->sg_len;
 VAR_2->data_len += VAR_4;
 return VAR_5;
}
