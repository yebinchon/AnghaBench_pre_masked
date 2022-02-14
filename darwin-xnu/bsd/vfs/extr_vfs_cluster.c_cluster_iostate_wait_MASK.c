
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct clios {scalar_t__ io_issued; scalar_t__ io_completed; int io_wanted; int io_mtxp; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,scalar_t__,char const*,int *) ;

__attribute__((used)) static void
FUNC_5(struct clios *VAR_4, u_int VAR_5, const char *VAR_6)
{

 FUNC_2(&VAR_4->io_mtxp);

 while ((VAR_4->io_issued - VAR_4->io_completed) > VAR_5) {

  FUNC_1((FUNC_0(VAR_0, 95)) | VAR_2,
        VAR_4->io_issued, VAR_4->io_completed, VAR_5, 0, 0);

  VAR_4->io_wanted = 1;
  FUNC_4((caddr_t)&VAR_4->io_wanted, &VAR_4->io_mtxp, VAR_3 + 1, VAR_6, ((void*)0));

  FUNC_1((FUNC_0(VAR_0, 95)) | VAR_1,
        VAR_4->io_issued, VAR_4->io_completed, VAR_5, 0, 0);
 }
 FUNC_3(&VAR_4->io_mtxp);
}
