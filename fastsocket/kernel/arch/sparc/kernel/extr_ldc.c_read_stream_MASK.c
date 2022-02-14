
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mtu; } ;
struct ldc_channel {int mssbuf_len; scalar_t__ mssbuf_off; scalar_t__ mssbuf; TYPE_1__ cfg; } ;


 int FUNC_0 (void*,scalar_t__,unsigned int) ;
 int FUNC_1 (struct ldc_channel*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct ldc_channel *VAR_0, void *VAR_1, unsigned int VAR_2)
{
 if (!VAR_0->mssbuf_len) {
  int VAR_3 = FUNC_1(VAR_0, VAR_0->mssbuf, VAR_0->cfg.mtu);
  if (VAR_3 < 0)
   return VAR_3;

  VAR_0->mssbuf_len = VAR_3;
  VAR_0->mssbuf_off = 0;
 }

 if (VAR_2 > VAR_0->mssbuf_len)
  VAR_2 = VAR_0->mssbuf_len;
 FUNC_0(VAR_1, VAR_0->mssbuf + VAR_0->mssbuf_off, VAR_2);

 VAR_0->mssbuf_off += VAR_2;
 VAR_0->mssbuf_len -= VAR_2;

 return VAR_2;
}
