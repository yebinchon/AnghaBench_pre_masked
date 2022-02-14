
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_io_counter {int flags; int io_count; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct nfs_io_counter *VAR_1)
{
 if (FUNC_0(&VAR_1->io_count)) {
  FUNC_1(VAR_0, &VAR_1->flags);
  FUNC_2();
  FUNC_3(&VAR_1->flags, VAR_0);
 }
}
