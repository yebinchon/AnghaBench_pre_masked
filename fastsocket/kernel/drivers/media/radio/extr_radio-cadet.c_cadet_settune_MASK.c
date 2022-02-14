
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cadet {int lock; scalar_t__ io; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct cadet *VAR_0, unsigned VAR_1)
{
 int VAR_2;
 unsigned VAR_3;

 FUNC_0(&VAR_0->lock);

 FUNC_2(7, VAR_0->io);



 VAR_3 = 0;
 VAR_3 = (VAR_1 >> 23) & 0x02;
 VAR_3 |= 0x1c;
 FUNC_2(7, VAR_0->io);
 FUNC_2(VAR_3, VAR_0->io + 1);
 for (VAR_2 = 0; VAR_2 < 25; VAR_2++) {
  VAR_3 |= 0x01;
  FUNC_2(VAR_3, VAR_0->io + 1);
  VAR_3 &= 0xfe;
  FUNC_2(VAR_3, VAR_0->io + 1);
  VAR_1 = VAR_1 << 1;
  VAR_3 = 0x1c | ((VAR_1 >> 23) & 0x02);
  FUNC_2(VAR_3, VAR_0->io + 1);
 }
 FUNC_1(&VAR_0->lock);
}
