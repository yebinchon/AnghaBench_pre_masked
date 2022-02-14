
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_adapter {int dummy; } ;


 int FUNC_0 (struct pvscsi_adapter const*) ;
 int FUNC_1 (struct pvscsi_adapter const*) ;
 scalar_t__ FUNC_2 (unsigned char) ;

__attribute__((used)) static void FUNC_3(const struct pvscsi_adapter *VAR_0,
      unsigned char VAR_1)
{
 if (FUNC_2(VAR_1))
  FUNC_0(VAR_0);
 else
  FUNC_1(VAR_0);
}
