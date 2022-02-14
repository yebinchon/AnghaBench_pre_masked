
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int pc; int w; int (* mem_callb ) (unsigned int,int ) ;unsigned int memmsk; int private_data; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(void)
{
  unsigned int VAR_1 = VAR_0.pc;






  VAR_0.w = VAR_0.mem_callb(VAR_1 & VAR_0.memmsk, VAR_0.private_data);
  VAR_1 += 2;

  VAR_0.pc = VAR_1;
  return VAR_0.w;
}
