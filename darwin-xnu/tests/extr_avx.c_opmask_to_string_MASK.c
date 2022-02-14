
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPMASK ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,unsigned int,int ,char*) ;

void
FUNC_2(OPMASK *VAR_2, char *VAR_3) {
 unsigned int VAR_4 = 0;
 unsigned int VAR_5 = 0;
 int VAR_6 = 0;

 for(VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_6 = FUNC_1(
   VAR_3 + VAR_5,
   "k%d: 0x%016llx%s",
   VAR_4, VAR_2[VAR_4],
   VAR_4 < VAR_0 ? "\n" : ""
  );
  VAR_1; FUNC_0(VAR_6, "sprintf()");
  VAR_5 += VAR_6;
 }
}
