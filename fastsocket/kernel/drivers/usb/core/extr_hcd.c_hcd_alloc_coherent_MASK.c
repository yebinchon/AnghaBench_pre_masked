
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vaddr ;
struct usb_bus {int dummy; } ;
typedef int gfp_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char* FUNC_0 (struct usb_bus*,size_t,int ,int *) ;
 int FUNC_1 (unsigned char*,void*,size_t) ;
 int FUNC_2 (unsigned long,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct usb_bus *VAR_2,
         gfp_t VAR_3, dma_addr_t *VAR_4,
         void **VAR_5, size_t VAR_6,
         enum dma_data_direction VAR_7)
{
 unsigned char *VAR_8;

 VAR_8 = FUNC_0(VAR_2, VAR_6 + sizeof(VAR_8),
     VAR_3, VAR_4);
 if (!VAR_8)
  return -VAR_1;
 FUNC_2((unsigned long)*VAR_5,
        (unsigned long *)(VAR_8 + VAR_6));

 if (VAR_7 == VAR_0)
  FUNC_1(VAR_8, *VAR_5, VAR_6);

 *VAR_5 = VAR_8;
 return 0;
}
