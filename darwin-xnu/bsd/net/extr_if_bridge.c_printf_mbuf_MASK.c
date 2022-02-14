
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ mbuf_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,char const*,...) ;
 int FUNC_9 (scalar_t__,char*,char const*) ;

void
FUNC_10(mbuf_t VAR_1, const char *VAR_2, const char *VAR_3)
{
 if (VAR_1) {
  FUNC_8("%s0x%llx type: %u flags: 0x%x len: %u data: 0x%llx "
      "maxlen: %u datastart: 0x%llx next: 0x%llx%s",
      VAR_2 ? VAR_2 : "", (uint64_t)FUNC_0(VAR_1),
      FUNC_7(VAR_1), FUNC_3(VAR_1), (unsigned int)FUNC_4(VAR_1),
      (uint64_t)FUNC_0(FUNC_1(VAR_1)),
      (unsigned int)FUNC_5(VAR_1),
      (uint64_t)FUNC_0(FUNC_2(VAR_1)),
      (uint64_t)FUNC_0(FUNC_6(VAR_1)),
      !VAR_3 || (FUNC_3(VAR_1) & VAR_0) ? "" : VAR_3);
  if ((FUNC_3(VAR_1) & VAR_0))
   FUNC_9(VAR_1, " ", VAR_3);
 } else
  FUNC_8("%s<NULL>%s\n", VAR_2, VAR_3);
}
