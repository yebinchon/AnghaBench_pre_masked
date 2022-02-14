
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jbusmc_obp_mem_layout {char** dimm_labels; } ;
struct jbusmc_dimm_group {int index; struct jbusmc* controller; } ;
struct jbusmc {struct jbusmc_obp_mem_layout layout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,unsigned long,int*,char**,struct jbusmc_obp_mem_layout*,int) ;
 struct jbusmc_dimm_group* FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,char*,char*,...) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(int VAR_3,
        unsigned long VAR_4,
        char *VAR_5, int VAR_6)
{
 struct jbusmc_obp_mem_layout *VAR_7;
 struct jbusmc_dimm_group *VAR_8;
 struct jbusmc *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_1(VAR_4);
 if (VAR_8 == ((void*)0) ||
     VAR_3 < VAR_2 ||
     VAR_3 > VAR_1) {
  VAR_5[0] = '?';
  VAR_5[1] = '?';
  VAR_5[2] = '?';
  VAR_5[3] = '\0';
  return 0;
 }
 VAR_9 = VAR_8->controller;
 VAR_7 = &VAR_9->layout;

 VAR_10 = VAR_8->index * VAR_0;

 if (VAR_3 != VAR_2) {
  char *VAR_11;
  int VAR_12;

  FUNC_0(VAR_3, VAR_4, &VAR_12,
         &VAR_11, VAR_7, VAR_10);
  FUNC_2(VAR_5, "%s, pin %3d", VAR_11, VAR_12);
 } else {
  int VAR_13;




  for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
   FUNC_2(VAR_5, "%s ",
    VAR_7->dimm_labels[VAR_10 + VAR_13]);
   VAR_5 += FUNC_3(VAR_5);
  }
 }

 return 0;
}
