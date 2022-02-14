
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mutex {int dummy; } ;
struct idr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct idr*,int *,int*) ;
 scalar_t__ FUNC_1 (struct idr*,int ) ;
 int FUNC_2 (struct mutex*) ;
 int FUNC_3 (struct mutex*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct idr *VAR_4, struct mutex *VAR_5, int *VAR_6)
{
 int VAR_7;

      again:
 if (FUNC_4(FUNC_1(VAR_4, VAR_2) == 0))
  return -VAR_1;

 if (VAR_5)
  FUNC_2(VAR_5);
 VAR_7 = FUNC_0(VAR_4, ((void*)0), VAR_6);
 if (VAR_5)
  FUNC_3(VAR_5);
 if (FUNC_4(VAR_7 == -VAR_0))
  goto again;
 else if (FUNC_4(VAR_7))
  return VAR_7;

 *VAR_6 = *VAR_6 & VAR_3;
 return 0;
}
