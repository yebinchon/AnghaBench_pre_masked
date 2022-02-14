
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct virtio_pci_device {int msix_vectors; int msix_enabled; unsigned int msix_used_vectors; int * msix_names; TYPE_2__* msix_entries; scalar_t__ ioaddr; int pci_dev; TYPE_1__ vdev; } ;
struct virtio_device {int dummy; } ;
struct TYPE_4__ {unsigned int entry; int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 char* FUNC_0 (int *) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,TYPE_2__*,int) ;
 int FUNC_5 (int ,int ,int ,int ,struct virtio_pci_device*) ;
 int FUNC_6 (int ,int,char*,char const*) ;
 struct virtio_pci_device* FUNC_7 (struct virtio_device*) ;
 int VAR_6 ;
 int FUNC_8 (struct virtio_device*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_9(struct virtio_device *VAR_8, int VAR_9,
       bool VAR_10)
{
 struct virtio_pci_device *VAR_11 = FUNC_7(VAR_8);
 const char *VAR_12 = FUNC_0(&VAR_11->vdev.dev);
 unsigned VAR_13, VAR_14;
 int VAR_15 = -VAR_1;

 VAR_11->msix_entries = FUNC_3(VAR_9 * sizeof *VAR_11->msix_entries,
           VAR_3);
 if (!VAR_11->msix_entries)
  goto error;
 VAR_11->msix_names = FUNC_3(VAR_9 * sizeof *VAR_11->msix_names,
         VAR_3);
 if (!VAR_11->msix_names)
  goto error;

 for (VAR_13 = 0; VAR_13 < VAR_9; ++VAR_13)
  VAR_11->msix_entries[VAR_13].entry = VAR_13;


 VAR_15 = FUNC_4(VAR_11->pci_dev, VAR_11->msix_entries, VAR_9);
 if (VAR_15 > 0)
  VAR_15 = -VAR_2;
 if (VAR_15)
  goto error;
 VAR_11->msix_vectors = VAR_9;
 VAR_11->msix_enabled = 1;


 VAR_14 = VAR_11->msix_used_vectors;
 FUNC_6(VAR_11->msix_names[VAR_14], sizeof *VAR_11->msix_names,
   "%s-config", VAR_12);
 VAR_15 = FUNC_5(VAR_11->msix_entries[VAR_14].vector,
     VAR_6, 0, VAR_11->msix_names[VAR_14],
     VAR_11);
 if (VAR_15)
  goto error;
 ++VAR_11->msix_used_vectors;

 FUNC_2(VAR_14, VAR_11->ioaddr + VAR_4);

 VAR_14 = FUNC_1(VAR_11->ioaddr + VAR_4);
 if (VAR_14 == VAR_5) {
  VAR_15 = -VAR_0;
  goto error;
 }

 if (!VAR_10) {

  VAR_14 = VAR_11->msix_used_vectors;
  FUNC_6(VAR_11->msix_names[VAR_14], sizeof *VAR_11->msix_names,
    "%s-virtqueues", VAR_12);
  VAR_15 = FUNC_5(VAR_11->msix_entries[VAR_14].vector,
      VAR_7, 0, VAR_11->msix_names[VAR_14],
      VAR_11);
  if (VAR_15)
   goto error;
  ++VAR_11->msix_used_vectors;
 }
 return 0;
error:
 FUNC_8(VAR_8);
 return VAR_15;
}
