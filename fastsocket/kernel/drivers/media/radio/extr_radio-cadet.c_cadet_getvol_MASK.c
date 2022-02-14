
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cadet {int lock; scalar_t__ io; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct cadet *VAR_0)
{
 int VAR_1 = 0;

 FUNC_1(&VAR_0->lock);

 FUNC_3(7, VAR_0->io);
 if ((FUNC_0(VAR_0->io + 1) & 0x20) != 0)
  VAR_1 = 0xffff;

 FUNC_2(&VAR_0->lock);
 return VAR_1;
}
