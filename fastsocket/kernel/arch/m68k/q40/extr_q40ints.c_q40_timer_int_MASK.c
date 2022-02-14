
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 unsigned char* VAR_0 ;
 unsigned char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,void*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static irqreturn_t FUNC_1 (int VAR_6, void * VAR_7)
{
 VAR_4 = VAR_4 ? 0 : 1;
 if (VAR_5) {
  unsigned char VAR_8=(VAR_5 & 1) ? 128-VAR_3 : 128+VAR_3;
  VAR_5--;
  *VAR_0=VAR_8;
  *VAR_1=VAR_8;
 }

 if (!VAR_4)
  FUNC_0(VAR_6, VAR_7);
 return VAR_2;
}
