
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rx_dropped; } ;
struct qeth_card {TYPE_1__ stats; } ;
struct qdio_buffer {TYPE_2__* element; } ;
struct TYPE_4__ {unsigned int sflags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char const*) ;
 int FUNC_1 (int ,int,char*,unsigned int) ;
 int VAR_1 ;

int FUNC_2(struct qeth_card *VAR_2, struct qdio_buffer *VAR_3,
  unsigned int VAR_4, const char *VAR_5)
{
 if (VAR_4) {
  FUNC_0(VAR_1, 2, VAR_5);
  FUNC_0(VAR_0, 2, VAR_5);
  FUNC_1(VAR_0, 2, " F15=%02X",
          VAR_3->element[15].sflags);
  FUNC_1(VAR_0, 2, " F14=%02X",
          VAR_3->element[14].sflags);
  FUNC_1(VAR_0, 2, " qerr=%X", VAR_4);
  if ((VAR_3->element[15].sflags) == 0x12) {
   VAR_2->stats.rx_dropped++;
   return 0;
  } else
   return 1;
 }
 return 0;
}
