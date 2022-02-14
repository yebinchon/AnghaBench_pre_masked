
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*,unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (unsigned int,int ,unsigned int*,int) ;

__attribute__((used)) static unsigned int FUNC_3(unsigned int VAR_1)
{
 unsigned int VAR_2;


 if (FUNC_2(VAR_1, VAR_0, &VAR_2, 1) != 0)
  FUNC_0();

 FUNC_1("detected %u kHz as current frequency\n", VAR_2);
 return VAR_2;
}
