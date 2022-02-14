
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ Frameskip; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char const*,char*,scalar_t__) ;
 char const* VAR_1 ;

__attribute__((used)) static const char *FUNC_1(int VAR_2, int *VAR_3)
{
 if (VAR_0.Frameskip < 0)
  return "Auto";
 FUNC_0(VAR_1, "%d", VAR_0.Frameskip);
 return VAR_1;
}
