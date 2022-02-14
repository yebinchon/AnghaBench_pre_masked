
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {TYPE_1__* f_op; } ;
struct elfhdr {scalar_t__ e_type; int e_ident; } ;
struct TYPE_2__ {int mmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct elfhdr*) ;
 int FUNC_1 (struct elfhdr*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct elfhdr *VAR_4, struct file *VAR_5)
{
 if (FUNC_2(VAR_4->e_ident, VAR_0, VAR_3) != 0)
  return 0;
 if (VAR_4->e_type != VAR_2 && VAR_4->e_type != VAR_1)
  return 0;
 if (!FUNC_0(VAR_4) || !FUNC_1(VAR_4))
  return 0;
 if (!VAR_5->f_op || !VAR_5->f_op->mmap)
  return 0;
 return 1;
}
