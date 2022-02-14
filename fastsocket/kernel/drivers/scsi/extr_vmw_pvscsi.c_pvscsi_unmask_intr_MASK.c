
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pvscsi_adapter {scalar_t__ use_msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pvscsi_adapter const*,int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct pvscsi_adapter *VAR_3)
{
 u32 VAR_4;

 VAR_4 = VAR_0;
 if (VAR_3->use_msg)
  VAR_4 |= VAR_1;

 FUNC_0(VAR_3, VAR_2, VAR_4);
}
