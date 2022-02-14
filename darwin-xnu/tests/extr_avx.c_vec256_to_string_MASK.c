
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int a ;
typedef int VECTOR256 ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (char*,char*,int ,int ,int ,int ) ;

void
FUNC_3(VECTOR256 *VAR_2, char *VAR_3) {
 unsigned int VAR_4 = 0;
 unsigned int VAR_5 = 0;
 int VAR_6 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  uint64_t VAR_7[4];
  FUNC_1(&VAR_2[VAR_4], &VAR_7[0], sizeof(VAR_7));
  VAR_6 = FUNC_2(
   VAR_3 + VAR_5,
   "0x%016llx:%016llx:%016llx:%016llx\n",
   VAR_7[0], VAR_7[1], VAR_7[2], VAR_7[3]
  );
  VAR_0; FUNC_0(VAR_6, "sprintf()");
  VAR_5 += VAR_6;
 }
}
