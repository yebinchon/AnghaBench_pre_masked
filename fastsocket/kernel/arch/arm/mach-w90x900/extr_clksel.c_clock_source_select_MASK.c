
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_5);

 if (FUNC_2(VAR_6, "nuc900-ms") == 0)
  VAR_9 = VAR_4;
 else if (FUNC_2(VAR_6, "nuc900-atapi") == 0)
  VAR_9 = VAR_0;
 else if (FUNC_2(VAR_6, "nuc900-lcd") == 0)
  VAR_9 = VAR_3;
 else if (FUNC_2(VAR_6, "nuc900-audio") == 0)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_2;

 VAR_8 &= ~(0x03 << VAR_9);
 VAR_8 |= (VAR_7 << VAR_9);

 FUNC_1(VAR_8, VAR_5);
}
