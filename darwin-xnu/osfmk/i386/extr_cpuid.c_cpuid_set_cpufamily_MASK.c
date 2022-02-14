
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int cpuid_family; int cpuid_cpufamily; int cpuid_model; } ;
typedef TYPE_1__ i386_cpu_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,TYPE_1__*,int ) ;

__attribute__((used)) static uint32_t
FUNC_1(i386_cpu_info_t *VAR_10)
{
 uint32_t VAR_11 = VAR_9;

 switch (VAR_10->cpuid_family) {
 case 6:
  switch (VAR_10->cpuid_model) {
  case 23:
   VAR_11 = VAR_5;
   break;
  case 135:
  case 144:
  case 146:
  case 134:
   VAR_11 = VAR_4;
   break;
  case 145:
  case 129:
  case 128:
   VAR_11 = VAR_8;
   break;
  case 133:
  case 138:
   VAR_11 = VAR_6;
   break;
  case 140:
  case 139:
   VAR_11 = VAR_2;
   break;
  case 143:
  case 142:
  case 141:
  case 147:
   VAR_11 = VAR_1;
   break;
  case 149:
  case 148:
   VAR_11 = VAR_0;
   break;
  case 132:
  case 131:

  case 130:

   VAR_11 = VAR_7;
   break;
               case 137:
               case 136:
                       VAR_11 = VAR_3;
                       break;
  }
  break;
 }

 VAR_10->cpuid_cpufamily = VAR_11;
 FUNC_0("cpuid_set_cpufamily(%p) returning 0x%x\n", VAR_10, VAR_11);
 return VAR_11;
}
