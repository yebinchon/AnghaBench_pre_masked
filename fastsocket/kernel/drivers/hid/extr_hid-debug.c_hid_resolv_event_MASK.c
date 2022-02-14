
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef size_t __u8 ;
typedef size_t __u16 ;


 char** VAR_0 ;
 char*** VAR_1 ;
 int FUNC_0 (struct seq_file*,char*,char*,char*) ;

void FUNC_1(__u8 VAR_2, __u16 VAR_3, struct seq_file *VAR_4) {

 FUNC_0(VAR_4, "%s.%s", VAR_0[VAR_2] ? VAR_0[VAR_2] : "?",
  VAR_1[VAR_2] ? (VAR_1[VAR_2][VAR_3] ? VAR_1[VAR_2][VAR_3] : "?") : "?");
}
