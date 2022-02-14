
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uuid_t ;
typedef int uint32_t ;
struct proc {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct proc* VAR_2 ;
 int FUNC_0 (struct proc*) ;
 struct proc* FUNC_1 (int ) ;
 struct proc* FUNC_2 (int ) ;
 int FUNC_3 (struct proc*,unsigned char*,int) ;
 int FUNC_4 (struct proc*) ;

__attribute__((used)) static int
FUNC_5(pid_t VAR_3, uuid_t VAR_4, uint32_t VAR_5)
{
 struct proc * VAR_6 = VAR_2;
 int VAR_7 = 0;

 if (VAR_5 < sizeof(uuid_t))
  return VAR_0;

 if ((VAR_6 = FUNC_1(VAR_3)) == VAR_2) {
  VAR_6 = FUNC_2(VAR_3);
  VAR_7 = 1;
 }
 if (VAR_6 == VAR_2) {
  return VAR_1;
 }

 FUNC_3(VAR_6, (unsigned char *)VAR_4, VAR_5);

 if (VAR_7)
  FUNC_0(VAR_6);
 else
  FUNC_4(VAR_6);

 return 0;
}
