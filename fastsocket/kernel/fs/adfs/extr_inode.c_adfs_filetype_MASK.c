
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int loadaddr; scalar_t__ stamped; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;

__attribute__((used)) static inline unsigned int
FUNC_1(struct inode *VAR_0)
{
 unsigned int VAR_1;

 if (FUNC_0(VAR_0)->stamped)
  VAR_1 = (FUNC_0(VAR_0)->loadaddr >> 8) & 0xfff;
 else
  VAR_1 = (unsigned int) -1;

 return VAR_1;
}
