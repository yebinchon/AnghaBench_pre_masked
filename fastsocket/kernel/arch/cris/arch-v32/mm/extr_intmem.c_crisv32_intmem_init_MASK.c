
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intmem_allocation {int entry; int status; scalar_t__ offset; scalar_t__ size; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(void)
{
 static int VAR_7 = 0;
 if (!VAR_7) {
  struct intmem_allocation* VAR_8 =
    (struct intmem_allocation*)FUNC_2(sizeof *VAR_8, VAR_0);
  FUNC_0(&VAR_5);
  VAR_6 = FUNC_1(VAR_2 + VAR_3,
      VAR_1 - VAR_3);
  VAR_7 = 1;
  VAR_8->size = VAR_1 - VAR_3;
  VAR_8->offset = 0;
  VAR_8->status = VAR_4;
  FUNC_3(&VAR_8->entry, &VAR_5);
 }
}
