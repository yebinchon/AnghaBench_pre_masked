
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si_sm_data {TYPE_1__* io; } ;
struct TYPE_2__ {unsigned char (* inputb ) (TYPE_1__*,int) ;} ;


 unsigned char FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static inline unsigned char FUNC_1(struct si_sm_data *VAR_0)
{
 return VAR_0->io->inputb(VAR_0->io, 2);
}
