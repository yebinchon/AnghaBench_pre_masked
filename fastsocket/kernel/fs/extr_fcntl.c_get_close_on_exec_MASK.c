
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct files_struct {int dummy; } ;
struct fdtable {int close_on_exec; } ;
struct TYPE_2__ {struct files_struct* files; } ;


 int FUNC_0 (unsigned int,int ) ;
 TYPE_1__* VAR_0 ;
 struct fdtable* FUNC_1 (struct files_struct*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_1)
{
 struct files_struct *VAR_2 = VAR_0->files;
 struct fdtable *VAR_3;
 int VAR_4;
 FUNC_2();
 VAR_3 = FUNC_1(VAR_2);
 VAR_4 = FUNC_0(VAR_1, VAR_3->close_on_exec);
 FUNC_3();
 return VAR_4;
}
