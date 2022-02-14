
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dohentry {int dummy; } ;
typedef int DOHcode ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int,struct dohentry*) ;
 int FUNC_1 (unsigned char*,int,struct dohentry*) ;
 int FUNC_2 (unsigned char*,size_t,int,struct dohentry*) ;

__attribute__((used)) static DOHcode FUNC_3(unsigned char *VAR_2,
                     size_t VAR_3,
                     unsigned short VAR_4,
                     unsigned short VAR_5,
                     int VAR_6,
                     struct dohentry *VAR_7)
{




  DOHcode VAR_8;

  switch(VAR_5) {
  case 130:
    if(VAR_4 != 4)
      return VAR_0;
    VAR_8 = FUNC_0(VAR_2, VAR_6, VAR_7);
    if(VAR_8)
      return VAR_8;
    break;
  case 129:
    if(VAR_4 != 16)
      return VAR_0;
    VAR_8 = FUNC_1(VAR_2, VAR_6, VAR_7);
    if(VAR_8)
      return VAR_8;
    break;
  case 128:
    VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_6, VAR_7);
    if(VAR_8)
      return VAR_8;
    break;
  default:

    break;
  }
  return VAR_1;
}
