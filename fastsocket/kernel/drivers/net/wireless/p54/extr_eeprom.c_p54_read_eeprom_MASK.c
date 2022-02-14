
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p54_common {int fw_var; } ;
struct ieee80211_hw {struct p54_common* priv; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (size_t,int ) ;
 size_t FUNC_2 (size_t,size_t) ;
 int FUNC_3 (struct p54_common*,void*,size_t,size_t) ;
 int FUNC_4 (struct ieee80211_hw*,void*,size_t) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct ieee80211_hw *VAR_3)
{
 struct p54_common *VAR_4 = VAR_3->priv;
 size_t VAR_5 = 0x2020, VAR_6 = 0, VAR_7, VAR_8;
 int VAR_9 = -VAR_1;
 void *VAR_10;

 VAR_8 = VAR_0;
 if (VAR_4->fw_var >= 0x509)
  VAR_8 -= 0xc;
 else
  VAR_8 -= 0x4;

 VAR_10 = FUNC_1(VAR_5, VAR_2);
 if (FUNC_5(!VAR_10))
  goto free;

 while (VAR_5) {
  VAR_7 = FUNC_2(VAR_5, VAR_8);
  VAR_9 = FUNC_3(VAR_4, VAR_10 + VAR_6,
       VAR_6, VAR_7);
  if (FUNC_5(VAR_9))
   goto free;

  VAR_6 += VAR_7;
  VAR_5 -= VAR_7;
 }

 VAR_9 = FUNC_4(VAR_3, VAR_10, VAR_6);
free:
 FUNC_0(VAR_10);
 return VAR_9;
}
