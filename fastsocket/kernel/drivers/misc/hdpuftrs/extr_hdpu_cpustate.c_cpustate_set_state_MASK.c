
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char cached_val; int lock; int set_addr; int clr_addr; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,unsigned char) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(unsigned char VAR_1)
{
 unsigned int VAR_2 = (VAR_1 << 21);




 FUNC_1(&VAR_0.lock);
 VAR_0.cached_val = VAR_1;
 FUNC_3((0xff << 21), VAR_0.clr_addr);
 FUNC_3(VAR_2, VAR_0.set_addr);
 FUNC_2(&VAR_0.lock);
}
