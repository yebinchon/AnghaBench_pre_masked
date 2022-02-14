
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct controller {int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct controller*,char*) ;
 int FUNC_1 (struct controller*,char*) ;
 scalar_t__ FUNC_2 (struct controller*) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (struct controller*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ,int,unsigned long) ;

__attribute__((used)) static inline int FUNC_6(struct controller *VAR_3)
{
 int VAR_4 = 0;
 unsigned long VAR_5 = FUNC_3(1000);
 int VAR_6;

 if (VAR_2)
  VAR_6 = FUNC_4(VAR_3);
 else
  VAR_6 = FUNC_5(VAR_3->queue,
      !FUNC_2(VAR_3), VAR_5);
 if (!VAR_6 && FUNC_2(VAR_3)) {
  VAR_4 = -VAR_1;
  FUNC_0(VAR_3, "Command not completed in 1000 msec\n");
 } else if (VAR_6 < 0) {
  VAR_4 = -VAR_0;
  FUNC_1(VAR_3, "Command was interrupted by a signal\n");
 }

 return VAR_4;
}
