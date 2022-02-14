
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shared_info {int evtchn_pending; int evtchn_mask; } ;


 struct shared_info* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);
 struct shared_info *VAR_3 = VAR_0;
 int VAR_4 = 0;

 if (FUNC_0(VAR_2)) {
  int VAR_5;

  VAR_5 = FUNC_3(VAR_2, VAR_3->evtchn_mask);
  FUNC_2(VAR_2, VAR_3->evtchn_pending);
  if (!VAR_5)
   FUNC_4(VAR_2);
  VAR_4 = 1;
 }

 return VAR_4;
}
