
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int) ;

void FUNC_1(int VAR_4)
{
 uint16_t VAR_5 = 0;


 if (VAR_4 <= VAR_1) {
  return;
 }

 VAR_5 = (uint16_t) (VAR_4 / VAR_1);

 VAR_2 = VAR_4;
 VAR_3 = VAR_5 * VAR_0;
 FUNC_0("oslog_setsize: new buffer size = %d, new num entries= %d\n", VAR_2, VAR_3);
}
