
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cadet {int tunestat; int lock; scalar_t__ io; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static unsigned FUNC_4(struct cadet *VAR_0)
{
 int VAR_1, VAR_2;
 unsigned VAR_3 = 0;





 FUNC_1(&VAR_0->lock);

 FUNC_3(7, VAR_0->io);
 VAR_1 = FUNC_0(VAR_0->io + 1);
 FUNC_3(0x00, VAR_0->io + 1);
 VAR_0->tunestat = 0xffff;




 for (VAR_2 = 0; VAR_2 < 25; VAR_2++) {
  VAR_3 = (VAR_3 << 1) | ((FUNC_0(VAR_0->io + 1) >> 7) & 0x01);
  if (VAR_2 < 24) {
   FUNC_3(0x01, VAR_0->io + 1);
   VAR_0->tunestat &= FUNC_0(VAR_0->io + 1);
   FUNC_3(0x00, VAR_0->io + 1);
  }
 }




 FUNC_3(VAR_1, VAR_0->io + 1);
 FUNC_2(&VAR_0->lock);

 return VAR_3;
}
