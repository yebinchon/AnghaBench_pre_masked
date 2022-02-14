
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int TW_Device_Extension ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(TW_Device_Extension *VAR_2, void *VAR_3, u32 VAR_4, u32 VAR_5, int VAR_6)
{
 unsigned long VAR_7;
 int VAR_8 = 1;
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_3);
 VAR_7 = VAR_1;

        while ((VAR_9 & VAR_4) != VAR_5) {
  VAR_9 = FUNC_1(VAR_3);
  if (FUNC_2(VAR_1, VAR_7 + VAR_0 * VAR_6))
   goto out;
  FUNC_0(50);
 }
 VAR_8 = 0;
out:
 return VAR_8;
}
