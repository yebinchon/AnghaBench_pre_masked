
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bba_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bba_priv*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct bba_priv *VAR_1)
{
 u32 VAR_2,VAR_3,VAR_4;

 for(VAR_3=0;VAR_3<10000;VAR_3++) {
  FUNC_1(500);
  VAR_2 = FUNC_0(VAR_1);

  if(VAR_2&0xf0 && VAR_2&0x08) break;
 }


 if(VAR_3<10000) {
  VAR_4 = 1;
  if(!(VAR_2&0x04)) VAR_4 = 2;
  FUNC_1(VAR_4*VAR_0);
 }

 return (VAR_3<10000);
}
