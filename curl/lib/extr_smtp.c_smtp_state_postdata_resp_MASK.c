
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int dummy; } ;
typedef int smtpstate ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_3,
                                         int VAR_4,
                                         smtpstate VAR_5)
{
  CURLcode VAR_6 = VAR_0;

  (void)VAR_5;

  if(VAR_4 != 250)
    VAR_6 = VAR_1;


  FUNC_0(VAR_3, VAR_2);

  return VAR_6;
}
