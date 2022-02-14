
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rubin_state {int pp; } ;


 unsigned char FUNC_0 (struct rubin_state*) ;
 int FUNC_1 (struct rubin_state*,int,int*) ;
 int FUNC_2 (int *,unsigned char*,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_0, int *VAR_1,
    unsigned char *VAR_2,
    unsigned char *VAR_3, uint32_t VAR_4,
    uint32_t VAR_5)
{
 int VAR_6 = 0;
 struct rubin_state VAR_7;

 FUNC_2(&VAR_7.pp, VAR_2, VAR_4, 0, 0);
 FUNC_1(&VAR_7, VAR_0, VAR_1);

 while (VAR_6 < VAR_5)
  VAR_3[VAR_6++] = FUNC_0(&VAR_7);
}
