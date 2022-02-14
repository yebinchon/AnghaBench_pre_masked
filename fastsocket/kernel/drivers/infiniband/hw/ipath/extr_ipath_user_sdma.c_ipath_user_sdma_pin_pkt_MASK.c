
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_user_sdma_queue {int dummy; } ;
struct ipath_user_sdma_pkt {unsigned long naddr; } ;
struct ipath_devdata {TYPE_1__* pcidev; } ;
struct iovec {int iov_len; scalar_t__ iov_base; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,struct ipath_user_sdma_queue*,struct ipath_user_sdma_pkt*,unsigned long) ;
 int FUNC_1 (struct iovec const*) ;
 int FUNC_2 (struct ipath_devdata const*,struct ipath_user_sdma_pkt*,unsigned long const,int ,int const) ;

__attribute__((used)) static int FUNC_3(const struct ipath_devdata *VAR_0,
       struct ipath_user_sdma_queue *VAR_1,
       struct ipath_user_sdma_pkt *VAR_2,
       const struct iovec *VAR_3,
       unsigned long VAR_4)
{
 int VAR_5 = 0;
 unsigned long VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  const int VAR_7 = FUNC_1(VAR_3 + VAR_6);
  const unsigned long VAR_8 = (unsigned long) VAR_3[VAR_6].iov_base;

  VAR_5 = FUNC_2(VAR_0, VAR_2,
      VAR_8, VAR_3[VAR_6].iov_len,
      VAR_7);
  if (VAR_5 < 0)
   goto free_pkt;
 }

 goto done;

free_pkt:
 for (VAR_6 = 0; VAR_6 < VAR_2->naddr; VAR_6++)
  FUNC_0(&VAR_0->pcidev->dev, VAR_1, VAR_2, VAR_6);

done:
 return VAR_5;
}
