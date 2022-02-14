
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nbd_device {scalar_t__ magic; int tx_lock; TYPE_2__* disk; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_4__ {int disk_name; } ;
struct TYPE_3__ {struct nbd_device* private_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct block_device*,struct nbd_device*,unsigned int,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ,unsigned int,unsigned long) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct block_device *VAR_4, fmode_t VAR_5,
       unsigned int VAR_6, unsigned long VAR_7)
{
 struct nbd_device *VAR_8 = VAR_4->bd_disk->private_data;
 int VAR_9;

 if (!FUNC_2(VAR_0))
  return -VAR_2;

 FUNC_0(VAR_8->magic != VAR_3);


 FUNC_3(VAR_1, "%s: nbd_ioctl cmd=%s(0x%x) arg=%lu\n",
   VAR_8->disk->disk_name, FUNC_4(VAR_6), VAR_6, VAR_7);

 FUNC_5(&VAR_8->tx_lock);
 VAR_9 = FUNC_1(VAR_4, VAR_8, VAR_6, VAR_7);
 FUNC_6(&VAR_8->tx_lock);

 return VAR_9;
}
