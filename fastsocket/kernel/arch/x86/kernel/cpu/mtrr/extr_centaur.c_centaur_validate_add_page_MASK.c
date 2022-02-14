
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int
FUNC_1(unsigned long VAR_4, unsigned long VAR_5, unsigned int VAR_6)
{



 if (VAR_6 != VAR_2 &&
     (VAR_3 == 0 || VAR_6 != VAR_1)) {
  FUNC_0("mtrr: only write-combining%s supported\n",
      VAR_3 ? " and uncacheable are" : " is");
  return -VAR_0;
 }
 return 0;
}
