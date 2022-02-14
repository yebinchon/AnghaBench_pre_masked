
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_user_sdma_queue {int dummy; } ;
struct ipath_user_sdma_pkt {int addr; } ;
struct ipath_devdata {int dummy; } ;
struct iovec {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ipath_devdata const*,struct ipath_user_sdma_pkt*,struct iovec const*,unsigned long) ;
 int FUNC_2 (struct ipath_devdata const*,struct ipath_user_sdma_queue*,struct ipath_user_sdma_pkt*,struct iovec const*,unsigned long) ;

__attribute__((used)) static int FUNC_3(const struct ipath_devdata *VAR_0,
     struct ipath_user_sdma_queue *VAR_1,
     struct ipath_user_sdma_pkt *VAR_2,
     const struct iovec *VAR_3,
     unsigned long VAR_4, int VAR_5)
{
 int VAR_6 = 0;

 if (VAR_5 >= FUNC_0(VAR_2->addr))
  VAR_6 = FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4);
 else
  VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 return VAR_6;
}
