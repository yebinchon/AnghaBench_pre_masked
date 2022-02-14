
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pktcdvd_device {char* name; TYPE_1__* bdev; int pkt_dev; } ;
struct class {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int bd_dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 struct pktcdvd_device** VAR_3 ;
 scalar_t__ FUNC_4 (char*,char*,char*,int,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct class *VAR_4, char *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;
 FUNC_2(&VAR_2, VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  struct pktcdvd_device *VAR_8 = VAR_3[VAR_7];
  if (!VAR_8)
   continue;
  VAR_6 += FUNC_4(VAR_5+VAR_6, "%s %u:%u %u:%u\n",
   VAR_8->name,
   FUNC_0(VAR_8->pkt_dev), FUNC_1(VAR_8->pkt_dev),
   FUNC_0(VAR_8->bdev->bd_dev),
   FUNC_1(VAR_8->bdev->bd_dev));
 }
 FUNC_3(&VAR_2);
 return VAR_6;
}
