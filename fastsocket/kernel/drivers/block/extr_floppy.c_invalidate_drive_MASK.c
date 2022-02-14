
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct block_device {TYPE_1__* bd_disk; } ;
struct TYPE_2__ {scalar_t__ private_data; } ;


 int FUNC_0 (struct block_device*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (long,int *) ;

__attribute__((used)) static int FUNC_3(struct block_device *VAR_1)
{

 FUNC_2((long)VAR_1->bd_disk->private_data, &VAR_0);
 FUNC_1();
 FUNC_0(VAR_1);
 return 0;
}
