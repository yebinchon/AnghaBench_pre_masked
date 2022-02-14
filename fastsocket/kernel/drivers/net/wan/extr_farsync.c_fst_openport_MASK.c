
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fst_port_info {int run; size_t index; scalar_t__ hwif; int txqe; int txqs; TYPE_1__* card; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct fst_port_info*,int ) ;
 int FUNC_3 (struct fst_port_info*,int) ;
 int FUNC_4 (struct fst_port_info*) ;
 int FUNC_5 (struct fst_port_info*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct fst_port_info*) ;
 int * VAR_10 ;

__attribute__((used)) static void
FUNC_9(struct fst_port_info *VAR_11)
{
 int VAR_12;
 int VAR_13;




 if (VAR_11->card->state == VAR_1) {
  if (VAR_11->run) {
   FUNC_1(VAR_0, "open: found port already running\n");

   FUNC_2(VAR_11, VAR_7);
   VAR_11->run = 0;
  }

  FUNC_4(VAR_11);
  FUNC_5(VAR_11);
  FUNC_3(VAR_11, VAR_5 | VAR_4);

  FUNC_2(VAR_11, VAR_6);
  VAR_11->run = 1;

  VAR_12 = FUNC_0(VAR_11->card, VAR_10[VAR_11->index]);
  if (VAR_12 & (((VAR_11->hwif == VAR_8) || (VAR_11->hwif == VAR_9))
          ? VAR_3 : VAR_2))
   FUNC_7(FUNC_8(VAR_11));
  else
   FUNC_6(FUNC_8(VAR_11));

  VAR_13 = VAR_11->txqe - VAR_11->txqs;
  VAR_11->txqe = 0;
  VAR_11->txqs = 0;
 }

}
