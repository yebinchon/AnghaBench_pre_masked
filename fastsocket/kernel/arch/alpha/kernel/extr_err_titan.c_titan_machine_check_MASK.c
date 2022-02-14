
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct el_common {scalar_t__ sys_offset; } ;
struct el_TITAN_sysdata_mcheck {int c_dirx; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 char* VAR_6 ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,char*,unsigned int,int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct el_common*,scalar_t__) ;
 int FUNC_9 (int) ;

void
FUNC_10(unsigned long VAR_7, unsigned long VAR_8)
{
 struct el_common *VAR_9 = (struct el_common *)VAR_8;
 struct el_TITAN_sysdata_mcheck *VAR_10 =
  (struct el_TITAN_sysdata_mcheck *)
  ((unsigned long)VAR_9 + VAR_9->sys_offset);
 u64 VAR_11;
 FUNC_4();
 FUNC_1();




 if ((VAR_7 != VAR_3) && (VAR_7 != VAR_2)) {
  FUNC_2(VAR_7, VAR_8);
  return;
 }
 if (FUNC_8(VAR_9, 0) !=
     VAR_1) {
  char *VAR_12 = VAR_6;
  VAR_6 = VAR_0;






  FUNC_5("%s"
         "*System %s Error (Vector 0x%x) reported on CPU %d:\n",
         VAR_6,
         (VAR_7 == VAR_2)?"Correctable":"Uncorrectable",
         (unsigned int)VAR_7, (int)FUNC_6());







  VAR_6 = VAR_12;





  VAR_11 = VAR_10->c_dirx & 0xF800000000000000UL;
  FUNC_7(VAR_11);
 }





 FUNC_9(0x7);
 FUNC_4();
}
