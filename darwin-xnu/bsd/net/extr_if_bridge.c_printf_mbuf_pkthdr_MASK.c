
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ mbuf_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,char const*,...) ;

void
FUNC_6(mbuf_t VAR_0, const char *VAR_1, const char *VAR_2)
{
 if (VAR_0)
  FUNC_5("%spktlen: %u rcvif: 0x%llx header: 0x%llx "
      "nextpkt: 0x%llx%s",
      VAR_1 ? VAR_1 : "", (unsigned int)FUNC_3(VAR_0),
      (uint64_t)FUNC_0(FUNC_4(VAR_0)),
      (uint64_t)FUNC_0(FUNC_2(VAR_0)),
      (uint64_t)FUNC_0(FUNC_1(VAR_0)),
      VAR_2 ? VAR_2 : "");
 else
  FUNC_5("%s<NULL>%s\n", VAR_1, VAR_2);
}
