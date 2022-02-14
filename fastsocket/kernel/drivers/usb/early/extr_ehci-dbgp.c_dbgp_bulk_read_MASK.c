
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pids; int address; int control; } ;


 int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(unsigned VAR_5, unsigned VAR_6, void *VAR_7,
     int VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;
 int VAR_12;

 if (VAR_8 > VAR_1)
  return -1;

 VAR_10 = FUNC_0(VAR_5, VAR_6);

 VAR_9 = FUNC_5(&VAR_4->pids);
 VAR_9 = FUNC_3(VAR_9, VAR_3);

 VAR_11 = FUNC_5(&VAR_4->control);
 VAR_11 = FUNC_2(VAR_11, VAR_8);
 VAR_11 &= ~VAR_2;
 VAR_11 |= VAR_0;

 FUNC_6(VAR_10, &VAR_4->address);
 FUNC_6(VAR_9, &VAR_4->pids);
 VAR_12 = FUNC_4(VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_8 > VAR_12)
  VAR_8 = VAR_12;
 FUNC_1(VAR_7, VAR_8);
 return VAR_12;
}
