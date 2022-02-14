
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int model ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (void*,char*,char*,int) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static inline u32 FUNC_5(void)
{
 void *VAR_3;
 char VAR_4[64];
 u32 VAR_5, VAR_6;

 VAR_3 = FUNC_2("/");
 if (!VAR_3)
  goto read_cs;

 if (FUNC_3(VAR_3, "model", VAR_4, sizeof(VAR_4)) <= 0)
  goto read_cs;

 VAR_4[sizeof(VAR_4)-1] = 0;

 if (!FUNC_4(VAR_4, "amcc,sequoia") ||
     !FUNC_4(VAR_4, "amcc,rainier"))
  return 1;

read_cs:

 VAR_5 = FUNC_1(VAR_0);

 VAR_5 = FUNC_0(VAR_5, VAR_1, VAR_2);
 VAR_6 = 0;
 while (VAR_5) {
  if (VAR_5 & 0x1)
   VAR_6++;
  VAR_5 = VAR_5 >> 1;
 }
 return VAR_6;
}
