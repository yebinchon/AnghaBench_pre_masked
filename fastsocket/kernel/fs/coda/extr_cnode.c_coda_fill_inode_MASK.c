
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * a_ops; } ;
struct inode {int i_mode; TYPE_1__ i_data; TYPE_1__* i_mapping; int * i_op; int * i_fop; } ;
struct coda_vattr {int va_rdev; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct inode*,struct coda_vattr*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_6, struct coda_vattr *VAR_7)
{
        FUNC_3(VAR_6, VAR_7);

        if (FUNC_2(VAR_6->i_mode)) {
                VAR_6->i_op = &VAR_2;
                VAR_6->i_fop = &VAR_3;
        } else if (FUNC_0(VAR_6->i_mode)) {
                VAR_6->i_op = &VAR_0;
                VAR_6->i_fop = &VAR_1;
        } else if (FUNC_1(VAR_6->i_mode)) {
  VAR_6->i_op = &VAR_5;
  VAR_6->i_data.a_ops = &VAR_4;
  VAR_6->i_mapping = &VAR_6->i_data;
 } else
                FUNC_5(VAR_6, VAR_6->i_mode, FUNC_4(VAR_7->va_rdev));
}
