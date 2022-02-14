
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* set_wake ) (unsigned int,unsigned int) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned long VAR_5;

 VAR_5 = FUNC_0(VAR_0);
 if (VAR_4)
  VAR_5 &= ~VAR_1;
 else
  VAR_5 |= VAR_1;
 FUNC_1(VAR_5, VAR_0);

 return VAR_2.set_wake(VAR_3, VAR_4);
}
