
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum action { ____Placeholder_action } action ;
struct TYPE_3__ {int pi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int VAR_13 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static enum action FUNC_5(void)
{
 if (!FUNC_1() && !FUNC_4(VAR_8, VAR_12))
  return VAR_1;

 while (1) {
  if (FUNC_2(VAR_10, VAR_4, "do_pd_read_drq") & VAR_5) {
   if (VAR_11 < VAR_3) {
    VAR_11++;
    VAR_13 = VAR_7;
    return VAR_6;
   }
   return VAR_0;
  }
  FUNC_3(VAR_10->pi, VAR_9, 512);
  if (FUNC_0())
   break;
 }
 return VAR_2;
}
