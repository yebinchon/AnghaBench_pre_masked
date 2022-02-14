
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct desc_struct {int dummy; } ;
struct TYPE_2__ {int (* write_gdt_entry ) (struct desc_struct*,int,int ,int ) ;} ;


 int FUNC_0 (struct desc_struct*,int,int ,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct desc_struct *VAR_1, int VAR_2,
    const void *VAR_3, int VAR_4)
{
 u32 *VAR_5 = (u32 *)VAR_3;
 VAR_0.write_gdt_entry(VAR_1, VAR_2, VAR_5[0], VAR_5[1]);
}
