
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fst_port_info {scalar_t__ run; TYPE_1__* card; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct fst_port_info*,int ) ;
 int FUNC_2 (struct fst_port_info*,int) ;

__attribute__((used)) static void
FUNC_3(struct fst_port_info *VAR_5)
{
 if (VAR_5->card->state == VAR_1) {
  if (VAR_5->run) {
   VAR_5->run = 0;
   FUNC_2(VAR_5, VAR_3 | VAR_2);

   FUNC_1(VAR_5, VAR_4);
  } else {
   FUNC_0(VAR_0, "close: port not running\n");
  }
 }
}
