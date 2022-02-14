
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146 {int osdtail; int osdhead; int * osdbuf; int dmadebi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct saa7146*,int ,int ,int,int) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static void FUNC_2(struct saa7146 *VAR_4)
{
 int VAR_5 = VAR_4->osdtail - VAR_4->osdhead;
 if (VAR_5 > 30720)
  VAR_5 = 30720;

 VAR_5 = 8 * ((VAR_5 + 8) >> 3);
 if (VAR_5) {
  FUNC_0(VAR_4, VAR_3, VAR_1,
     (VAR_4->osdhead >> 3), 2);
  FUNC_1(VAR_4->dmadebi, &VAR_4->osdbuf[VAR_4->osdhead], VAR_5);
  VAR_4->osdhead += VAR_5;

  FUNC_0(VAR_4, VAR_3, VAR_2, 0, VAR_5);
 }
 if (VAR_4->osdhead >= VAR_4->osdtail) {
  VAR_4->osdhead = VAR_4->osdtail = 0;
  FUNC_0(VAR_4, VAR_3, VAR_0, 0xc00c, 2);
 }
}
