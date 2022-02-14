
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_1(u32 VAR_11, char *VAR_12, size_t VAR_13)
{

 *VAR_12 = '\0';

 if (VAR_11 & VAR_1)
  FUNC_0(VAR_12, "icrcerr ", VAR_13);
 if (VAR_11 & VAR_8)
  FUNC_0(VAR_12, "vcrcerr ", VAR_13);
 if (VAR_11 & VAR_6)
  FUNC_0(VAR_12, "parityerr ", VAR_13);
 if (VAR_11 & VAR_3)
  FUNC_0(VAR_12, "lenerr ", VAR_13);
 if (VAR_11 & VAR_5)
  FUNC_0(VAR_12, "mtuerr ", VAR_13);
 if (VAR_11 & VAR_2)

  FUNC_0(VAR_12, "ipathhdrerr ", VAR_13);
 if (VAR_11 & VAR_7)
  FUNC_0(VAR_12, "tiderr ", VAR_13);
 if (VAR_11 & VAR_4)

  FUNC_0(VAR_12, "invalid ipathhdr ", VAR_13);
 if (VAR_11 & VAR_0)
  FUNC_0(VAR_12, "iberr ", VAR_13);
 if (VAR_11 & VAR_9)
  FUNC_0(VAR_12, "swA ", VAR_13);
 if (VAR_11 & VAR_10)
  FUNC_0(VAR_12, "swB ", VAR_13);
}
