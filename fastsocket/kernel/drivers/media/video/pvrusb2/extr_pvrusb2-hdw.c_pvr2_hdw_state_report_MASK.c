
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int big_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct pvr2_hdw*,char*,unsigned int) ;
 unsigned int FUNC_3 (struct pvr2_hdw*,unsigned int,char*,unsigned int) ;

unsigned int FUNC_4(struct pvr2_hdw *VAR_0,
       char *VAR_1,unsigned int VAR_2)
{
 unsigned int VAR_3,VAR_4,VAR_5;
 VAR_3 = 0;
 FUNC_1(VAR_0->big_lock);
 for (VAR_5 = 0; ; VAR_5++) {
  VAR_4 = FUNC_3(VAR_0,VAR_5,VAR_1,VAR_2);
  if (!VAR_4) break;
  VAR_3 += VAR_4; VAR_2 -= VAR_4; VAR_1 += VAR_4;
  if (!VAR_2) break;
  VAR_1[0] = '\n'; VAR_4 = 1;
  VAR_3 += VAR_4; VAR_2 -= VAR_4; VAR_1 += VAR_4;
 }
 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
 VAR_3 += VAR_4; VAR_2 -= VAR_4; VAR_1 += VAR_4;
 FUNC_0(VAR_0->big_lock);
 return VAR_3;
}
