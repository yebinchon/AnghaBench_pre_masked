
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rubin_state {int pp; } ;


 int FUNC_0 (struct rubin_state*) ;
 int FUNC_1 (int *,unsigned char*,int,int ,int) ;
 int FUNC_2 (struct rubin_state*,int,int*) ;
 int FUNC_3 (struct rubin_state*,unsigned char) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(int VAR_0, int *VAR_1, unsigned char *VAR_2,
        unsigned char *VAR_3, uint32_t *VAR_4,
        uint32_t *VAR_5)
 {
 int VAR_6 = 0;
 int VAR_7=0;
 struct rubin_state VAR_8;

 FUNC_1(&VAR_8.pp, VAR_3, *VAR_5 * 8, 0, 32);

 FUNC_2(&VAR_8, VAR_0, VAR_1);

 while (VAR_7 < (*VAR_4) && !FUNC_3(&VAR_8, VAR_2[VAR_7]))
  VAR_7++;

 FUNC_0(&VAR_8);

 if (VAR_6 > VAR_7) {

  return -1;
 }




 VAR_6 = (FUNC_4(&VAR_8.pp)+7)/8;

 if (VAR_6 >= VAR_7)
  return -1;
 *VAR_4 = VAR_7;
 *VAR_5 = VAR_6;
 return 0;
}
