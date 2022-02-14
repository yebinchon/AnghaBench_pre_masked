
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {size_t ph_data; } ;
typedef TYPE_1__ pal_hints_u_t ;


 size_t VAR_0 ;
 char* FUNC_0 (char*,int*,int) ;
 scalar_t__ FUNC_1 (unsigned long*,unsigned long*) ;
 scalar_t__ FUNC_2 (int,int*,int*) ;
 scalar_t__ FUNC_3 (unsigned long*,TYPE_1__*) ;
 char** VAR_1 ;
 int FUNC_4 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_5(char *VAR_2)
{
 char *VAR_3 = VAR_2;
 u64 VAR_4[2];
 u64 VAR_5;
 unsigned long VAR_6;
 pal_hints_u_t VAR_7;
 unsigned long VAR_8, VAR_9;
 char *VAR_10[]={
  "Implemented AR(s)",
  "AR(s) with read side-effects",
  "Implemented CR(s)",
  "CR(s) with read side-effects",
 };

 for(VAR_5=0; VAR_5 < 4; VAR_5++) {

  if (FUNC_2(VAR_5, &VAR_4[0], &VAR_4[1]) != 0) return 0;

  VAR_3 += FUNC_4(VAR_3, "%-32s : ", VAR_10[VAR_5]);

  VAR_3 = FUNC_0(VAR_3, VAR_4, 128);

  VAR_3 += FUNC_4(VAR_3, "\n");
 }

 if (FUNC_3(&VAR_6, &VAR_7) == 0) {

 VAR_3 += FUNC_4(VAR_3,
       "RSE stacked physical registers   : %ld\n"
       "RSE load/store hints             : %ld (%s)\n",
       VAR_6, VAR_7.ph_data,
       VAR_7.ph_data < VAR_0 ? VAR_1[VAR_7.ph_data]: "(??)");
 }
 if (FUNC_1(&VAR_8, &VAR_9))
  return 0;

 VAR_3 += FUNC_4(VAR_3,
       "Instruction debug register pairs : %ld\n"
       "Data debug register pairs        : %ld\n", VAR_8, VAR_9);

 return VAR_3 - VAR_2;
}
