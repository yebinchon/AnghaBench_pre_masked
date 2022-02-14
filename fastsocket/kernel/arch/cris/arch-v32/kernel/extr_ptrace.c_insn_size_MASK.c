
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
typedef int opcode ;


 int FUNC_0 (struct task_struct*,unsigned long,unsigned long*,int,int ) ;
 int FUNC_1 (char*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct task_struct *VAR_0, unsigned long VAR_1)
{
  unsigned long VAR_2;
  int VAR_3;
  int VAR_4 = 0;


  VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_2, sizeof(VAR_2), 0);
  if (VAR_3 != sizeof(VAR_2))
    return 0;

  switch ((VAR_2 & 0x0f00) >> 8) {
  case 0x0:
  case 0x9:
  case 0xb:
   VAR_4 = 2;
   break;
  case 0xe:
  case 0xf:
   VAR_4 = 6;
   break;
  case 0xd:

   if ((VAR_2 & 0xff) == 0xff)
    VAR_4 = 4;
   else
    VAR_4 = 6;
   break;
  default:
   FUNC_1("ERROR: Couldn't find size of opcode 0x%lx at 0x%lx\n",
  VAR_2, VAR_1);
  }

  return VAR_4;
}
