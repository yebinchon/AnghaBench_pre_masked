
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;


 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static inline char *
FUNC_1(__u8 VAR_2)
{
 int VAR_3;
 static char VAR_4[256];

 VAR_4[0]='\0';
 for(VAR_3=0; VAR_3<8; VAR_3++) {
  if((1<<VAR_3) & VAR_2)
   FUNC_0(VAR_4, VAR_0[VAR_3]);
 }
 FUNC_0(VAR_4, VAR_1[VAR_2 & 0x07]);
 return VAR_4;
}
