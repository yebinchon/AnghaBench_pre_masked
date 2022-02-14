
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct image_params {int dummy; } ;
typedef int str ;
typedef int entropy ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct image_params*,int ,int ,int ) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (char*,int,char*,...) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(struct image_params *VAR_3,
       const char *VAR_4,
       int VAR_5,
       boolean_t VAR_6)
{
 const int VAR_7 = 8;
 uint64_t VAR_8[VAR_7];
 char VAR_9[FUNC_4(VAR_4) + (VAR_1 + 1) * VAR_7 + 1];
 if (VAR_5 > VAR_7) {
  VAR_5 = VAR_7;
 }

    FUNC_2(VAR_8, sizeof(VAR_8[0]) * VAR_5);

 if (VAR_6) {
  VAR_8[0] &= ~(0xffull << 8);
 }

 int VAR_10 = FUNC_3(VAR_9, sizeof(VAR_9), "%s0x%llx", VAR_4, VAR_8[0]);
 int VAR_11 = sizeof(VAR_9) - VAR_10;
 for (int VAR_12 = 1; VAR_12 < VAR_5 && VAR_11 > 0; ++VAR_12) {
  int VAR_13 = sizeof(VAR_9) - VAR_11;
  VAR_10 = FUNC_3(&VAR_9[VAR_13], VAR_11, ",0x%llx", VAR_8[VAR_12]);
  VAR_11 -= VAR_10;
 }

 return FUNC_1(VAR_3, FUNC_0(VAR_9), VAR_2, VAR_0);
}
