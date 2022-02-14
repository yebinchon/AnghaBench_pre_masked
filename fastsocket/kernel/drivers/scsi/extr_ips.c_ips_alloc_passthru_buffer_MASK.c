
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ioctl_data; int ioctl_len; int ioctl_busaddr; int pcidev; } ;
typedef TYPE_1__ ips_ha_t ;
typedef int dma_addr_t ;


 void* FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int ,int,char*,int ) ;

__attribute__((used)) static int
FUNC_2(ips_ha_t * VAR_0, int VAR_1)
{
 void *VAR_2;
 dma_addr_t VAR_3;

 if (VAR_0->ioctl_data && VAR_1 <= VAR_0->ioctl_len)
  return 0;

 VAR_2 = FUNC_0(VAR_0->pcidev, VAR_1, &VAR_3);
 if (VAR_2) {

  FUNC_1(VAR_0->pcidev, VAR_0->ioctl_len, VAR_0->ioctl_data,
        VAR_0->ioctl_busaddr);

  VAR_0->ioctl_data = (char *) VAR_2;
  VAR_0->ioctl_len = VAR_1;
  VAR_0->ioctl_busaddr = VAR_3;
 } else {
  return -1;
 }
 return 0;
}
