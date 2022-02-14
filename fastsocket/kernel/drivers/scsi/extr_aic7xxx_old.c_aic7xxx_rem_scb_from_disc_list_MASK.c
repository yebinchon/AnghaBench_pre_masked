
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic7xxx_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aic7xxx_host*) ;
 unsigned char FUNC_1 (struct aic7xxx_host*,int ) ;
 int FUNC_2 (struct aic7xxx_host*,unsigned char,int ) ;

__attribute__((used)) static unsigned char
FUNC_3(struct aic7xxx_host *VAR_4, unsigned char VAR_5,
                               unsigned char VAR_6)
{
  unsigned char VAR_7;

  FUNC_2(VAR_4, VAR_5, VAR_1);
  VAR_7 = FUNC_1(VAR_4, VAR_3);
  FUNC_0(VAR_4);

  if (VAR_6 != VAR_2)
  {
    FUNC_2(VAR_4, VAR_6, VAR_1);
    FUNC_2(VAR_4, VAR_7, VAR_3);
  }
  else
  {
    FUNC_2(VAR_4, VAR_7, VAR_0);
  }

  return VAR_7;
}
