
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int dummy; } ;
typedef int imapstate ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_4,
                                            int VAR_5,
                                            imapstate VAR_6)
{
  CURLcode VAR_7 = VAR_0;

  (void)VAR_6;

  if(VAR_5 != VAR_2)
    VAR_7 = VAR_1;
  else

    FUNC_0(VAR_4, VAR_3);

  return VAR_7;
}
