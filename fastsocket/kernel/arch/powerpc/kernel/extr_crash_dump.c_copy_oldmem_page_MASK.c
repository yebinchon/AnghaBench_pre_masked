
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (unsigned long,int ,int ) ;
 void* FUNC_1 (unsigned long) ;
 size_t FUNC_2 (void*,char*,size_t,unsigned long,int) ;
 int FUNC_3 (void*) ;
 unsigned long VAR_2 ;
 size_t FUNC_4 (size_t,int ) ;

ssize_t FUNC_5(unsigned long VAR_3, char *VAR_4,
   size_t VAR_5, unsigned long VAR_6, int VAR_7)
{
 void *VAR_8;

 if (!VAR_5)
  return 0;

 VAR_5 = FUNC_4(VAR_5, VAR_1);

 if (VAR_3 < VAR_2) {
  VAR_8 = FUNC_1(VAR_3 << VAR_0);
  VAR_5 = FUNC_2(VAR_8, VAR_4, VAR_5, VAR_6, VAR_7);
 } else {
  VAR_8 = FUNC_0(VAR_3 << VAR_0, VAR_1, 0);
  VAR_5 = FUNC_2(VAR_8, VAR_4, VAR_5, VAR_6, VAR_7);
  FUNC_3(VAR_8);
 }

 return VAR_5;
}
