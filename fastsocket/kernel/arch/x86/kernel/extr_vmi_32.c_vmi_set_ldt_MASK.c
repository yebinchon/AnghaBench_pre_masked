
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct desc_struct {int dummy; } ;
struct TYPE_2__ {int (* _set_ldt ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct desc_struct*,unsigned long,unsigned int,int ,int ) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (int ,int,struct desc_struct*,int ) ;

__attribute__((used)) static void FUNC_5(const void *VAR_3, unsigned VAR_4)
{
 unsigned VAR_5 = FUNC_2();
 struct desc_struct VAR_6;

 FUNC_1(&VAR_6, (unsigned long)VAR_3,
   VAR_4 * sizeof(struct desc_struct) - 1,
   VAR_0, 0);
 FUNC_4(FUNC_0(VAR_5), VAR_1, &VAR_6, VAR_0);
 VAR_2._set_ldt(VAR_4 ? VAR_1*sizeof(struct desc_struct) : 0);
}
