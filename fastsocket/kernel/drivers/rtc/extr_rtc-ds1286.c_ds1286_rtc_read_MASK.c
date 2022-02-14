
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds1286_priv {int * rtcregs; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline u8 FUNC_1(struct ds1286_priv *VAR_0, int VAR_1)
{
 return FUNC_0(&VAR_0->rtcregs[VAR_1]) & 0xff;
}
