
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 if (VAR_0)
  VAR_3 = FUNC_2(VAR_1, VAR_2);
 else
  VAR_3 = FUNC_1(VAR_1, VAR_2);

 FUNC_3("register contains slow mode %d\n", FUNC_0(VAR_1));

 return VAR_3;
}
