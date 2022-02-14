
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int upl_t ;
typedef int upl_page_info_t ;
typedef int off_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int,int,int *) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(upl_t VAR_7, upl_page_info_t *VAR_8, int VAR_9, int VAR_10, off_t VAR_11, off_t VAR_12, int VAR_13)
{
 int VAR_14;
 boolean_t VAR_15 = VAR_6;

        if ((VAR_9 & (VAR_2 | VAR_1))) {

         VAR_13 = FUNC_1(VAR_13, VAR_4 - (int)(VAR_11 & VAR_3));
  VAR_14 = (int)((VAR_11 - VAR_12) / VAR_5);

  if (FUNC_2(VAR_8, VAR_14)) {




   VAR_15 = VAR_0;
  }
 }
 if (VAR_15 == VAR_6)
  FUNC_0(VAR_7, VAR_10, VAR_13, ((void*)0));

 return (VAR_13);
}
