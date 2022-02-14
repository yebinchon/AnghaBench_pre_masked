
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ap_qid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 ap_qid_t VAR_9;
 int VAR_10, VAR_11, VAR_12;






 if (VAR_3 >= 0 && VAR_3 < VAR_1)

  return 0;
 VAR_8 = -1;
 VAR_7 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  if (!FUNC_3(VAR_11))
   continue;
  VAR_6 = 0;
  for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
   if (!FUNC_2(VAR_12))
    continue;
   VAR_9 = FUNC_0(VAR_12, VAR_11);
   VAR_10 = FUNC_1(VAR_9, &VAR_4, &VAR_5);
   if (VAR_10)
    continue;
   VAR_6++;
  }
  if (VAR_6 > VAR_7) {
   VAR_7 = VAR_6;
   VAR_8 = VAR_11;
  }
 }
 if (VAR_8 >= 0){
  VAR_3 = VAR_8;
  return 0;
 }
 return -VAR_2;
}
