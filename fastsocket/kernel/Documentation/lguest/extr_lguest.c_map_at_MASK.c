
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,unsigned long,unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (void*,unsigned long,int,int,int,unsigned long) ;
 unsigned long FUNC_2 (int,void*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_3(int VAR_6, void *VAR_7, unsigned long VAR_8, unsigned long VAR_9)
{
 ssize_t VAR_10;
 if (FUNC_1(VAR_7, VAR_9, VAR_4|VAR_5|VAR_3,
   VAR_1|VAR_2, VAR_6, VAR_8) != VAR_0)
  return;


 VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_9, VAR_8);
 if (VAR_10 != VAR_9)
  FUNC_0(1, "Reading offset %lu len %lu gave %zi", VAR_8, VAR_9, VAR_10);
}
