
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 int FUNC_3 (char*,unsigned long long,int ,int ) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0)
{
 uint64_t VAR_1 = FUNC_2(VAR_0, 0);

 FUNC_3("0x%016llx\t%s\t%s\n",
  (unsigned long long)VAR_1,
  FUNC_1(VAR_1),
  FUNC_0(VAR_1));
}
