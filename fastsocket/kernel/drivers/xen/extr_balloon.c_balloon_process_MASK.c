
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_2__ {scalar_t__ current_pages; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (long) ;
 scalar_t__ FUNC_2 (long) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct work_struct *VAR_5)
{
 int VAR_6 = 0;
 long VAR_7;

 FUNC_4(&VAR_1);

 do {
  VAR_7 = FUNC_0() - VAR_2.current_pages;
  if (VAR_7 > 0)
   VAR_6 = (FUNC_2(VAR_7) != 0);
  if (VAR_7 < 0)
   VAR_6 = (FUNC_1(-VAR_7) != 0);


  if (FUNC_6())
   FUNC_7();

 } while ((VAR_7 != 0) && !VAR_6);


 if (FUNC_0() != VAR_2.current_pages)
  FUNC_3(&VAR_3, VAR_4 + VAR_0);

 FUNC_5(&VAR_1);
}
