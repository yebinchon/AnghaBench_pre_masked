
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 scalar_t__ FUNC_0 (long) ;
 long VAR_1 ;
 int FUNC_1 (char*,unsigned long,long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_2 (long) ;
 int FUNC_3 (int) ;
 long FUNC_4 (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static long FUNC_5(unsigned long VAR_2,
        unsigned long VAR_3,
        unsigned long VAR_4,
        unsigned long VAR_5,
        unsigned long VAR_6,
        unsigned long VAR_7,
        unsigned long VAR_8,
        unsigned long VAR_9)
{
 long VAR_10;
 int VAR_11, VAR_12;

 for (VAR_11 = 0; VAR_11 < 5; VAR_11++) {
  VAR_10 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8, VAR_9);

  if (FUNC_0(VAR_10)) {
   VAR_12 = FUNC_2(VAR_10);
   FUNC_3(VAR_12);
   continue;
  }

  if (VAR_10 < VAR_1)
   FUNC_1("opcode=%lx ret=%lx"
       " arg1=%lx arg2=%lx arg3=%lx arg4=%lx"
       " arg5=%lx arg6=%lx arg7=%lx ",
       VAR_2, VAR_10,
       VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
       VAR_8, VAR_9);

  return VAR_10;
 }

 return VAR_0;
}
