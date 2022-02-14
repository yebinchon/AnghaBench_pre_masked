
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned short msgnum; int mnlock; } ;
typedef TYPE_1__ act2000_card ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline unsigned short
FUNC_2(act2000_card *VAR_0)
{
 unsigned long VAR_1;
 unsigned short VAR_2;

 FUNC_0(&VAR_0->mnlock, VAR_1);
 VAR_2 = VAR_0->msgnum;
 VAR_0->msgnum++;
 VAR_0->msgnum &= 0x7fff;
 FUNC_1(&VAR_0->mnlock, VAR_1);
 return VAR_2;
}
