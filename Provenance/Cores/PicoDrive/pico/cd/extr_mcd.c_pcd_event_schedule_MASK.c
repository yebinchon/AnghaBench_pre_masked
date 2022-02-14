
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pcd_event { ____Placeholder_pcd_event } pcd_event ;


 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,unsigned int,unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int* VAR_2 ;

void FUNC_2(unsigned int VAR_3, enum pcd_event VAR_4, int VAR_5)
{
  unsigned int VAR_6;

  VAR_6 = VAR_3 + VAR_5;
  if (VAR_6 == 0) {

    VAR_2[VAR_4] = 0;
    return;
  }

  VAR_6 |= 1;

  FUNC_1(VAR_0, "cd: new event #%u %u->%u", VAR_4, VAR_3, VAR_6);
  VAR_2[VAR_4] = VAR_6;

  if (VAR_1 == 0 || FUNC_0(VAR_1, VAR_6))
    VAR_1 = VAR_6;
}
