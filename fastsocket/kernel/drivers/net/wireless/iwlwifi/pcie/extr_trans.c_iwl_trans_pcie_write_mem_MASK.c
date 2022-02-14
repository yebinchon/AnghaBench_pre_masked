
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct iwl_trans*,int,unsigned long*) ;
 int FUNC_1 (struct iwl_trans*,unsigned long*) ;
 int FUNC_2 (struct iwl_trans*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct iwl_trans *VAR_3, u32 VAR_4,
        void *VAR_5, int VAR_6)
{
 unsigned long VAR_7;
 int VAR_8, VAR_9 = 0;
 u32 *VAR_10 = VAR_5;

 if (FUNC_0(VAR_3, 0, &VAR_7)) {
  FUNC_2(VAR_3, VAR_1, VAR_4);
  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
   FUNC_2(VAR_3, VAR_2,
        VAR_10 ? VAR_10[VAR_8] : 0);
  FUNC_1(VAR_3, &VAR_7);
 } else {
  VAR_9 = -VAR_0;
 }
 return VAR_9;
}
