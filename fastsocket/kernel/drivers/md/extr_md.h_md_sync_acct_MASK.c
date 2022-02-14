
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct block_device {TYPE_2__* bd_contains; } ;
struct TYPE_4__ {TYPE_1__* bd_disk; } ;
struct TYPE_3__ {int sync_io; } ;


 int FUNC_0 (unsigned long,int *) ;

__attribute__((used)) static inline void FUNC_1(struct block_device *VAR_0, unsigned long VAR_1)
{
        FUNC_0(VAR_1, &VAR_0->bd_contains->bd_disk->sync_io);
}
