
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mutex {int dummy; } ;
struct idr {int dummy; } ;


 int FUNC_0 (struct idr*,int) ;
 int FUNC_1 (struct mutex*) ;
 int FUNC_2 (struct mutex*) ;

__attribute__((used)) static void FUNC_3(struct idr *VAR_0, struct mutex *VAR_1, int VAR_2)
{
 if (VAR_1)
  FUNC_1(VAR_1);
 FUNC_0(VAR_0, VAR_2);
 if (VAR_1)
  FUNC_2(VAR_1);
}
