
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,char const*) ;
 void* FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (void*,char*,int*,int) ;

void FUNC_7(const char *VAR_6)
{
 void *VAR_7;
 u32 VAR_8;
 u32 VAR_9[VAR_5*4];
 u32 *VAR_10 = VAR_9;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  FUNC_5(VAR_0, FUNC_0(VAR_11));
  VAR_8 = FUNC_4(VAR_1);

  if ((VAR_8 & VAR_3) != VAR_4) {
   *VAR_10++ = VAR_11;
   *VAR_10++ = 0;
   *VAR_10++ = VAR_8 & VAR_2;
   *VAR_10++ = FUNC_1(VAR_8);
  }
 }

 VAR_7 = FUNC_3(VAR_6);
 if (! VAR_7)
  FUNC_2("Couldn't locate EBC node %s\n\r", VAR_6);

 FUNC_6(VAR_7, "ranges", VAR_9, (VAR_10 - VAR_9) * sizeof(u32));
}
