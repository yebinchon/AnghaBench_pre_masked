
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct fileproc {scalar_t__ f_type; scalar_t__ f_data; } ;
typedef int proc_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int,struct fileproc*,int) ;
 int FUNC_2 (int ,int,struct fileproc**,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(int VAR_2, struct socket **VAR_3)
{
 proc_t VAR_4 = FUNC_0();
 struct fileproc *VAR_5;
 int VAR_6;

 FUNC_3(VAR_4);
 if ( (VAR_6 = FUNC_2(VAR_4, VAR_2, &VAR_5, 1)) ) {
  FUNC_4(VAR_4);
  return(VAR_6);
 }
 if (VAR_5->f_type != VAR_0) {
  FUNC_1(VAR_4, VAR_2, VAR_5,1);
  FUNC_4(VAR_4);
  return(VAR_1);
 }
 *VAR_3 = (struct socket *)VAR_5->f_data;
 FUNC_4(VAR_4);

 return(0);
}
