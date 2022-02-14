
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct ipath_user_sdma_pkt {int naddr; } ;
struct ipath_devdata {TYPE_1__* pcidev; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {int mm; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int *,struct page*,int ,int const,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*,int ,unsigned long,int,int ,int,struct page**,int *) ;
 int FUNC_3 (struct ipath_user_sdma_pkt*,int ,unsigned long,int const,int,int,struct page*,int ,int ) ;
 int FUNC_4 (unsigned long,int) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static int FUNC_7(const struct ipath_devdata *VAR_4,
         struct ipath_user_sdma_pkt *VAR_5,
         unsigned long VAR_6, int VAR_7, int VAR_8)
{
 struct page *VAR_9[2];
 int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_3, VAR_3->mm, VAR_6,
        VAR_8, 0, 1, VAR_9, ((void*)0));

 if (VAR_11 != VAR_8) {
  int VAR_12;

  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
   FUNC_6(VAR_9[VAR_12]);

  VAR_11 = -VAR_1;
  goto done;
 }

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {

  const int VAR_13 =
   FUNC_4(VAR_6, VAR_7);
  dma_addr_t VAR_14 =
   FUNC_0(&VAR_4->pcidev->dev,
         VAR_9[VAR_10], 0, VAR_13, VAR_0);
  unsigned long VAR_15 = VAR_6 & ~VAR_2;

  if (FUNC_1(&VAR_4->pcidev->dev, VAR_14)) {
   VAR_11 = -VAR_1;
   goto done;
  }

  FUNC_3(VAR_5, VAR_5->naddr, VAR_15, VAR_13, 1, 1,
       VAR_9[VAR_10], FUNC_5(VAR_9[VAR_10]),
       VAR_14);

  VAR_5->naddr++;
  VAR_6 += VAR_13;
  VAR_7 -= VAR_13;
 }

done:
 return VAR_11;
}
