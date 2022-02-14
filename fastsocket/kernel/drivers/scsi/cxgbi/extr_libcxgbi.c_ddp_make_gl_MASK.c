
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {unsigned int length; unsigned int offset; } ;
struct pci_dev {int dummy; } ;
struct page {int dummy; } ;
struct cxgbi_gather_list {unsigned int nelem; unsigned int length; unsigned int offset; struct page** pages; int * phys_addr; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (struct pci_dev*,struct cxgbi_gather_list*) ;
 int FUNC_1 (struct cxgbi_gather_list*) ;
 struct cxgbi_gather_list* FUNC_2 (int,int ) ;
 int FUNC_3 (int,char*,int,unsigned int,...) ;
 struct scatterlist* FUNC_4 (struct scatterlist*) ;
 struct page* FUNC_5 (struct scatterlist*) ;

__attribute__((used)) static struct cxgbi_gather_list *FUNC_6(unsigned int VAR_5,
          struct scatterlist *VAR_6,
          unsigned int VAR_7,
          struct pci_dev *VAR_8,
          gfp_t VAR_9)
{
 struct cxgbi_gather_list *VAR_10;
 struct scatterlist *VAR_11 = VAR_6;
 struct page *VAR_12 = FUNC_5(VAR_11);
 unsigned int VAR_13 = VAR_11->length;
 unsigned int VAR_14 = VAR_11->offset;
 unsigned int VAR_15 = (VAR_5 + VAR_14 + VAR_4 - 1) >>
    VAR_3;
 int VAR_16 = 1, VAR_17 = 0;

 if (VAR_5 < VAR_1) {
  FUNC_3(1 << VAR_0,
   "xfer %u < threshold %u, no ddp.\n",
   VAR_5, VAR_1);
  return ((void*)0);
 }

 VAR_10 = FUNC_2(sizeof(struct cxgbi_gather_list) +
       VAR_15 * (sizeof(dma_addr_t) +
       sizeof(struct page *)), VAR_9);
 if (!VAR_10) {
  FUNC_3(1 << VAR_0,
   "xfer %u, %u pages, OOM.\n", VAR_5, VAR_15);
  return ((void*)0);
 }

  FUNC_3(1 << VAR_0,
  "xfer %u, sgl %u, gl max %u.\n", VAR_5, VAR_7, VAR_15);

 VAR_10->pages = (struct page **)&VAR_10->phys_addr[VAR_15];
 VAR_10->nelem = VAR_15;
 VAR_10->length = VAR_5;
 VAR_10->offset = VAR_14;
 VAR_10->pages[0] = VAR_12;

 for (VAR_16 = 1, VAR_11 = FUNC_4(VAR_6), VAR_17 = 0; VAR_16 < VAR_7;
  VAR_16++, VAR_11 = FUNC_4(VAR_11)) {
  struct page *VAR_18 = FUNC_5(VAR_11);

  if (VAR_12 == VAR_18 && VAR_11->offset == VAR_14 + VAR_13)
   VAR_13 += VAR_11->length;
  else {




   if ((VAR_17 && VAR_14) || ((VAR_16 != VAR_7 - 1) &&
       ((VAR_13 + VAR_14) & ~VAR_2))) {
    FUNC_3(1 << VAR_0,
     "page %d/%u, %u + %u.\n",
     VAR_16, VAR_7, VAR_14, VAR_13);
    goto error_out;
   }

   VAR_17++;
   if (VAR_17 == VAR_10->nelem || VAR_11->offset) {
    FUNC_3(1 << VAR_0,
     "page %d/%u, offset %u.\n",
     VAR_17, VAR_10->nelem, VAR_11->offset);
    goto error_out;
   }
   VAR_10->pages[VAR_17] = VAR_18;
   VAR_13 = VAR_11->length;
   VAR_14 = VAR_11->offset;
   VAR_12 = VAR_18;
  }
 }
 VAR_10->nelem = ++VAR_17;

 if (FUNC_0(VAR_8, VAR_10) < 0)
  goto error_out;

 return VAR_10;

error_out:
 FUNC_1(VAR_10);
 return ((void*)0);
}
