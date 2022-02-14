
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int,unsigned long,...) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_0, unsigned long VAR_1,
 unsigned long VAR_2, unsigned long VAR_3, unsigned long VAR_4,
 const char* VAR_5, int VAR_6)
{
 FUNC_0("%s:%d: spe_id:  %xh (%u)\n", VAR_5, VAR_6, VAR_0, VAR_0);
 FUNC_0("%s:%d: priv2:   %lxh\n", VAR_5, VAR_6, VAR_1);
 FUNC_0("%s:%d: problem: %lxh\n", VAR_5, VAR_6, VAR_2);
 FUNC_0("%s:%d: ls:      %lxh\n", VAR_5, VAR_6, VAR_3);
 FUNC_0("%s:%d: shadow:  %lxh\n", VAR_5, VAR_6, VAR_4);
}
