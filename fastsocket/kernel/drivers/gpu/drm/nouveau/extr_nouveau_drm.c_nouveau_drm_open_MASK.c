
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_6__ {int mutex; } ;
struct nouveau_drm {TYPE_2__ client; int clients; int device; } ;
struct TYPE_5__ {int vm; } ;
struct nouveau_cli {int head; TYPE_1__ base; } ;
struct drm_file {int pid; struct nouveau_cli* driver_priv; } ;
struct drm_device {struct pci_dev* pdev; } ;
typedef int name ;
struct TYPE_7__ {scalar_t__ card_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pci_dev*,char*,int,void**) ;
 int FUNC_5 (struct nouveau_cli*) ;
 struct nouveau_drm* FUNC_6 (struct drm_device*) ;
 int FUNC_7 (TYPE_3__*,int ,unsigned long long,int,int *) ;
 TYPE_3__* FUNC_8 (int ) ;
 int FUNC_9 (char*,int,char*,char*,int) ;

__attribute__((used)) static int
FUNC_10(struct drm_device *VAR_3, struct drm_file *VAR_4)
{
 struct pci_dev *VAR_5 = VAR_3->pdev;
 struct nouveau_drm *VAR_6 = FUNC_6(VAR_3);
 struct nouveau_cli *VAR_7;
 char VAR_8[32], VAR_9[VAR_1];
 int VAR_10;

 FUNC_0(VAR_9, VAR_2);
 FUNC_9(VAR_8, sizeof(VAR_8), "%s[%d]", VAR_9, VAR_4->pid);

 VAR_10 = FUNC_4(VAR_5, VAR_8, sizeof(*VAR_7), (void **)&VAR_7);
 if (VAR_10)
  return VAR_10;

 if (FUNC_8(VAR_6->device)->card_type >= VAR_0) {
  VAR_10 = FUNC_7(FUNC_8(VAR_6->device), 0, (1ULL << 40),
         0x1000, &VAR_7->base.vm);
  if (VAR_10) {
   FUNC_5(VAR_7);
   return VAR_10;
  }
 }

 VAR_4->driver_priv = VAR_7;

 FUNC_2(&VAR_6->client.mutex);
 FUNC_1(&VAR_7->head, &VAR_6->clients);
 FUNC_3(&VAR_6->client.mutex);
 return 0;
}
