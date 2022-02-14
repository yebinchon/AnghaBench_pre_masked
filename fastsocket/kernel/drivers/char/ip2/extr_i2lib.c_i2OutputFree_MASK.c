
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int i2DataHeader ;
typedef TYPE_1__* i2ChanStrPtr ;
struct TYPE_4__ {int Obuf_strip; int Obuf_stuff; int Obuf_spinlock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_3(i2ChanStrPtr VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;


 if ( !FUNC_0 ( VAR_1 ) ) {
  return -1;
 }
 FUNC_1(&VAR_1->Obuf_spinlock, VAR_3);
 VAR_2 = VAR_1->Obuf_strip - VAR_1->Obuf_stuff - 1;
 FUNC_2(&VAR_1->Obuf_spinlock, VAR_3);

 if (VAR_2 < 0) {
  VAR_2 += VAR_0;
 }

 VAR_2 -= sizeof(i2DataHeader);

 return (VAR_2 < 0) ? 0 : VAR_2;
}
