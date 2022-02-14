
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bba_priv {int linkstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static __inline__ u8 FUNC_1(struct bba_priv *VAR_3)
{
 u8 VAR_4 = 0;

 VAR_4 = FUNC_0(VAR_0);
 VAR_3->linkstate = VAR_4;
 if(VAR_4&VAR_1 || VAR_4&VAR_2) return VAR_4;
 return 0;
}
