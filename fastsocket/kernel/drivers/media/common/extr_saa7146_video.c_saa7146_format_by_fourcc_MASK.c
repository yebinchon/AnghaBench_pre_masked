
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_format {int pixelformat; } ;
struct saa7146_dev {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct saa7146_format* VAR_1 ;

struct saa7146_format* FUNC_1(struct saa7146_dev *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  if (VAR_1[VAR_4].pixelformat == VAR_3) {
   return VAR_1+VAR_4;
  }
 }

 FUNC_0(("unknown pixelformat:'%4.4s'\n",(char *)&VAR_3));
 return ((void*)0);
}
