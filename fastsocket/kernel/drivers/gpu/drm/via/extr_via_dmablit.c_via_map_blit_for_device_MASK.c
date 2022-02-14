
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct pci_dev {int dev; } ;
struct TYPE_7__ {unsigned int descriptors_per_page; int chain_start; int num_desc; int state; TYPE_3__** desc_pages; int direction; int * pages; } ;
typedef TYPE_1__ drm_via_sg_info_t ;
struct TYPE_8__ {unsigned char* mem_addr; unsigned int fb_addr; int num_lines; unsigned long line_length; scalar_t__ fb_stride; int mem_stride; } ;
typedef TYPE_2__ drm_via_dmablit_t ;
struct TYPE_9__ {unsigned int dev_addr; unsigned int size; unsigned int next; int mem_addr; } ;
typedef TYPE_3__ drm_via_descriptor_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (unsigned char*) ;
 int FUNC_3 (int *,int ,scalar_t__,unsigned int,int ) ;
 int FUNC_4 (int *,TYPE_3__*,int,int ) ;
 int VAR_3 ;
 unsigned int FUNC_5 (scalar_t__,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct pci_dev *VAR_4,
     const drm_via_dmablit_t *VAR_5,
     drm_via_sg_info_t *VAR_6,
     int VAR_7)
{
 unsigned VAR_8 = 0;
 unsigned VAR_9 = 0;
 unsigned char *VAR_10 = VAR_5->mem_addr;
 unsigned char *VAR_11;
 unsigned char *VAR_12 = (unsigned char *)FUNC_1(VAR_10);
 uint32_t VAR_13 = VAR_5->fb_addr;
 uint32_t VAR_14;
 unsigned long VAR_15;
 unsigned VAR_16;
 int VAR_17 = 0;
 int VAR_18;
 dma_addr_t VAR_19 = 0 | VAR_2;
 drm_via_descriptor_t *VAR_20 = ((void*)0);

 if (VAR_7 == 1)
  VAR_20 = VAR_6->desc_pages[VAR_8];

 for (VAR_18 = 0; VAR_18 < VAR_5->num_lines; ++VAR_18) {

  VAR_15 = VAR_5->line_length;
  VAR_14 = VAR_13;
  VAR_11 = VAR_10;

  while (VAR_15 > 0) {

   VAR_16 = FUNC_5(VAR_1-FUNC_2(VAR_11), VAR_15);
   VAR_15 -= VAR_16;

   if (VAR_7 == 1) {
    VAR_20->mem_addr =
     FUNC_3(&VAR_4->dev,
           VAR_6->pages[FUNC_0(VAR_11) -
        FUNC_0(VAR_12)],
           FUNC_2(VAR_11), VAR_16,
           VAR_6->direction);
    VAR_20->dev_addr = VAR_14;

    VAR_20->size = VAR_16;
    VAR_20->next = (uint32_t) VAR_19;
    VAR_19 = FUNC_4(&VAR_4->dev, VAR_20, sizeof(*VAR_20),
            VAR_0);
    VAR_20++;
    if (++VAR_9 >= VAR_6->descriptors_per_page) {
     VAR_9 = 0;
     VAR_20 = VAR_6->desc_pages[++VAR_8];
    }
   }

   VAR_17++;
   VAR_11 += VAR_16;
   VAR_14 += VAR_16;
  }

  VAR_10 += VAR_5->mem_stride;
  VAR_13 += VAR_5->fb_stride;
 }

 if (VAR_7 == 1) {
  VAR_6->chain_start = VAR_19;
  VAR_6->state = VAR_3;
 }
 VAR_6->num_desc = VAR_17;
}
