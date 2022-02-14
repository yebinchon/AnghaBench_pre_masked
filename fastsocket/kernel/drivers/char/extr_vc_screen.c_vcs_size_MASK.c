
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {int vc_rows; int vc_cols; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct vc_data* d; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct inode *VAR_4)
{
 int VAR_5;
 int VAR_6 = FUNC_0(VAR_4);
 int VAR_7 = VAR_6 & 127;
 struct vc_data *VAR_8;

 if (VAR_7 == 0)
  VAR_7 = VAR_2;
 else
  VAR_7--;
 if (!FUNC_1(VAR_7))
  return -VAR_0;
 VAR_8 = VAR_3[VAR_7].d;

 VAR_5 = VAR_8->vc_rows * VAR_8->vc_cols;

 if (VAR_6 & 128)
  VAR_5 = 2*VAR_5 + VAR_1;
 return VAR_5;
}
