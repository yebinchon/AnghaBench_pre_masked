
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int polling_interval; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_11)
{
 int VAR_12 = 0;

 FUNC_0(VAR_3, "polling...\n");

 FUNC_4();

 if (!VAR_1 && VAR_5 != VAR_2) {
  VAR_2 = VAR_0;
  VAR_12 = 1;
 }

 if (!VAR_9 && VAR_6 != VAR_10) {
  VAR_10 = VAR_0;
  VAR_12 = 1;
 }

 if (VAR_12)
  FUNC_3();

 FUNC_1(&VAR_8,
    VAR_4 + FUNC_2(VAR_7->polling_interval));
}
