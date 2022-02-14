
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ (* read_posted ) (struct e1000_hw*,int*,int) ;scalar_t__ (* write_posted ) (struct e1000_hw*,int*,int) ;} ;
struct e1000_mbx_info {TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_mbx_info mbx; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int*,int ,int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int*,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int*,int) ;

__attribute__((used)) static void FUNC_5(struct e1000_hw *VAR_3, u8 * VAR_4, u32 VAR_5)
{
 struct e1000_mbx_info *VAR_6 = &VAR_3->mbx;
 u32 VAR_7[3];
 u8 *VAR_8 = (u8 *)(&VAR_7[1]);
 s32 VAR_9;

 FUNC_2(VAR_7, 0, 12);
 VAR_7[0] = VAR_0;
 FUNC_1(VAR_8, VAR_4, 6);
 VAR_9 = VAR_6->ops.write_posted(VAR_3, VAR_7, 3);

 if (!VAR_9)
  VAR_9 = VAR_6->ops.read_posted(VAR_3, VAR_7, 3);

 VAR_7[0] &= ~VAR_1;


 if (!VAR_9 &&
     (VAR_7[0] == (VAR_0 | VAR_2)))
  FUNC_0(VAR_3);
}
