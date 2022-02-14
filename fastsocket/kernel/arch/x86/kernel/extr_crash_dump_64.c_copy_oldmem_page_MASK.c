
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,void*,size_t) ;
 void* FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char*,void*,size_t) ;
 int FUNC_4 () ;

ssize_t FUNC_5(unsigned long VAR_4, char *VAR_5,
  size_t VAR_6, unsigned long VAR_7, int VAR_8)
{
 void *VAR_9;

 if (!VAR_6)
  return 0;

 VAR_9 = FUNC_1(VAR_4 << VAR_2, VAR_3);
 if (!VAR_9)
  return -VAR_1;

 if (VAR_8) {
  if (FUNC_0(VAR_5, VAR_9 + VAR_7, VAR_6)) {
   FUNC_2(VAR_9);
   return -VAR_0;
  }
 } else
  FUNC_3(VAR_5, VAR_9 + VAR_7, VAR_6);

 FUNC_4();
 FUNC_2(VAR_9);
 return VAR_6;
}
