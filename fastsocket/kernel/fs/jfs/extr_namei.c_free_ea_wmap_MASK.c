
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_6__ {int flag; } ;
typedef TYPE_1__ dxd_t ;
struct TYPE_7__ {TYPE_1__ ea; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (struct inode*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct inode*,int ,int ) ;
 int FUNC_3 (struct inode*,TYPE_1__) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_5(struct inode *VAR_1)
{
 dxd_t *VAR_2 = &FUNC_0(VAR_1)->ea;

 if (VAR_2->flag & VAR_0) {

  FUNC_3(VAR_1, *VAR_2);
  FUNC_2(VAR_1, FUNC_1(VAR_2), FUNC_4(VAR_2));
 }
 VAR_2->flag = 0;
}
