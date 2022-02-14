
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,long) ;
 scalar_t__ FUNC_2 (int,unsigned long,int ) ;
 int FUNC_3 (char*) ;
 long FUNC_4 (int,int *,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_5(int VAR_3, char *VAR_4,
     uint64_t *VAR_5,
     unsigned long VAR_6,
     unsigned long VAR_7)
{
 long VAR_8;

 if (VAR_6 > VAR_2 / 8)
  FUNC_1("index overflow: %lu\n", VAR_6);

 if (FUNC_2(VAR_3, VAR_6 * 8, VAR_1) < 0) {
  FUNC_3(VAR_4);
  FUNC_0(VAR_0);
 }

 VAR_8 = FUNC_4(VAR_3, VAR_5, VAR_7 * 8);
 if (VAR_8 < 0) {
  FUNC_3(VAR_4);
  FUNC_0(VAR_0);
 }
 if (VAR_8 % 8)
  FUNC_1("partial read: %lu bytes\n", VAR_8);

 return VAR_8 / 8;
}
