
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct pvscsi_adapter const*) ;
 int FUNC_1 (struct pvscsi_adapter const*) ;
 int FUNC_2 (struct pvscsi_adapter const*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_3(const struct pvscsi_adapter *VAR_1)
{
 FUNC_0(FUNC_1(VAR_1), "Reseting bus on %p\n", VAR_1);

 FUNC_2(VAR_1, VAR_0, ((void*)0), 0);
}
