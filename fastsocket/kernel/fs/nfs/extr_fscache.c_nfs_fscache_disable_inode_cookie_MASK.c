
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_3__ {scalar_t__ fscache; int flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*,TYPE_1__*) ;
 int FUNC_3 (scalar_t__,struct inode*) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_2)
{
 FUNC_1(VAR_1, &FUNC_0(VAR_2)->flags);

 if (FUNC_0(VAR_2)->fscache) {
  FUNC_2(VAR_0,
    "NFS: nfsi 0x%p turning cache off\n", FUNC_0(VAR_2));




  FUNC_3(FUNC_0(VAR_2)->fscache, VAR_2);
  FUNC_4(VAR_2);
 }
}
