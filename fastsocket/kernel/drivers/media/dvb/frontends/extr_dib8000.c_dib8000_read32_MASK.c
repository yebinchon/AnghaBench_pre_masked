
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dib8000_state {int dummy; } ;


 int FUNC_0 (struct dib8000_state*,int) ;

__attribute__((used)) static u32 FUNC_1(struct dib8000_state *VAR_0, u16 VAR_1)
{
 u16 VAR_2[2];

 VAR_2[0] = FUNC_0(VAR_0, VAR_1 + 0);
 VAR_2[1] = FUNC_0(VAR_0, VAR_1 + 1);

 return ((VAR_2[0] << 16) | (VAR_2[1]));
}
