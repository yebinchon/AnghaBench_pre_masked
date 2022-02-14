
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ioc3_driver_data {TYPE_1__* vma; } ;
struct TYPE_2__ {int mcr; } ;


 unsigned int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct ioc3_driver_data *VAR_0)
{
 unsigned VAR_1;

        do {
                VAR_1 = FUNC_0(&VAR_0->vma->mcr);
        } while (!(VAR_1 & 2));

        return VAR_1 & 1;
}
