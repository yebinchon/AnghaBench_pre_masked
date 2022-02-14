
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct host_to_dev_fis {int type; int opts; unsigned int sect_count; unsigned int sect_cnt_ex; int device; scalar_t__ lba_mid; int lba_low; int command; } ;
typedef struct host_to_dev_fis u16 ;
struct mtip_port {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct host_to_dev_fis*,int ,unsigned int) ;
 int FUNC_1 (struct mtip_port*,struct host_to_dev_fis*,int,int ,unsigned int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mtip_port *VAR_5, u8 VAR_6, u16 *VAR_7,
    dma_addr_t VAR_8, unsigned int VAR_9)
{
 struct host_to_dev_fis VAR_10;

 FUNC_0(&VAR_10, 0, sizeof(struct host_to_dev_fis));
 VAR_10.type = 0x27;
 VAR_10.opts = 1 << 7;
 VAR_10.command = VAR_0;
 VAR_10.sect_count = VAR_9 & 0xFF;
 VAR_10.sect_cnt_ex = (VAR_9 >> 8) & 0xFF;
 VAR_10.lba_low = VAR_6;
 VAR_10.lba_mid = 0;
 VAR_10.device = VAR_1;

 FUNC_0(VAR_7, 0, VAR_9 * VAR_2);

 return FUNC_1(VAR_5,
     &VAR_10,
     5,
     VAR_8,
     VAR_9 * VAR_2,
     0,
     VAR_3,
     VAR_4);
}
