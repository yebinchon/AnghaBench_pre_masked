
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib8000_state {int dummy; } ;


 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct dib8000_state *VAR_0)
{
 u16 VAR_1 = FUNC_0(VAR_0, 298);
 VAR_1 |= (1 << 3) | (1 << 0);
 FUNC_2("acquisition mode activated");
 FUNC_1(VAR_0, 298, VAR_1);
}
