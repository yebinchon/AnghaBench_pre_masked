
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwlagn_tx_resp {int frame_count; int status; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline u32 FUNC_1(struct iwlagn_tx_resp *VAR_1)
{
 return FUNC_0((__le32 *)&VAR_1->status +
       VAR_1->frame_count) & VAR_0;
}
