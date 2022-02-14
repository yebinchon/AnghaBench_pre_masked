
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msh2_khz; int ssh2_khz; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char const*,char*,int) ;
 char const* VAR_2 ;

__attribute__((used)) static const char *FUNC_1(int VAR_3, int *VAR_4)
{
 int VAR_5 = (VAR_3 == VAR_0) ?
  VAR_1.msh2_khz : VAR_1.ssh2_khz;

 FUNC_0(VAR_2, "%d", VAR_5);
 return VAR_2;
}
