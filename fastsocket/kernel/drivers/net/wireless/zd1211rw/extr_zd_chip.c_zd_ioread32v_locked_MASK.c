
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zd_addr_t ;
typedef int v16 ;
typedef int u32 ;
typedef int u16 ;
struct zd_chip {int dummy; } ;
typedef int a16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (struct zd_chip*) ;
 int FUNC_4 (struct zd_chip*,int*,int *,unsigned int) ;

int FUNC_5(struct zd_chip *VAR_2, u32 *VAR_3, const zd_addr_t *VAR_4,
   unsigned int VAR_5)
{
 int VAR_6;
 int VAR_7;
 zd_addr_t VAR_8[VAR_1 * 2];
 u16 VAR_9[VAR_1 * 2];
 unsigned int VAR_10;

 if (VAR_5 > VAR_1)
  return -VAR_0;


 VAR_10 = 2 * VAR_5;
 FUNC_0(VAR_10 * sizeof(zd_addr_t) > sizeof(VAR_8));
 FUNC_0(VAR_10 * sizeof(u16) > sizeof(VAR_9));

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  int VAR_11 = 2*VAR_7;

  VAR_8[VAR_11] = FUNC_2(VAR_4[VAR_7]);
  VAR_8[VAR_11+1] = VAR_4[VAR_7];
 }

 VAR_6 = FUNC_4(VAR_2, VAR_9, VAR_8, VAR_10);
 if (VAR_6) {
  FUNC_1(FUNC_3(VAR_2),
     "error: zd_ioread16v_locked. Error number %d\n", VAR_6);
  return VAR_6;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  int VAR_12 = 2*VAR_7;
  VAR_3[VAR_7] = (VAR_9[VAR_12] << 16) | VAR_9[VAR_12+1];
 }

 return 0;
}
