
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct knote {TYPE_2__* kn_fp; } ;
struct TYPE_4__ {TYPE_1__* f_fglob; } ;
struct TYPE_3__ {scalar_t__ fg_data; } ;


 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (struct knote*,struct socket*,long) ;
 int FUNC_1 (struct socket*,int) ;
 int FUNC_2 (struct socket*,int) ;

__attribute__((used)) static int
FUNC_3(struct knote *VAR_2, long VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0;
 struct socket *VAR_6 = (struct socket *)VAR_2->kn_fp->f_fglob->fg_data;
 long VAR_7 = (VAR_3 & VAR_0);

 if ((VAR_3 & VAR_1) == 0) {
  FUNC_1(VAR_6, 1);
  VAR_5 = 1;
 }

 VAR_4 = FUNC_0(VAR_2, VAR_6, VAR_7);

 if (VAR_5)
  FUNC_2(VAR_6, 1);

 return VAR_4;
}
