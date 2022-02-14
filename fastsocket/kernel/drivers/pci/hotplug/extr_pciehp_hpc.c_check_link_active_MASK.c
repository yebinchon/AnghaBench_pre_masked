
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct controller*,int ,int*) ;

__attribute__((used)) static inline int FUNC_1(struct controller *VAR_2)
{
 u16 VAR_3;

 if (FUNC_0(VAR_2, VAR_0, &VAR_3))
  return 0;
 return !!(VAR_3 & VAR_1);
}
