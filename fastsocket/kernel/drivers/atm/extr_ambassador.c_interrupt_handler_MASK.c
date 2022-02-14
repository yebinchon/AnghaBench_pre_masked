
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u32 ;
typedef int irqreturn_t ;
struct TYPE_7__ {int bh; } ;
typedef TYPE_1__ amb_dev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 void* VAR_7 ;
 int FUNC_2 (int ,void*) ;
 void* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,unsigned char) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_8, void *VAR_9) {
  amb_dev * VAR_10 = VAR_9;

  FUNC_0 (VAR_1|VAR_0, "interrupt_handler: %p", VAR_9);

  {
    u32 VAR_11 = FUNC_3 (VAR_10, FUNC_2(VAR_6, VAR_11));


    if (!VAR_11) {
      FUNC_0 (VAR_1, "irq not for me: %d", VAR_8);
      return VAR_4;
    }


    FUNC_0 (VAR_1, "FYI: interrupt was %08x", VAR_11);
    FUNC_7 (VAR_10, FUNC_2(VAR_6, VAR_11), -1);
  }

  {
    unsigned int VAR_12 = 0;
    unsigned char VAR_13;
    for (VAR_13 = 0; VAR_13 < VAR_5; ++VAR_13)
      while (!FUNC_4 (VAR_10, VAR_13))
 ++VAR_12;
    while (!FUNC_6 (VAR_10))
      ++VAR_12;

    if (VAR_12) {



      FUNC_1 (VAR_10);


      FUNC_0 (VAR_1, "work done: %u", VAR_12);
    } else {
      FUNC_0 (VAR_1|VAR_2, "no work done");
    }
  }

  FUNC_0 (VAR_1|VAR_0, "interrupt_handler done: %p", VAR_9);
  return VAR_3;
}
