
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vhost_virtqueue {scalar_t__ log_ctx; int log_base; } ;
struct vhost_log {int addr; int len; } ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 () ;

int FUNC_5(struct vhost_virtqueue *VAR_0, struct vhost_log *VAR_1,
      unsigned int VAR_2, u64 VAR_3)
{
 int VAR_4, VAR_5;


 FUNC_4();
 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
  u64 VAR_6 = FUNC_3(VAR_1[VAR_4].len, VAR_3);
  VAR_5 = FUNC_2(VAR_0->log_base, VAR_1[VAR_4].addr, VAR_6);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_3 -= VAR_6;
  if (!VAR_3) {
   if (VAR_0->log_ctx)
    FUNC_1(VAR_0->log_ctx, 1);
   return 0;
  }
 }

 FUNC_0();
 return 0;
}
