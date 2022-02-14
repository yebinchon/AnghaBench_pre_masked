
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_omap_host {int buffer_bytes_left; scalar_t__ sg_idx; scalar_t__ sg_len; int total_bytes_left; int buffer; scalar_t__ virt_base; TYPE_1__* data; } ;
struct TYPE_2__ {int bytes_xfered; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (struct mmc_omap_host*) ;

__attribute__((used)) static void
FUNC_4(struct mmc_omap_host *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_1->buffer_bytes_left == 0) {
  VAR_1->sg_idx++;
  FUNC_0(VAR_1->sg_idx == VAR_1->sg_len);
  FUNC_3(VAR_1);
 }
 VAR_3 = 64;
 if (VAR_3 > VAR_1->buffer_bytes_left)
  VAR_3 = VAR_1->buffer_bytes_left;
 VAR_1->buffer_bytes_left -= VAR_3;
 VAR_1->total_bytes_left -= VAR_3;
 VAR_1->data->bytes_xfered += VAR_3;

 if (VAR_2) {
  FUNC_2(VAR_1->virt_base + VAR_0, VAR_1->buffer, VAR_3);
 } else {
  FUNC_1(VAR_1->virt_base + VAR_0, VAR_1->buffer, VAR_3);
 }
}
