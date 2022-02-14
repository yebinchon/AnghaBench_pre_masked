
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vq_callback_t ;
typedef size_t u16 ;
struct virtqueue {int dummy; } ;
struct TYPE_3__ {int dev; } ;
struct virtio_pci_device {int per_vq_vectors; int msix_used_vectors; int * msix_names; TYPE_2__* msix_entries; TYPE_1__ vdev; int msix_enabled; } ;
struct virtio_device {int dummy; } ;
struct TYPE_4__ {int vector; } ;


 scalar_t__ FUNC_0 (struct virtqueue*) ;
 int FUNC_1 (struct virtqueue*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int ,struct virtqueue*) ;
 struct virtqueue* FUNC_4 (struct virtio_device*,int,int *,char const*,size_t) ;
 int FUNC_5 (int ,int,char*,char*,char const*) ;
 struct virtio_pci_device* FUNC_6 (struct virtio_device*) ;
 int FUNC_7 (struct virtqueue*) ;
 int FUNC_8 (struct virtio_device*) ;
 int FUNC_9 (struct virtio_device*) ;
 int FUNC_10 (struct virtio_device*,int,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_11(struct virtio_device *VAR_3, unsigned VAR_4,
         struct virtqueue *VAR_5[],
         vq_callback_t *VAR_6[],
         const char *VAR_7[],
         bool VAR_8,
         bool VAR_9)
{
 struct virtio_pci_device *VAR_10 = FUNC_6(VAR_3);
 u16 VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;

 if (!VAR_8) {

  VAR_13 = FUNC_9(VAR_3);
  if (VAR_13)
   goto error_request;
 } else {
  if (VAR_9) {

   VAR_14 = 1;
   for (VAR_12 = 0; VAR_12 < VAR_4; ++VAR_12)
    if (VAR_6[VAR_12])
     ++VAR_14;
  } else {

   VAR_14 = 2;
  }

  VAR_13 = FUNC_10(VAR_3, VAR_14, VAR_9);
  if (VAR_13)
   goto error_request;
 }

 VAR_10->per_vq_vectors = VAR_9;
 VAR_15 = VAR_10->msix_used_vectors;
 for (VAR_12 = 0; VAR_12 < VAR_4; ++VAR_12) {
  if (!VAR_6[VAR_12] || !VAR_10->msix_enabled)
   VAR_11 = VAR_0;
  else if (VAR_10->per_vq_vectors)
   VAR_11 = VAR_15++;
  else
   VAR_11 = VAR_1;
  VAR_5[VAR_12] = FUNC_4(VAR_3, VAR_12, VAR_6[VAR_12], VAR_7[VAR_12], VAR_11);
  if (FUNC_0(VAR_5[VAR_12])) {
   VAR_13 = FUNC_1(VAR_5[VAR_12]);
   goto error_find;
  }

  if (!VAR_10->per_vq_vectors || VAR_11 == VAR_0)
   continue;


  FUNC_5(VAR_10->msix_names[VAR_11],
    sizeof *VAR_10->msix_names,
    "%s-%s",
    FUNC_2(&VAR_10->vdev.dev), VAR_7[VAR_12]);
  VAR_13 = FUNC_3(VAR_10->msix_entries[VAR_11].vector,
      VAR_2, 0,
      VAR_10->msix_names[VAR_11],
      VAR_5[VAR_12]);
  if (VAR_13) {
   FUNC_7(VAR_5[VAR_12]);
   goto error_find;
  }
 }
 return 0;

error_find:
 FUNC_8(VAR_3);

error_request:
 return VAR_13;
}
