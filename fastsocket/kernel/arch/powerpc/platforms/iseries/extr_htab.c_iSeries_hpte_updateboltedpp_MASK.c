
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int FUNC_1 (long,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_2 (unsigned long,int ) ;
 long FUNC_3 (unsigned long) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_3, unsigned long VAR_4,
     int VAR_5, int VAR_6)
{
 unsigned long VAR_7,VAR_8,VAR_9;
 long VAR_10;

 FUNC_0(VAR_5 != VAR_1);

 VAR_7 = FUNC_2(VAR_4, VAR_2);
 VAR_8 = (VAR_7 << 28) | (VAR_4 & 0x0fffffff);
 VAR_9 = VAR_8 >> VAR_0;
 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10 == -1)
  FUNC_4("updateboltedpp: Could not find page to bolt\n");
 FUNC_1(VAR_10, VAR_3);
}
